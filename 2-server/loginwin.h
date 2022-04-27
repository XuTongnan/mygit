#ifndef LOGINWIN_H
#define LOGINWIN_H

#include <QMainWindow>
#include "serverwin.h"

namespace Ui {
class LoginWin;
}

class LoginWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWin(QWidget *parent = nullptr);
    ~LoginWin();

private slots:
    void on_loginBt_clicked();

private:
    Ui::LoginWin *ui;
    QString user;
    QString password;
    ServerWin *serverwin;
};

#endif // LOGINWIN_H
