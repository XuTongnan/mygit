#include "keybutton.h"
#include <QKeyEvent>
#include <QApplication>

KeyButton::KeyButton(QWidget *parent):QPushButton(parent)
{
    connect(this, &KeyButton::clicked, this, &KeyButton::button_clicked);
}
KeyButton::KeyButton(const QString &text, QWidget *parent):QPushButton(text,parent)
{
    connect(this, &KeyButton::clicked, this, &KeyButton::button_clicked);
}
KeyButton::KeyButton(const QIcon& icon, const QString &text, QWidget *parent ):QPushButton(icon,text, parent)
{
    connect(this, &KeyButton::clicked, this, &KeyButton::button_clicked);
}

void KeyButton::button_clicked()
{
    //获取按键文本
    QString ch = this->text();
    //创建按键事件
    QKeyEvent *key = NULL;
    if(ch == "<")
        key = new QKeyEvent(QKeyEvent::KeyPress, Qt::Key_Backspace, Qt::NoModifier,ch);
    else
        key = new QKeyEvent(QKeyEvent::KeyPress, ch.at(0).toLatin1(), Qt::NoModifier,ch);
    //发送事件
    QApplication::postEvent(QApplication::focusWidget(), key);
}
