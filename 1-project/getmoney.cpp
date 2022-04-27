#include "getmoney.h"
#include "ui_getmoney.h"
#include "mainwin.h"
#include <QMessageBox>
#include <QThread>


getMoney::getMoney(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::getMoney)
{
    ui->setupUi(this);
//    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint); // 隐藏标题栏
    this->setWindowFlags(Qt::Dialog | Qt::WindowMinMaxButtonsHint); // 隐藏关闭按钮(只留变大小的按钮)

    buyflag = false;
    qDebug() << parent;
    MainWin *mainwin = (MainWin*)parent;
    connect(&manager, &QNetworkAccessManager::finished, this, &getMoney::down_pic);
    connect(this, &getMoney::PAYING, mainwin, &MainWin::pay_ing);
    connect(this, &getMoney::PAYEND, mainwin, &MainWin::pay_end);
    connect(this, &getMoney::PAYWAIT, mainwin, &MainWin::pay_wait);
    connect(mainwin, &MainWin::PAY_FLAG, this, &getMoney::isPAY);

    emit PAYING();
}

getMoney::~getMoney()
{
    delete ui;
}

// http://api.pwmqr.com/qrcode/create/?url=Example
// 备用接口
// http://api.qrserver.com/v1/create-qr-code/?size=150x150&data=Example
void getMoney::setWin(QString num)
{
    ui->numLb->setText(num);
    //发送http请求
    QUrl url(QString("http://api.qrserver.com/v1/create-qr-code/?size=150x150&data="
                     "此次消费%1元，此接口为测试使用，支付功能敬请期待...").arg(ui->numLb->text()));
    QNetworkRequest request(url);
    reply = manager.get(request);
}


void getMoney::down_pic()
{
    QByteArray array = reply->readAll();

    QPixmap pix;
    pix.loadFromData(array);
    ui->picLb->setPixmap(pix.scaled(ui->picLb->size())); // 缩放后放入
}

void getMoney::on_updataBt_clicked()
{
    ui->picLb->clear();
    QUrl url(QString("http://api.qrserver.com/v1/create-qr-code/?size=150x150&data="
                     "此次消费%1元，此接口为测试使用，支付功能敬请期待...").arg(ui->numLb->text()));
    QNetworkRequest request(url);
    reply = manager.get(request);
}

void getMoney::on_buyedBt_clicked()
{
    buyflag = true;
    emit PAYEND();
}

bool getMoney::isPAY(bool flag)
{
    if (flag)
    {
        QMessageBox::information(nullptr, "支付结果", "数据校验成功", "好的");
        delete this;
        return true; // 反馈结果
    }

    QMessageBox::warning(nullptr, "支付结果", "支付失败，请重试~", "好的");
    return false;
}

void getMoney::on_waitBt_clicked()
{
    QMessageBox::information(nullptr, "提醒", "待会可以直接点击付款哦~", "好的");
    emit PAYWAIT();
    delete this;
}
