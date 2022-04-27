#ifndef BUYLIST_H
#define BUYLIST_H

#include "getmoney.h"

#include <QJsonObject>
#include <QMainWindow>
#include <QJsonParseError>
#include <QJsonArray>
#include <QJsonValue>

namespace Ui {
class buyList;
}

class buyList : public QMainWindow
{
    Q_OBJECT

signals:
    void CommitOrder();

public:
    explicit buyList(QWidget *parent = nullptr);
    ~buyList();
    void set_List(QByteArray data, int peoplenum);
    void set_buyBt(QString text);
private slots:
    void on_backBt_clicked();

    void on_buyBt_clicked();

private:
    Ui::buyList *ui;
    QByteArray array;
    QJsonObject obj;
    double allmoney;
    getMoney *getmoney;
};

#endif // BUYLIST_H
