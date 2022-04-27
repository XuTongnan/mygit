#include "fondshow.h"
#include "ui_fondshow.h"
#include <QDebug>

fondShow::fondShow(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::fondShow)
{
    ui->setupUi(this);

}

fondShow::~fondShow()
{
    delete ui;
}

void fondShow::setStyle(const QString &value)
{
    style = value;
    QStringList slist=value.split("+");
    ui->label->setStyleSheet(slist[0]);
    ui->nameLb->setText(slist[1]);
    ui->money->setText(slist[2]);
}

void fondShow::setStyle(QString pic, QString name, QString cost)
{
    ui->label->setStyleSheet(pic);
    ui->nameLb->setText(name);
    ui->money->setText(cost);
}

QString fondShow::get_name()
{
    return ui->nameLb->text();
}

QString fondShow::get_money()
{
    return ui->money->text();
}

QString fondShow::get_num()
{
    return ui->numEdit->text();
}

bool fondShow::set_num(int num)
{
    ui->numEdit->setText(QString::number(num));
    return true;
}

void fondShow::on_addBt_clicked()
{
    int num = ui->numEdit->text().toInt();
    num ++;
    ui->numEdit->setText(QString::number(num));
    emit ADD();
}

void fondShow::on_addBt_2_clicked()
{
    int num = ui->numEdit->text().toInt();
    num --;
    if (num < 0)
        return ;
    ui->numEdit->setText(QString::number(num));
    emit SUB();
}

void fondShow::on_numEdit_textEdited(const QString &arg1)
{
    emit textEdited(arg1);
}
