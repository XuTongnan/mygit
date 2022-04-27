#include "table.h"
#include "ui_table.h"
#include <QDebug>
#include <QInputDialog>
#include <QMessageBox>

Table::Table(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Table)
{
    ui->setupUi(this);
    socket = nullptr;

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); // 横向自适应
    ui->tableWidget->setColumnCount(3); // 设置3列
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "菜名" << "价格" << "数量");
}

Table::~Table()
{
    delete ui;
}

void Table::set_tableRow(int row)
{
    ui->tableWidget->setColumnCount(row);
}

void Table::set_tableCol(int col)
{
    ui->tableWidget->setColumnCount(col);
}

void Table::set_tableTitle(QStringList slist)
{
    ui->tableWidget->setHorizontalHeaderLabels(slist);
}

void Table::set_tableItem(int row, int col, QTableWidgetItem *item)
{
    qDebug() << row << col << item->text();
    ui->tableWidget->setItem(row, col, item);
}

void Table::set_table(QByteArray data)
{
    ui->tableWidget->clearContents(); // 先清除旧数据

    QJsonParseError error;
    QJsonDocument doc = QJsonDocument::fromJson(data, &error);
    if(error.error != QJsonParseError::NoError) return ;

    AllJsonObj = doc.object();
    ui->tableWidget->setRowCount(AllJsonObj.size());//根据菜单设置行数
    QStringList titlelist = AllJsonObj.keys();//从key值列表中遍历
    int i = 0, j = 0;
    double allmoney = 0;
    for(QString title : titlelist)
    {
        QJsonObject needobj = AllJsonObj.value(title).toObject();
        QString name  = needobj.value("菜名").toString();
        QString money = needobj.value("价格").toString();
        QString num   = needobj.value("数量").toString();
        ui->tableWidget->setItem(i, j, new QTableWidgetItem(name));
        ui->tableWidget->setItem(i, j+1, new QTableWidgetItem(money));
        ui->tableWidget->setItem(i, j+2, new QTableWidgetItem(num));
        i ++;
        double moneyInt = num.toInt() * money.split('/')[0].toDouble();//计算价格
        allmoney += moneyInt;
    }
    ui->moneyNum->setText(QString("%1元").arg(allmoney));

}

void Table::set_peopleLb(QString num)
{
    ui->peopleNum->setText(num);
}

void Table::set_moneyLb(QString num)
{
    ui->moneyNum->setText(num + "元");
}

double Table::get_money()
{
    return ui->moneyNum->text().split("元").at(0).toDouble();
}

void Table::set_payStatusLb(QString statue)
{
    ui->payStatuLb->setText(statue);

    if (statue == "未支付")
        ui->payStatuLb->setStyleSheet("color: rgb(255, 0, 0);");

    if (statue == "已支付")
        ui->payStatuLb->setStyleSheet("color: rgb(0, 255, 0);");
}

void Table::on_outputBt_clicked()
{
    QMessageBox::information(nullptr, "打印", "打印成功!", "好的");
}

void Table::on_changBt_clicked()
{
    if (ui->payStatuLb->text() == "已支付")
    {
        QMessageBox::warning(nullptr, "提示", "该订单已支付完成，无法修改", "好的");
        // 还原数据
        QJsonDocument doc;
        doc.setObject(AllJsonObj);
        set_table(doc.toJson());
        return ;
    }

    if (QMessageBox::question(nullptr, "修改订单", "确定修改订单？", "确定", "算了") != 0)
    {
        // 还原数据
        QJsonDocument doc;
        doc.setObject(AllJsonObj);
        set_table(doc.toJson());
        return ;
    }

    QJsonObject allobj;
    int rowSize = ui->tableWidget->rowCount();
    for (int i = 0; i < rowSize; ++i)
    {
        QString name = ui->tableWidget->item(i, 0)->text();
        QString money = ui->tableWidget->item(i, 1)->text();
        QString num = ui->tableWidget->item(i, 2)->text();

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
    }
    //转换json数据为QByteArray
    QJsonDocument doc;
    doc.setObject(allobj);
    QByteArray data = doc.toJson();
    set_table(data); // 重新设置表格数据
    if (socket->write(data) < 0)
    {
        QMessageBox::warning(nullptr, "出错", "与客户端连接出现问题，请确保连接后重试", "好的");
        return ;
    }
    socket->waitForBytesWritten();
}

void Table::setSocket(QTcpSocket *value)
{
    socket = value;
}

void Table::cleanTable()
{
    ui->tableWidget->clear();
}

