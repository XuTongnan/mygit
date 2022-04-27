#include "serverwin.h"
#include "ui_serverwin.h"

#include <QHostAddress>
#include <QDebug>
#include <QMessageBox>
#include <QNetworkInterface>
#include <QTime>

ServerWin::ServerWin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ServerWin)
{
    ui->setupUi(this);

    Port = "9908";
    mserver.listen(QHostAddress::Any, Port.toUShort());
    connect(&mserver, &QTcpServer::newConnection, this, &ServerWin::new_connect);

    coninfo = new ConnectInfo();
    connect(coninfo, &ConnectInfo::SET_IP_PORT, this, &ServerWin::set_IP_Port);
    coninfo->set_IPcomboBox(QNetworkInterface::allAddresses(), Port);

    timerId = startTimer(1000); // 开启定时器

    ui->tabWidget->setTabsClosable(true);
    ui->tabWidget->setMovable(true);
    QList<QHostAddress> allAddrs = QNetworkInterface::allAddresses();
    for (auto addr : allAddrs)
    {
        if (addr.toString().size() < 16) // 暂时选用第一个IPV4地址
        {
            ui->IPLb->setText(addr.toString()); // 显示本地ip
            break;
        }
    }

    //初始化状态栏
    timeBt = new QPushButton(QDateTime::currentDateTime().toString("  yy-MM-dd hh:mm:ss  "));
    timeBt->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->statusbar->addWidget(timeBt);

    connNumBt = new QPushButton(QString("  客户端连接数量: %1  ").arg(socketVec.size()));
    connNumBt->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->statusbar->addWidget(connNumBt);

    myBt = new  QPushButton("  晴转多云 (26℃)  ");
    myBt->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->statusbar->addWidget(myBt);

    abortBt = new QPushButton(QString("  版本号: %1  ").arg("22.4"));
    abortBt->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->statusbar->addWidget(abortBt);
    // 连接信号与槽
    connect(abortBt, &QPushButton::clicked, this, &ServerWin::showAbort);
    connect(timeBt, &QPushButton::clicked, this, &ServerWin::showBigTime);
    connect(connNumBt, &QPushButton::clicked, this, &ServerWin::setConnParm);
    connect(myBt, &QPushButton::clicked, this, &ServerWin::showMyself);
}

ServerWin::~ServerWin()
{
    killTimer(timerId);
    delete coninfo;
    coninfo = nullptr;
    delete ui;
}

void ServerWin::socket_discon()
{
    QTcpSocket *socket = dynamic_cast<QTcpSocket *>(sender());
    ui->payListW->addItem(QString("桌号 %1 已断开").arg(socket_name[socket]));
    socket_name.remove(socket);
    socketVec.removeOne(socket);
    if (socket_table.contains(socket))
    {
        delete socket_table[socket]; // 掉线就清除
        socket_table.remove(socket);
    }
    if (coninfo == nullptr)
        return ;
    if (!coninfo->islocalDel)
        coninfo->setList(socket_name);
    else
        coninfo->islocalDel = false;
}

void ServerWin::new_connect()
{
    QTcpSocket *socket = mserver.nextPendingConnection();
    qDebug()<< socket->peerAddress().toString().remove("::ffff:") << "已连接";

    connect(socket, &QTcpSocket::readyRead, this, &ServerWin::read_data);
    connect(socket, &QTcpSocket::disconnected, this, &ServerWin::socket_discon);

    socket->write(QString("myID:%1").arg(user).toUtf8());
    socketVec.push_back(socket);
}

void ServerWin::deal_data(QByteArray data, QTcpSocket *socket) // 处理数据
{
    if (data.isEmpty())
    {
        qDebug() << "data is empty!";
        return ;
    }

    QString recvdata = QString(data);
    if (recvdata.size() > 5 && recvdata.split(":")[0] == "myID")
    {
        QString deskNum = recvdata.split(":")[1];
        ui->payListW->addItem(QString("桌号 %1 已连接").arg(deskNum));
        socket_name[socket] = deskNum;
        coninfo->setList(socket_name);
        return ;
    }

    QJsonParseError error;
    QJsonDocument doc = QJsonDocument::fromJson(data, &error);
    if (error.error != QJsonParseError::NoError)
    {
        QStringList Num = QString(data).split("+");
        if (Num[0] == "pay" || Num[0] == "help")
        {
            if (Num[1] == "help")
                this->add_helpLW(Num[2]);
            else if (Num[1] == "ing")
                this->add_payLW(Num[2]);
            else if (Num[1] == "end")
                this->end_payLW(Num[2], socket);
            else if (Num[1] == "wait")
                this->add_payLW_wait(Num[2]);
        }else
        {
            deskNumList.append(Num[0]);
            deskNum = Num[0];
            peopleNum = Num[1];
        }
    }
    else
    {
        AllJsonObj = doc.object();
        QList<QTcpSocket*> stlist = socket_table.keys();
        if (stlist.contains(socket)) // 已经有了，更新即可
        {
            socket_table[socket]->set_table(data);
            socket_table[socket]->set_peopleLb(peopleNum);
        }
        else
        {
            Table *table = new Table();
            table->resize(ui->tabWidget->size());
            table->setSocket(socket);
            table->set_table(data);
            table->set_peopleLb(peopleNum);
            ui->tabWidget->addTab(table, deskNum);
            socket_table[socket] = table;
        }

        socket_table[socket]->set_payStatusLb("未支付");
    }
}

