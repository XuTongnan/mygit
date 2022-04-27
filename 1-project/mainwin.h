#ifndef MAINWIN_H
#define MAINWIN_H

#include <QMainWindow>
#include "fondshow.h"

#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonValue>
#include <QTcpSocket>
#include <QTimer>
#include <QTableWidget>
#include <QIODevice>
#include <QSettings>
#include <QFile>
#include <QFileInfo>
#include <QPushButton>

#include "buylist.h"
#include "getmoney.h"

namespace Ui {
class MainWin;
}

class MainWin : public QMainWindow
{
    Q_OBJECT

signals:
    void PAY_FLAG(bool flag);

public:
    explicit MainWin(QWidget *parent = nullptr);
    explicit MainWin(QString IP, QWidget *parent = nullptr);
    ~MainWin();

    void setUser(const QString &value);

    void setPassword(const QString &value);

    void timerEvent(QTimerEvent *e);

    void pay_end();

    QTcpSocket* getMsocket();

    void pay_ing();
    double getAllmoney() const;

    bool getBuyflag() const;

    QString getIPaddr() const;
    void setIPaddr(const QString &value);

    quint16 getPort() const;
    void setPort(const quint16 &value);

    bool getAutoflag() const;
    void setAutoflag(bool value);

    int getInterTime() const;
    void setInterTime(int value);

    bool getServerstatus() const;

    quint32 getSystemOver_time() const;
    void setSystemOver_time(const quint32 &value);

    bool setFoodNum(QByteArray data);
    void setFoodNum(int num = 0);
public slots:
    bool commitOrder();
    bool manual_conn();
    void pay_wait();
protected:
    void setStatusText(QString data = "");

    void statusBar_init();
    void calcMoney();
protected slots:
    void change_data();
    void read_data();
    void send_data();

    bool Init_Win(int colnum = 3);
    void socket_conn();
    void socket_discon();

    void showAbort();
    void showBigTime();
    void setConnParm();
    void showMyself();

private slots:
    void on_buyBt_clicked();

    void on_helpBt_clicked();

    void on_moneyBt_clicked();

    void on_foodBt_clicked();

    void on_InitOrderBt_clicked();

private:
    Ui::MainWin *ui;
    QString user;
    QString password;

    double allmoney;                    // 总价格
    QJsonObject allobj;                 // json总对象
    QJsonObject addobj;                 // 加餐订单json
    QByteArray data;                    // json数据
    QTcpSocket msocket;                  // 套接字
    bool sendflag;                       // 发送标志
    QString IPaddr;                      // ip地址
    quint16 Port;                        // 网络端口号

    int timeid;                             // 定时器id
    //状态栏
    QPushButton *timeshow;
    QPushButton *socketBt;
    QPushButton *my;
    QPushButton *abortBt;
    //

    QMap<QString, QString> name_pics;            // 菜名--图片
    QMap<QString, QString> name_costs;           // 菜名--价格
    QMap<QString, fondShow *> name_foodShow;      // 菜名--窗口
    QMultiMap<QString, QString> type_names;       // 菜类--菜名
    bool buyflag;                          // 付款标志
    quint32 socket_timeout;                    // 超时重连
    quint32 systemOver_time;                    // 系统关闭时间限制
    int interTime;                           // 重连间隔
    bool autoflag;                          // 连接模式（自动/手动）
    bool serverstatus;                      // 服务器连接状态

    buyList *buylist;                       // 订单界面
};

#endif // MAINWIN_H
