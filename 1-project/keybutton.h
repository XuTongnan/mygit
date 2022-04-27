#ifndef KEYBUTTON_H
#define KEYBUTTON_H

#include <QObject>
#include <QPushButton>

class KeyButton : public QPushButton
{
    Q_OBJECT
public:
    explicit KeyButton(QWidget *parent = nullptr);
    explicit KeyButton(const QString &text, QWidget *parent = nullptr);
    KeyButton(const QIcon& icon, const QString &text, QWidget *parent = nullptr);
protected slots:
    void button_clicked();
};

#endif // KEYBUTTON_H
