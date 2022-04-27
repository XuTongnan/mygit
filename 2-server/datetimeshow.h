#ifndef DATETIMESHOW_H
#define DATETIMESHOW_H

#include <QMainWindow>
#include <QTime>

namespace Ui {
class DateTimeShow;
}

class DateTimeShow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DateTimeShow(QWidget *parent = nullptr);
    ~DateTimeShow();

    void timerEvent(QTimerEvent *e);

private slots:
    void on_closeBt_2_clicked();

    void on_addEventBt_2_clicked();

private:
    Ui::DateTimeShow *ui;
    int timeId;
};

#endif // DATETIMESHOW_H
