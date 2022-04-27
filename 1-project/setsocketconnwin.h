#ifndef SETSOCKETCONNWIN_H
#define SETSOCKETCONNWIN_H

#include <QMainWindow>
#include "mainwin.h"
#include <QFlags>

namespace Ui {
class SetSocketConnWin;
}

class SetSocketConnWin : public QMainWindow
{
    Q_OBJECT

signals:
    void SOCKET_CONN();

public:
    explicit SetSocketConnWin(QWidget *parent = nullptr);
    SetSocketConnWin(MainWin *mainwin, QWidget *parent = nullptr);
    ~SetSocketConnWin();

protected slots:
    void lookAt_conn();
private slots:
    void on_autoRB_clicked(bool checked);

    void on_manualRB_clicked(bool checked);

    void on_closeBt_clicked();

    void on_connectBt_clicked();

    void on_IPEdit_textChanged(const QString &arg1);

    void on_PortEdit_textChanged(const QString &arg1);

    void on_setTimeBt_clicked();

private:
    Ui::SetSocketConnWin *ui;
    MainWin *mainWin;
    QTimer mytimer;
    bool autoFlag;
};

#endif // SETSOCKETCONNWIN_H
