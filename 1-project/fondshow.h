#ifndef FONDSHOW_H
#define FONDSHOW_H

#include <QFrame>

namespace Ui {
class fondShow;
}

class fondShow : public QFrame
{
    Q_OBJECT
signals:
    void ADD();
    void SUB();
    void textEdited(QString changeData);

public:
    explicit fondShow(QWidget *parent = nullptr);
    ~fondShow();

    void setStyle(const QString &value);
    QString get_name();
    QString get_money();
    QString get_num();

    void setStyle(QString pic, QString name, QString cost);
    bool set_num(int num = 0);
private slots:
    void on_addBt_clicked();

    void on_addBt_2_clicked();

    void on_numEdit_textEdited(const QString &arg1);

private:
    Ui::fondShow *ui;
    QString style;
    QString buy;
};

#endif // FONDSHOW_H
