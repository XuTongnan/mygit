#include "clientwin.h"
#include "ui_clientwin.h"

#include <QInputDialog>
#include <QMessageBox>

ClientWin::ClientWin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientWin)
{
    ui->setupUi(this);
    user = "007";
    password = "123456";
    IP = ui->IPLb->text();
    mainW = nullptr;

    ui->widget->hide();
    ui->nameEdit->installEventFilter(this);//安装事件过滤器
    ui->pwdEdit->installEventFilter(this);
}

ClientWin::~ClientWin()
{
    if (mainW != nullptr)
        delete mainW;

    delete ui;
}

bool ClientWin::eventFilter(QObject *obj, QEvent *e)
{
    if(obj->inherits("QLineEdit"))
    {
        if(e->type() == QEvent::FocusIn)
        {
            ui->widget->show();//显示键盘
        }
        if(e->type() == QEvent::FocusOut)
        {
            ui->widget->hide();
        }
    }

    return QMainWindow::eventFilter(obj, e);
}


void ClientWin::on_loginBt_clicked()
{
    if (ui->pwdEdit->text() == password)
    {
        mainW = new MainWin(IP);
        mainW->setUser(ui->nameEdit->text());
        mainW->setPassword(ui->pwdEdit->text());
        mainW->show();
        this->close();
    }else
        QMessageBox::warning(nullptr, "登录", "密码有误，请联系柜台~", "好的");
}

void ClientWin::on_IPchange_clicked()
{
    QString IPString = QInputDialog::getText(nullptr, "修改IP", "请输入新IP");
    if(IPString.isEmpty())
        return ;

    IP = IPString;
    ui->IPLb->setText(IP);
}
