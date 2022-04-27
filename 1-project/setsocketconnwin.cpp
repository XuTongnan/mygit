#include "setsocketconnwin.h"
#include "ui_setsocketconnwin.h"

#include <QMessageBox>
#include <QThread>

SetSocketConnWin::SetSocketConnWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SetSocketConnWin)
{
    ui->setupUi(this);
}

// 重载
SetSocketConnWin::SetSocketConnWin(MainWin *mainwin, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SetSocketConnWin),
    mainWin(mainwin)
{
    ui->setupUi(this);
//    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint); // 隐藏标题栏
    this->setWindowFlags(Qt::Dialog | Qt::WindowMinMaxButtonsHint); // 隐藏关闭按钮(只留变大小的按钮)

    if (mainWin->getAutoflag()){
        autoFlag = true;
        ui->autoRB->setChecked(true);
        on_autoRB_clicked(true);
    }
    else {
        autoFlag = false;
        ui->manualRB->setChecked(true);
        on_manualRB_clicked(true);
    }

    ui->IPEdit->setText(mainWin->getIPaddr());
    ui->PortEdit->setText(QString::number(mainWin->getPort()));
    quint32 overTime = mainWin->getSystemOver_time();
    ui->sysOverTime->setValue(overTime);
    ui->interTime->setRange(1, overTime);
    ui->interTime->setValue(mainWin->getInterTime());
//    ui->connectBt->setEnabled(false);

    if (mainWin->getServerstatus())
    {
        ui->conState->setText("已连接");
        ui->conState->setStyleSheet("color: rgb(0, 255, 0);");
    }

    connect(&mytimer, &QTimer::timeout, this, &SetSocketConnWin::lookAt_conn);
    mytimer.start(1000);

    connect(this, &SetSocketConnWin::SOCKET_CONN, mainWin, &MainWin::manual_conn);
}

SetSocketConnWin::~SetSocketConnWin()
{
    mytimer.stop();
    delete ui;
}

void SetSocketConnWin::on_autoRB_clicked(bool checked)
{
    if (checked)
    {
        autoFlag = true;
        mainWin->setAutoflag(true); // 开启自动
        ui->connectBt->setText("设置");
        ui->interTime->show();
        ui->inter_left->show();
        ui->inter_right->show();
        ui->sysOverTime->show();
        ui->overTime_left->show();
        ui->overTime_right->show();
        ui->setTimeBt->show();
    }
}

void SetSocketConnWin::on_manualRB_clicked(bool checked)
{
    if (checked)
    {
        autoFlag = false;
        mainWin->setAutoflag(false);
        ui->connectBt->setText("连接");
        ui->interTime->hide();
        ui->inter_left->hide();
        ui->inter_right->hide();
        ui->sysOverTime->hide();
        ui->overTime_left->hide();
        ui->overTime_right->hide();
        ui->setTimeBt->hide();
    }
}

void SetSocketConnWin::lookAt_conn()
{
    if (mainWin->getServerstatus())
    {
        ui->conState->setText("已连接");
        ui->conState->setStyleSheet("color: rgb(0, 255, 0);");
    }
    else
    {
        ui->conState->setText("未连接");
        ui->conState->setStyleSheet("color: rgb(255, 0, 0);");
    }
}

void SetSocketConnWin::on_closeBt_clicked()
{
    delete this;
}

void SetSocketConnWin::on_connectBt_clicked()
{
    if (autoFlag) // 自动模式下为设置按钮
    {
        mainWin->setIPaddr(ui->IPEdit->text());
        mainWin->setPort(ui->PortEdit->text().toUShort());
        QMessageBox::information(nullptr, "设置", "设置成功~", "好的");
//        ui->connectBt->setEnabled(false);
        return ;
    }

    if (ui->conState->text() == "已连接")
    {
        if (QMessageBox::warning(nullptr, "警告", "当前是已连接状态，确定重新连接？", "确定", "那算了") != 0)
            return ;
    }

    mainWin->setIPaddr(ui->IPEdit->text());
    mainWin->setPort(ui->PortEdit->text().toUShort());

    emit SOCKET_CONN(); // 发信号

    if (mainWin->getMsocket()->waitForConnected())
        QMessageBox::information(nullptr, "连接情况", "连接成功！", "好的");
    else
        QMessageBox::information(nullptr, "连接情况", "连接失败，请确认IP和端口号的输入~", "好的");

//    ui->connectBt->setEnabled(false);
}

void SetSocketConnWin::on_IPEdit_textChanged(const QString &arg1)
{
//    ui->connectBt->setEnabled(true);
}

void SetSocketConnWin::on_PortEdit_textChanged(const QString &arg1)
{
//    ui->connectBt->setEnabled(true);
}

void SetSocketConnWin::on_setTimeBt_clicked()
{
    mainWin->setInterTime(ui->interTime->value());
    mainWin->setSystemOver_time(ui->sysOverTime->value());
    ui->interTime->setRange(1, ui->sysOverTime->value());
    QMessageBox::information(nullptr, "设置结果", "设置成功！", "好的");
}
