#ifndef SERVERWIN_H
#define SERVERWIN_H

#include "connectinfo.h"
#include "table.h"

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QJsonParseError>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonObject>
#include <QListWidgetItem>
#include <QVector>
#include <QPushButton>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>

#include "datetimeshow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ServerWin; }
QT_END_NAMESPACE

class ServerWin : public QMainWindow
{
    Q_OBJECT

signals:
    void SET();

public:
    ServerWin(QWidget *parent = nullptr);
    ~ServerWin();
    void use_data(QByteArray data);
    void setUser(const QString &value);
    void setPassword(const QString &value);
    void add_helpLW(QString desknum);
    void add_payLW(QString desknum);
    void end_payLW(QString desknum, QTcpSocket *socket);
    void add_payLW_wait(QString desknum);

protected:
    void timerEvent(QTimerEvent *e);

protected slots:
    void new_connect();
    void read_data();
    void deal_data(QByteArray data, QTcpSocket *socket = nullptr);

    void socket_discon();
    void showAbort();
    void showBigTime();
    void setConnParm();
    void showMyself();
    bool set_IP_Port(QString IP, QString Port);
private slots:
    void on_tabWidget_tabCloseRequested(int index);

    void on_helpOver_clicked();

    void on_clearPay_clicked();

private:
    Ui::ServerWin *ui;
    QString user;
    QString password;

    QTcpServer mserver;
    QMap <QTcpSocket *, Table *> socket_table; // 套接字和tab键值对
    QStringList deskNumList;
    QString deskNum;
    QString peopleNum;
    QString moneyNum;
    int timerId;
    QVector<QTcpSocket *> socketVec;
    QMap <QTcpSocket *, QString> socket_name; // socket--connect_name
    //
    QPushButton *timeBt;
    QPushButton *connNumBt;
    QPushButton *myBt;
    QPushButton *abortBt;
    //
    ConnectInfo *coninfo;                      //客户端连接信息
    QString IP;
    QString Port;
    //
    QJsonObject AllJsonObj;
};
#endif // SERVERWIN_H
