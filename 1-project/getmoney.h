#ifndef GETMONEY_H
#define GETMONEY_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFlags>

namespace Ui {
class getMoney;
}

class getMoney : public QMainWindow
{
    Q_OBJECT

signals:
    void PAYING();
    void PAYEND();
    void PAYWAIT();

public:
    explicit getMoney(QWidget *parent = nullptr);
    ~getMoney();
    void setWin(QString num);

protected slots:
    void down_pic();
    bool isPAY(bool flag);
private slots:
    void on_updataBt_clicked();

    void on_buyedBt_clicked();

    void on_waitBt_clicked();

private:
    Ui::getMoney *ui;
    QNetworkAccessManager manager;
    QNetworkReply *reply;
    bool buyflag;
};

#endif // GETMONEY_H
