#ifndef TABLE_H
#define TABLE_H

#include <QTableWidget>
#include <QWidget>
#include <QJsonParseError>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonObject>
#include <QTcpSocket>


namespace Ui {
class Table;
}

class Table : public QWidget
{
    Q_OBJECT

public:
    explicit Table(QWidget *parent = nullptr);
    ~Table();
    void set_tableRow(int row);
    void set_tableCol(int col);
    void set_tableTitle(QStringList slist);
    void set_tableItem(int row, int col, QTableWidgetItem *item);
    void set_table(QByteArray data);
    void set_peopleLb(QString num);
    void set_moneyLb(QString num);
    void add_helpLW(QString desknum);
    void add_payLW(QString desknum);
    void end_payLW(QString desknum);

    void set_payStatusLb(QString statue);
    void setSocket(QTcpSocket *value);

    double get_money();
public slots:
    void cleanTable();
private slots:
    void on_outputBt_clicked();

    void on_changBt_clicked();

private:
    Ui::Table *ui;
    QJsonObject AllJsonObj;
    QTcpSocket *socket;
};

#endif // TABLE_H
