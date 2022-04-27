#ifndef NUMBERBOARD_H
#define NUMBERBOARD_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class NumberBoard; }
QT_END_NAMESPACE

class NumberBoard : public QWidget
{
    Q_OBJECT

public:
    NumberBoard(QWidget *parent = nullptr);
    ~NumberBoard();

private:
    Ui::NumberBoard *ui;
};
#endif // NUMBERBOARD_H
