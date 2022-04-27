#include "buylist.h"
#include "getmoney.h"
#include "mainwin.h"
#include "ui_buylist.h"
#include <QDebug>
#include <QMessageBox>

buyList::buyList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::buyList)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); // 横向自适应
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "菜名" << "价格" << "数量");
    allmoney = 0; // 初始化
    getmoney = nullptr;

    connect(this, &buyList::CommitOrder, dynamic_cast<MainWin *>(parent), &MainWin::commitOrder);
}

buyList::~buyList()
{
    delete ui;
}

void buyList::set_List(QByteArray data, int peoplenum)
{
    ui->numLb->setText(QString::number(peoplenum));

    QJsonParseError error;
    QJsonDocument doc = QJsonDocument::fromJson(data, &error);
    if(error.error != QJsonParseError::NoError) return ;

    ui->tableWidget->clear(); // 清除旧数据
    allmoney = 0;
    obj = doc.object();
    ui->tableWidget->setRowCount(obj.size()); // 根据菜单设置行数
    QStringList titlelist = obj.keys(); // 从key值列表中遍历
    int i = 0, j = 0;
    for(QString title : titlelist)
    {
        QJsonObject needobj = obj.value(title).toObject();
        QString name  = needobj.value("菜名").toString();
        QString money = needobj.value("价格").toString();
        QString num   = needobj.value("数量").toString();
        ui->tableWidget->setItem(i, j, new QTableWidgetItem(name));
        ui->tableWidget->setItem(i, j+1, new QTableWidgetItem(money));
        ui->tableWidget->setItem(i, j+2, new QTableWidgetItem(num));
        i += 1;
        double moneyDou = num.toInt() * money.split('/')[0].toDouble();//计算价格
        allmoney += moneyDou;
    }

    ui->costnum->setText(QString::number(allmoney));
    ui->costForOne->setText(QString::number(allmoney / peoplenum));
}

void buyList::set_buyBt(QString text)
{
    ui->buyBt->setText(text);
}

void buyList::on_backBt_clicked()
{
    this->close();
}

void buyList::on_buyBt_clicked()
{
    emit CommitOrder(); // 发送提交信号
}
