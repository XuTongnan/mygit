#ifndef CONNECTINFO_H
#define CONNECTINFO_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>
#include <QListWidget>

namespace Ui {
class ConnectInfo;
}

class ConnectInfo : public QMainWindow
{
    Q_OBJECT

signals:
    void SET_IP_PORT(QString IP, QString PORT);

public:
    explicit ConnectInfo(QWidget *parent = nullptr);
    ~ConnectInfo();

    bool setList(QMap<QTcpSocket *, QString> &socket_name);

private slots:
    void on_closeBt_clicked();

    void on_disConnectBt_clicked();

    void on_allSelectBt_clicked();

    void on_updateBt_clicked();

    void on_setConnectBt_clicked();

private:
    Ui::ConnectInfo *ui;
    QMap<QListWidgetItem *, QTcpSocket *> item_socket;

public:
    bool islocalDel;                 // 是否为本地断开
    void set_IPcomboBox(QList<QHostAddress> allAddrs, QString Port);
};

#endif // CONNECTINFO_H
