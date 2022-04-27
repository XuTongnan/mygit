#include "loginwin.h"
#include "ui_loginwin.h"

#include <QMessageBox>

LoginWin::LoginWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWin)
{
    ui->setupUi(this);
    serverwin = nullptr;
    user = "007";
    password = "123456";
}

LoginWin::~LoginWin()
{
    if (serverwin != nullptr)
        delete serverwin;

    delete ui;
}

void LoginWin::on_loginBt_clicked()
{
    if(ui->pwdEdit->text() == password)
    {
        serverwin = new ServerWin();
        user = ui->nameEdit->text();
        serverwin->setUser(ui->nameEdit->text());
        serverwin->setPassword(ui->pwdEdit->text());
        serverwin->show();
        this->close();
        // 连接数据库
        QSqlDatabase serverDb = QSqlDatabase::addDatabase("QSQLITE");
        serverDb.setDatabaseName("Order.db");
        if (!serverDb.open())
        {
            QString db_error =  "数据库打开出错：" + serverDb.lastError().text();
            QMessageBox::warning(nullptr, "出错", db_error, "知道了");
        }
        QString createTable = "create table if not exists orders(orderId text, deskNum text, "
                              "foodName text, foodMoney double, foodCount int, allMoney double, payTime text, waiterId text);";
        QSqlQuery query;
        if (!query.exec(createTable))
        {
            QString qu_error =  "创建表格出错：" + query.lastError().text();
            QMessageBox::warning(nullptr, "出错", qu_error, "知道了");
        }

    }else
        QMessageBox::warning(nullptr, "登录", "密码有误", "好的");
}
