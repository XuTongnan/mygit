#include "datetimeshow.h"
#include "mainwin.h"
#include "setsocketconnwin.h"
#include "ui_mainwin.h"
#include <QDate>
#include <QTime>
#include <QDebug>
#include <QMessageBox>
#include <QThread>
#include <QHeaderView>
#include <QTextCodec>


MainWin::MainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWin)
{
    ui->setupUi(this);
}

//重载构造函数
MainWin::MainWin(QString IP, QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWin)
{
    ui->setupUi(this);

    // 数据初始化
    allmoney = 0;
    socket_timeout = 0;
    systemOver_time = 3600; // 默认1小时
    interTime = 5; // 默认5秒间隔
    sendflag = false;
    buyflag = false; // 还没付过款
    autoflag = true; // 默认打开自动连接
    serverstatus = false;
    IPaddr = IP;
    Port = 9908;
    timeid = startTimer(1000); // 时间事件
    buylist = nullptr;

    connect(&msocket, &QTcpSocket::readyRead, this, &MainWin::read_data);
    connect(&msocket, &QTcpSocket::bytesWritten, this, &MainWin::send_data);
    connect(&msocket, &QTcpSocket::connected, this, &MainWin::socket_conn);
    connect(&msocket, &QTcpSocket::disconnected, this, &MainWin::socket_discon);

    msocket.connectToHost(IPaddr, Port);

    ui->tabWidget->setMovable(true); // 设置滑动
    statusBar_init(); // 初始化状态栏
    Init_Win(); // 初始化菜品窗口
}

MainWin::~MainWin()
{
    killTimer(timeid);
    delete ui;
}

bool MainWin::Init_Win(int colnum) // 默认3列
{
    QSettings nameSet("./foodSet.ini", QSettings::IniFormat);
//    nameSet.setIniCodec(QTextCodec::codecForName("UTF-8")); // 解决乱码
    QStringList namekeys = nameSet.allKeys();

    for (auto namekey : namekeys) // 根据key值遍历
    {
        QString type = QString::fromUtf8(namekey.split("/")[0].toLatin1()); // 窗口标题
        QString name = QString::fromUtf8(namekey.split("/")[1].toLatin1()); // 菜名(各种转换是为了解决乱码)
        type_names.insert(type, name);
        QStringList pic_cost = nameSet.value(namekey).toString().split("+");
        name_pics[name] = QString::fromUtf8(pic_cost[0].toLatin1()); //
        name_costs[name] = QString::fromUtf8(pic_cost[1].toLatin1()); // 为什么好像只有tolatin1能生效，因为这才是原本格式的输出，其他做过某些处理
    }

    QStringList types = type_names.keys();
    QString type_flag;
    for (QString type : types)
    {
        if (type_flag != type) // 判断是否出现过
            type_flag = type;
        else
            continue;

        // 创建表格
        QTableWidget *tablewg = new QTableWidget(this);
        tablewg->verticalHeader()->setVisible(false); // 隐藏表头
        tablewg->horizontalHeader()->setVisible(false);
        tablewg->setShowGrid(false); // 隐藏表格线
        tablewg->setSelectionMode(QAbstractItemView::NoSelection); // 不可选中
        tablewg->setEditTriggers(QAbstractItemView::NoEditTriggers); // 不可编辑
        tablewg->setColumnCount(colnum); // 只设置列数，行数动态增加
        tablewg->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); // 自动铺满

        QStringList names = type_names.values(type);
        int row = -1; // 行号
        int col = 0; // 列号
        for (QString name : names)
        {
            fondShow *frame = new fondShow();

            frame->setStyle(name_pics[name], name, name_costs[name]);
            name_foodShow[name] = frame;

            // 连接信号
            connect(frame, &fondShow::ADD, this, &MainWin::change_data);
            connect(frame, &fondShow::SUB, this, &MainWin::change_data);
            connect(frame, &fondShow::textEdited, this, &MainWin::change_data);

            QTableWidgetItem *item = new QTableWidgetItem();
            item->setSizeHint(frame->size());

            if (row != col / colnum)
            {
                row = col / colnum;
                tablewg->insertRow(row); // 注意at row
                tablewg->setRowHeight(row, frame->height());
                tablewg->setItem(row, col % colnum, item);
                tablewg->setCellWidget(row, col % colnum, frame); // 设置窗口显示为我们要的widget
            }
            else{
                tablewg->setItem(row, col % colnum, item);
                tablewg->setCellWidget(row, col % colnum, frame); // 设置窗口显示为我们要的widget
            }

            col ++; // 列++
        }
        // 插入新窗口
        ui->tabWidget->addTab(dynamic_cast<QWidget *>(tablewg), type);
    }
    return true;
}

