#ifndef CLIENTWIN_H
#define CLIENTWIN_H

#include <QMainWindow>
#include "mainwin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ClientWin; }
QT_END_NAMESPACE

class ClientWin : public QMainWindow
{
    Q_OBJECT

public:
    ClientWin(QWidget *parent = nullptr);
    ~ClientWin();
    bool eventFilter(QObject *obj, QEvent *e);

private slots:

    void on_loginBt_clicked();

    void on_IPchange_clicked();

private:
    Ui::ClientWin *ui;
    QString user;
    QString password;
    QString IP;
    MainWin *mainW;
};
#endif // CLIENTWIN_H
