#include "datetimeshow.h"
#include "ui_datetimeshow.h"

#include <QMessageBox>

DateTimeShow::DateTimeShow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DateTimeShow)
{
    ui->setupUi(this);
//    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint); // 隐藏标题栏
    this->setWindowFlags(Qt::Dialog | Qt::WindowMinMaxButtonsHint); // 隐藏关闭按钮(只留变大小的按钮)

    timeId = startTimer(1000);
    ui->timeLb_2->setText(QTime::currentTime().toString("hh:mm:ss"));
}

DateTimeShow::~DateTimeShow()
{
    killTimer(timeId);
    delete ui;
}

void DateTimeShow::timerEvent(QTimerEvent *e)
{
    ui->timeLb_2->setText(QTime::currentTime().toString("hh:mm:ss"));

    QMainWindow::timerEvent(e);
}

void DateTimeShow::on_closeBt_2_clicked()
{
    delete this;
}

void DateTimeShow::on_addEventBt_2_clicked()
{
    QMessageBox::information(nullptr, "农历", "敬请期待...", "等你");
}