void MainWin::setUser(const QString &value)
{
    user = value;
    ui->deskNum->setText(user);
}

void MainWin::setPassword(const QString &value)
{
    password = value;
}

void MainWin::setStatusText(QString data)
{
    if (data.isEmpty())
        return ;

}

void MainWin::statusBar_init()
{
    QString data_time = QString("   %1   ").arg(QDateTime::currentDateTime().toString("yy-MM-dd hh:mm:ss"));

    timeshow = new QPushButton(data_time);
    timeshow->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->statusbar->addWidget(timeshow);

    socketBt = new QPushButton("   晴转多云 (26℃)   ");
    socketBt->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->statusbar->addWidget(socketBt);

    my = new QPushButton("   加油!干饭人!!!   ");
    my->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->statusbar->addWidget(my);

//    QFileInfo fileInfo("./1-project.exe"); // 本来想根据修改时间确定版本号的
    QString abort = QString("   版本号: %1   ").arg("22.4 of XTN");
    abortBt = new QPushButton(abort);
    abortBt->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->statusbar->addWidget(abortBt);

    connect(abortBt, &QPushButton::clicked, this, &MainWin::showAbort);
    connect(timeshow, &QPushButton::clicked, this, &MainWin::showBigTime);
    connect(socketBt, &QPushButton::clicked, this, &MainWin::setConnParm);
    connect(my, &QPushButton::clicked, this, &MainWin::showMyself);
}

void MainWin::timerEvent(QTimerEvent *e)
{
    // 刷新时间
    QString data_time = QString("   %1   ").arg(QDateTime::currentDateTime().toString("yy-MM-dd hh:mm:ss"));
    timeshow->setText(data_time);

    if (autoflag)
    {
        socket_timeout ++; // 重连计数
        if (!serverstatus && socket_timeout % interTime == 0)
        {
            socketBt->setText("   *_*正在尝试连接   ");
            msocket.connectToHost(IPaddr, Port);
        }
    }
    else
        socket_timeout = 1;
    
    if (serverstatus)
    {
        socketBt->setText("   ^_^服务器已连接   ");
        socket_timeout = 0;
    }
    else if (socket_timeout % interTime)
    {
        socketBt->setText("   >_<服务器已断开   ");
        ui->serverNum->setText("未知");
    }

    if (socket_timeout >= systemOver_time) // 超时关闭
    {
        QMessageBox::warning(nullptr, "警告", "连接超时，系统关闭!!!", "确认");
        exit(0);
    }

    QMainWindow::timerEvent(e);
}

void MainWin::change_data()
{
    fondShow *adder = dynamic_cast<fondShow *> (sender());

    if (ui->peopleBox->text().toInt() == 0){
        QMessageBox::warning(nullptr, "请等一下", "请先选择就餐人数，方便配置餐具哦~", "好的");
        adder->set_num(0); // 其他窗口已经为0，不需要重复清除，提升效率
        return ;
    }

    if (buyflag){
        int ret = QMessageBox::question(nullptr, "临时加餐", "是否加餐？", "是的", "不用了", 0);
        if(ret == 0){
            allmoney = 0; // 继续计算后面的钱
            buyflag = false;
            addobj = allobj; // 保留上一次订单数据
            QJsonObject tempobj; // 利用临时变量清除原值
            allobj = tempobj;
        }
        else{
            adder->set_num(0); // 其他窗口已经为0，不需要重复清除，提升效率
            return ;
        }
    }

    QString name = adder->get_name();
    QString money = adder->get_money();
    QString num = adder->get_num();

    if(!name.isEmpty() && !money.isEmpty() && !num.isEmpty())
    {
        QJsonObject obj;
        obj.insert("菜名", name);
        obj.insert("价格", money);
        obj.insert("数量", num);

        if (num.toInt() == 0) // 0说明不需要这道菜
            allobj.remove(name);
        else
            allobj.insert(name, obj);

    }else return ;

    //转换json数据为QByteArray
    QJsonDocument doc;
    doc.setObject(allobj);
    data = doc.toJson();
}

void MainWin::calcMoney() // 计算价格
{
    //计算价格
    allmoney = 0;
    QStringList titlelist = allobj.keys();//从key值列表中遍历
    for(QString title : titlelist)
    {
        QJsonObject needobj = allobj.value(title).toObject();
        QString money_1 = needobj.value("价格").toString();
        QString num_1 = needobj.value("数量").toString();

        double moneyDoub = num_1.toInt() * money_1.split('/')[0].toDouble();//计算价格
        allmoney += moneyDoub;
    }
}