void ServerWin::read_data()
{
    QTcpSocket *socket = dynamic_cast<QTcpSocket*>(sender());

    QByteArray data = socket->readAll();

    deal_data(data, socket); // 处理数据
}


void ServerWin::on_tabWidget_tabCloseRequested(int index)
{
    QWidget *item = ui->tabWidget->widget(index);
    Table *table = dynamic_cast<Table*>(item);
    QTcpSocket *socket = socket_table.key(table);
    socket_table.remove(socket); // 移除相应的socket_table键值对
    ui->tabWidget->removeTab(index);
}

void ServerWin::setPassword(const QString &value)
{
    password = value;
}

void ServerWin::setUser(const QString &value)
{
    user = value;
    ui->managerLb->setText(user);
}


void ServerWin::add_helpLW(QString desknum)
{
    ui->helpListW->addItem(QString("桌号 %1 请求服务").arg(desknum));
}

void ServerWin::add_payLW(QString desknum)
{
    ui->payListW->addItem(QString("桌号 %1 正在结账...").arg(desknum));
}

void ServerWin::add_payLW_wait(QString desknum)
{
    ui->payListW->addItem(QString("桌号 %1 取消结账.").arg(desknum));
}

void ServerWin::end_payLW(QString desknum, QTcpSocket *socket)
{
    ui->payListW->addItem(QString("桌号 %1 已经结账，支付时间 %2").arg(desknum)
                          .arg(QTime::currentTime().toString("hh:mm:ss")));
//    socket_table[socket]->cleanTable();
    socket->write("pay success");
    socket_table[socket]->set_payStatusLb("已支付");
    // 记入数据库
    QString orderId = QTime::currentTime().toString("hhmmss");
    QString payTime = QTime::currentTime().toString("hh:mm:ss");
    QStringList titlelist = AllJsonObj.keys(); // 从key值列表中遍历
    for(QString title : titlelist)
    {
        QJsonObject needobj = AllJsonObj.value(title).toObject();
        QString foodName  = needobj.value("菜名").toString();
        double foodMoney = needobj.value("价格").toString().split("/")[0].toDouble();
        int foodCount = needobj.value("数量").toString().toInt();

        QString insertOrder = QString("insert into orders values('%1', '%2', '%3', %4, %5, %6, '%7', '%8');")
                .arg(orderId).arg(desknum).arg(foodName).arg(foodMoney).arg(foodCount)
                .arg(socket_table[socket]->get_money()).arg(payTime).arg(ui->managerLb->text());
        QSqlQuery query;
        if (!query.exec(insertOrder))
        {
            QString qu_error =  "插入数据出错：" + query.lastError().text();
            QMessageBox::warning(nullptr, "出错", qu_error, "知道了");
        }
    }
}

void ServerWin::timerEvent(QTimerEvent *e)
{
    QString data_time = QDateTime::currentDateTime().toString("  yy-MM-dd hh:mm:ss  ");
    timeBt->setText(data_time);
    connNumBt->setText(QString("  客户端连接数量: %1  ").arg(socketVec.size()));

    return QMainWindow::timerEvent(e);
}

void ServerWin::on_helpOver_clicked()
{
    QListWidgetItem *item = ui->helpListW->currentItem();
    delete item;
}

void ServerWin::on_clearPay_clicked()
{
    ui->payListW->clear();
}

void ServerWin::showAbort()
{
    QPushButton *pb = dynamic_cast<QPushButton *>(sender());
    QMessageBox::information(nullptr, "关于", QString("# 许统楠--毕业设计 #\n[%1]\n< xtn @版权所有 >").arg(pb->text().remove("  ")), "一键三连");
}

void ServerWin::showBigTime()
{
    DateTimeShow *DTshow = new DateTimeShow();
    DTshow->show();
}

void ServerWin::setConnParm()
{
//    coninfo->setList(socket_name);
    coninfo->show();
}

void ServerWin::showMyself()
{
    QMessageBox::information(nullptr, "新功能?", "功能开发中...", "好的");
}

bool ServerWin::set_IP_Port(QString Ip, QString Port)
{
    this->IP = Ip;
    this->Port = Port;
    ui->IPLb->setText(Ip);
    mserver.close();
//    mserver.listen(QHostAddress(IP), Port.toUShort());
    mserver.listen(QHostAddress::Any, Port.toUShort()); // 暂定所有选项皆可连接，提供方便性
    return true;
}
