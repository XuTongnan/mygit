/********************************************************************************
** Form generated from reading UI file 'numberboard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMBERBOARD_H
#define UI_NUMBERBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include <keybutton.h>

QT_BEGIN_NAMESPACE

class Ui_NumberBoard
{
public:
    QGridLayout *gridLayout;
    KeyButton *number7;
    KeyButton *pushButton_2;
    KeyButton *pushButton_3;
    KeyButton *pushButton_6;
    KeyButton *pushButton_5;
    KeyButton *pushButton_4;
    KeyButton *pushButton_7;
    KeyButton *pushButton_9;
    KeyButton *pushButton_8;
    KeyButton *pushButton_12;
    KeyButton *point;
    KeyButton *del;

    void setupUi(QWidget *NumberBoard)
    {
        if (NumberBoard->objectName().isEmpty())
            NumberBoard->setObjectName(QString::fromUtf8("NumberBoard"));
        NumberBoard->resize(291, 177);
        gridLayout = new QGridLayout(NumberBoard);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        number7 = new KeyButton(NumberBoard);
        number7->setObjectName(QString::fromUtf8("number7"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(number7->sizePolicy().hasHeightForWidth());
        number7->setSizePolicy(sizePolicy);
        number7->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(number7, 0, 0, 1, 1);

        pushButton_2 = new KeyButton(NumberBoard);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new KeyButton(NumberBoard);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_6 = new KeyButton(NumberBoard);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_6, 1, 0, 1, 1);

        pushButton_5 = new KeyButton(NumberBoard);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_4 = new KeyButton(NumberBoard);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_4, 1, 2, 1, 1);

        pushButton_7 = new KeyButton(NumberBoard);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_9 = new KeyButton(NumberBoard);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_9, 2, 1, 1, 1);

        pushButton_8 = new KeyButton(NumberBoard);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_8, 2, 2, 1, 1);

        pushButton_12 = new KeyButton(NumberBoard);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_12, 3, 0, 1, 1);

        point = new KeyButton(NumberBoard);
        point->setObjectName(QString::fromUtf8("point"));
        sizePolicy.setHeightForWidth(point->sizePolicy().hasHeightForWidth());
        point->setSizePolicy(sizePolicy);
        point->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(point, 3, 1, 1, 1);

        del = new KeyButton(NumberBoard);
        del->setObjectName(QString::fromUtf8("del"));
        sizePolicy.setHeightForWidth(del->sizePolicy().hasHeightForWidth());
        del->setSizePolicy(sizePolicy);
        del->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(del, 3, 2, 1, 1);


        retranslateUi(NumberBoard);

        QMetaObject::connectSlotsByName(NumberBoard);
    } // setupUi

    void retranslateUi(QWidget *NumberBoard)
    {
        NumberBoard->setWindowTitle(QCoreApplication::translate("NumberBoard", "\350\231\232\346\213\237\351\224\256\347\233\230", nullptr));
        number7->setText(QCoreApplication::translate("NumberBoard", "7", nullptr));
        pushButton_2->setText(QCoreApplication::translate("NumberBoard", "8", nullptr));
        pushButton_3->setText(QCoreApplication::translate("NumberBoard", "9", nullptr));
        pushButton_6->setText(QCoreApplication::translate("NumberBoard", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("NumberBoard", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("NumberBoard", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("NumberBoard", "1", nullptr));
        pushButton_9->setText(QCoreApplication::translate("NumberBoard", "2", nullptr));
        pushButton_8->setText(QCoreApplication::translate("NumberBoard", "3", nullptr));
        pushButton_12->setText(QCoreApplication::translate("NumberBoard", "0", nullptr));
        point->setText(QCoreApplication::translate("NumberBoard", ".", nullptr));
        del->setText(QCoreApplication::translate("NumberBoard", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumberBoard: public Ui_NumberBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMBERBOARD_H
