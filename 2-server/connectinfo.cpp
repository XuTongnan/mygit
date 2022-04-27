#include "connectinfo.h"
#include "ui_connectinfo.h"

#include <QMessageBox>

ConnectInfo::ConnectInfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ConnectInfo)
{
    ui->setupUi(this);
//    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint); // 隐藏标题栏
    this->setWindowFlags(Qt::Dialog | Qt::WindowMinMaxButtonsHint); // 隐藏关闭按钮(只留变大小的按钮)
    islocalDel = false;
}

ConnectInfo::~ConnectInfo()
{
    delete ui;
}

bool ConnectInfo::setList(QMap <QTcpSocket *, QString>& socket_name)
{
    ui->listWidget->clear();
    item_socket.clear();
    for (auto it = socket_name.begin(); it != socket_name.end(); it ++)
    {
        QString ip = it.key()->peerAddress().toString();
        ip.remove("::ffff:"); // 移除不需要的字符
        QString deskInfo = QString("桌号: %1 （IP: %2）").arg(it.value()).arg(ip);
        ui->listWidget->insertItem(0, deskInfo);
        item_socket[ui->listWidget->item(0)] = it.key();
    }

    return true;
}

void ConnectInfo::on_closeBt_clicked()
{
    this->close();
}

void ConnectInfo::on_disConnectBt_clicked()
{
    if (ui->listWidget->count() == 0)
    {
        QMessageBox::warning(nullptr, "警告", "列表为空，无需断连", "好的");
        return ;
    }

    QListWidgetItem *item = ui->listWidget->currentItem();
    if (item == nullptr)
    {
        QMessageBox::warning(nullptr, "警告", "请选中要断开的桌号及IP", "好的");
        return ;
    }

    islocalDel = true;
    item_socket[item]->disconnectFromHost();
    item_socket.remove(item);
    delete item;
}

void ConnectInfo::on_allSelectBt_clicked()
{
    if (ui->listWidget->count() == 0)
    {
        QMessageBox::warning(nullptr, "警告", "列表为空，无需断连", "好的");
        return ;
    }

    for (auto item : item_socket.keys())
    {
        islocalDel = true;
        item_socket[item]->disconnectFromHost();
        item_socket.remove(item);
        delete item;
    }
}

void ConnectInfo::on_updateBt_clicked()
{

}

void ConnectInfo::on_setConnectBt_clicked()
{
    QString IP = ui->IPcomboBox->currentText();
    QString Port = ui->PortEdit->text();
    SET_IP_PORT(IP, Port); // 发信号
}

void ConnectInfo::set_IPcomboBox(QList<QHostAddress> allAddrs, QString Port)
{
    for (auto addr : allAddrs)
    {
        if (addr.toString().size() < 16) // 暂时选用IPV4地址，方便连接
            ui->IPcomboBox->addItem(addr.toString());
    }
    ui->PortEdit->setText(Port);
}