bool MainWin::commitOrder()
{
    if (!serverstatus){
        QMessageBox::warning(nullptr, "出错", "数据提交出错，可能是服务器未连接，请联系柜台", "好的");
        return false;
    }

    if (buyflag){
        QMessageBox::information(nullptr, "付款", "您已支付，无需重复付款~", "好的");
        return false;
    }

    sendflag = true;
    qint64 ret = msocket.write(QString("%1+%2").arg(ui->deskNum->text()).arg(ui->peopleBox->text()).toUtf8());
    if(ret < 0){
        sendflag = false;
        QMessageBox::warning(nullptr, "出错", "数据提交出错，可能是服务器连接出错，请联系柜台", "好的");
        return false;
    }    

    calcMoney(); // 计算价格

    QString order = QString("%1%2%3%4").arg(QDate::currentDate().toString("yyyyMMdd"))
            .arg(QTime::currentTime().toString("hhmmss")).arg(qrand() % 10).arg(qrand() % 10);
    ui->orderNum->setText(order);

    int messageret = QMessageBox::question(nullptr, "提交成功", "提交完成，是否现在付款?", "可以", "等一下再说");
    if(messageret == 0)
        on_moneyBt_clicked(); // 打开结账

    return true;
}

void MainWin::on_buyBt_clicked()
{
    if (data.isEmpty())
    {
        QMessageBox::warning(nullptr, "警告", "没有任何订单数据", "好的");
        return ;
    }

    if (buylist == nullptr)
        buylist = new buyList(this);

    if (buyflag)
        buylist->set_buyBt("已支付");
    else
        buylist->set_buyBt("提交");

    buylist->set_List(data, ui->peopleBox->value());
    buylist->show();
}

void MainWin::on_helpBt_clicked()
{
    if (!serverstatus)
    {
        QMessageBox::warning(nullptr, "出错", "数据提交出错，可能是服务器未连接，请联系柜台", "好的");
        return ;
    }

    int ret = QMessageBox::question(nullptr, "服务呼叫", "是否呼叫?", "是的", "不用了");
    if(ret == 0)
    {
        if (msocket.write(QString("help+help+%1").arg(ui->deskNum->text()).toUtf8()) < 0)
            QMessageBox::warning(nullptr, "呼叫失败", "呼叫失败，可能是服务器连接出错，请联系柜台", "好的");
        else
            QMessageBox::information(nullptr, "呼叫成功", QString("已为您通知服务人员，工号 %1").arg(ui->serverNum->text()), "好的");
    }
}

void MainWin::on_moneyBt_clicked()
{
    if (!serverstatus){
        QMessageBox::warning(nullptr, "出错", "数据提交出错，可能是服务器未连接，请联系柜台", "好的");
        return ;
    }

    if (buyflag){
        QMessageBox::information(nullptr, "付款", "您已支付，无需重复付款~", "好的");
        return ;
    }

    if (allmoney == 0){
        QMessageBox::warning(nullptr, "警告", "请先提交订单再付款哦~", "好的");
        return ;
    }

    getMoney *getmoney = new getMoney(this);
    getmoney->setWin(QString::number(allmoney));
    getmoney->show();
}

bool MainWin::getBuyflag() const
{
    return buyflag;
}

double MainWin::getAllmoney() const
{
    return allmoney;
}

QTcpSocket* MainWin::getMsocket()
{
    return &msocket;
}

void MainWin::pay_ing()
{
    if (!serverstatus){
        QMessageBox::warning(nullptr, "出错", "数据提交出错，可能是服务器未连接，请联系柜台", "好的");
        return ;
    }

    int ret = msocket.write(QString("pay+ing+%1").arg(ui->deskNum->text()).toUtf8());
    if (ret < 0)
        QMessageBox::warning(nullptr, "paying", "消息发送出错！", "好的");
}

void MainWin::pay_end()
{
    if (!serverstatus){
        QMessageBox::warning(nullptr, "出错", "数据提交出错，可能是服务器未连接，请联系柜台", "好的");
        return ;
    }

    int ret = msocket.write(QString("pay+end+%1").arg(ui->deskNum->text()).toUtf8());
    if (ret < 0){
        QMessageBox::warning(nullptr, "payend", "消息发送出错！", "好的");
        return ;
    }

    if (buylist != nullptr)
        buylist->set_buyBt("已支付");
}

void MainWin::pay_wait()
{
    if (!serverstatus){
        QMessageBox::warning(nullptr, "出错", "数据提交出错，可能是服务器未连接，请联系柜台", "好的");
        return ;
    }

    int ret = msocket.write(QString("pay+wait+%1").arg(ui->deskNum->text()).toUtf8());
    if (ret < 0){
        QMessageBox::warning(nullptr, "paywait", "消息发送出错！", "好的");
        return ;
    }
}

void MainWin::setFoodNum(int num) // 设置食物计数
{
    QList<fondShow *> foods = name_foodShow.values();
    for (auto food : foods)
    {
        food->set_num(num);
    }
}

void MainWin::read_data()
{
    QTcpSocket *socket = (QTcpSocket *)sender();
    QByteArray data = socket->readAll();

    QString strData = QString(data);
    if (strData == "pay success"){
        buyflag = true;
        emit PAY_FLAG(true);
        setFoodNum(0);
    }
    if (strData[0] == 'm'){
        ui->serverNum->setText(strData.split(":")[1]);
    }

    // 可能是修改订单的数据，里面自己会判断数据格式
    setFoodNum(data);

    if (buylist != nullptr)
        buylist->set_List(data, ui->peopleBox->value());
}

bool MainWin::setFoodNum(QByteArray data)
{
    if (data.isEmpty())
        return false;

    QJsonParseError error;
    QJsonDocument doc = QJsonDocument::fromJson(data, &error);
    if(error.error != QJsonParseError::NoError)
        return false;

    this->data = data;
    this->allobj = doc.object();
    QStringList titles = allobj.keys();
    for (auto title : titles)
    {
        QJsonObject food = allobj.value(title).toObject();
        QString name = food.value("菜名").toString();
//        QString money = food.value("价格").toString();
        QString num = food.value("数量").toString();

        name_foodShow[name]->set_num(num.toInt());
    }

    calcMoney(); // 重新计算价格

    return true;
}

// 发送完桌号后把菜品信息带过去
void MainWin::send_data()
{
    if(sendflag)
        msocket.write(data);
    sendflag = false;
}

void MainWin::on_foodBt_clicked()
{
    int ret = QMessageBox::question(nullptr, "菜品", "是否刷新菜品", "是的", "不用");
    if(ret == 0)
    {
        ui->tabWidget->clear();
        name_pics.clear();
        name_costs.clear();
        type_names.clear();
        data.clear();
        QJsonObject tempobj; // 利用临时变量清除原值
        allobj = tempobj;

        Init_Win();
    }
}

bool MainWin::getServerstatus() const
{
    return serverstatus;
}

int MainWin::getInterTime() const
{
    return interTime;
}

void MainWin::setInterTime(int value)
{
    interTime = value;
}

bool MainWin::getAutoflag() const
{
    return autoflag;
}

void MainWin::setAutoflag(bool value)
{
    autoflag = value;
}

quint16 MainWin::getPort() const
{
    return Port;
}

void MainWin::setPort(const quint16 &value)
{
    Port = value;
}

QString MainWin::getIPaddr() const
{
    return IPaddr;
}

void MainWin::setIPaddr(const QString &value)
{
    IPaddr = value;
}

void MainWin::socket_conn()
{
    qDebug() << "con";
    serverstatus = true;
    msocket.write(QString("myID:%1").arg(user).toUtf8());
}

void MainWin::socket_discon()
{
    qDebug() << "discon";
    serverstatus = false;
}

void MainWin::showAbort()
{
    QPushButton *pb = dynamic_cast<QPushButton *>(sender());
    QMessageBox::information(nullptr, "关于", QString("# 许统楠--毕业设计 #\n[%1]\n< xtn @版权所有 >").arg(pb->text().remove("   ")), "一键三连");
}

void MainWin::showBigTime()
{
    DateTimeShow *DTshow = new DateTimeShow();
    DTshow->show();
}

void MainWin::setConnParm()
{
    SetSocketConnWin *SSC = new SetSocketConnWin(this);
    SSC->show();
}

void MainWin::showMyself()
{
    QMessageBox::information(nullptr, "新功能?", "功能开发中...", "等你");
}

bool MainWin::manual_conn()
{
    if (serverstatus)
        msocket.disconnectFromHost();

    msocket.connectToHost(IPaddr, Port);
    return true;
}

void MainWin::on_InitOrderBt_clicked()
{
    int ret = QMessageBox::question(nullptr, "新订单", "是否创建新订单？", "是的", "不用", 0);
    if(ret == 0){
        allmoney = 0; // 继续计算后面的钱
        buyflag = false;
        name_pics.clear();
        name_costs.clear();
        type_names.clear();
        data.clear();
        QJsonObject tempobj; // 利用临时变量清除原值
        allobj = tempobj;

        ui->peopleBox->setValue(0);
        ui->orderNum->setText(" 提交订单后显示  ");
        setFoodNum(0);
    }
}

quint32 MainWin::getSystemOver_time() const
{
    return systemOver_time;
}

void MainWin::setSystemOver_time(const quint32 &value)
{
    systemOver_time = value;
}
