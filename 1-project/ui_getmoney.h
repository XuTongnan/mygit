/********************************************************************************
** Form generated from reading UI file 'getmoney.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETMONEY_H
#define UI_GETMONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_getMoney
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *picLb;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *numLb;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *updataBt;
    QPushButton *buyedBt;
    QPushButton *waitBt;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *getMoney)
    {
        if (getMoney->objectName().isEmpty())
            getMoney->setObjectName(QString::fromUtf8("getMoney"));
        getMoney->resize(600, 360);
        getMoney->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(85, 85, 127);\n"
"}\n"
"\n"
"QMainWindow#getMoney{\n"
"	\n"
"}\n"
"\n"
"QPushButton{\n"
"	font: 12pt \"04b_21\";\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 170, 0);\n"
"	border-radius:10px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgba(255, 170, 0, 100);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(170, 0, 255);\n"
"}"));
        centralwidget = new QWidget(getMoney);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(12);
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        picLb = new QLabel(centralwidget);
        picLb->setObjectName(QString::fromUtf8("picLb"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(picLb->sizePolicy().hasHeightForWidth());
        picLb->setSizePolicy(sizePolicy);
        picLb->setMinimumSize(QSize(300, 300));
        QFont font1;
        font1.setPointSize(30);
        picLb->setFont(font1);
        picLb->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(0, 255, 255);"));
        picLb->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(picLb);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 10);

        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        numLb = new QLabel(centralwidget);
        numLb->setObjectName(QString::fromUtf8("numLb"));
        QFont font2;
        font2.setPointSize(32);
        numLb->setFont(font2);
        numLb->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 255, 255);"));
        numLb->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(numLb);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        updataBt = new QPushButton(centralwidget);
        updataBt->setObjectName(QString::fromUtf8("updataBt"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(updataBt->sizePolicy().hasHeightForWidth());
        updataBt->setSizePolicy(sizePolicy1);
        updataBt->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(updataBt);

        buyedBt = new QPushButton(centralwidget);
        buyedBt->setObjectName(QString::fromUtf8("buyedBt"));
        sizePolicy1.setHeightForWidth(buyedBt->sizePolicy().hasHeightForWidth());
        buyedBt->setSizePolicy(sizePolicy1);
        buyedBt->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(buyedBt);

        waitBt = new QPushButton(centralwidget);
        waitBt->setObjectName(QString::fromUtf8("waitBt"));
        sizePolicy1.setHeightForWidth(waitBt->sizePolicy().hasHeightForWidth());
        waitBt->setSizePolicy(sizePolicy1);
        waitBt->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(waitBt);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 125, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        getMoney->setCentralWidget(centralwidget);

        retranslateUi(getMoney);

        QMetaObject::connectSlotsByName(getMoney);
    } // setupUi

    void retranslateUi(QMainWindow *getMoney)
    {
        getMoney->setWindowTitle(QCoreApplication::translate("getMoney", "\344\273\230\346\254\276\347\225\214\351\235\242", nullptr));
        label_4->setText(QCoreApplication::translate("getMoney", "\350\257\267\346\211\253\347\240\201\346\224\257\344\273\230\357\274\232", nullptr));
        picLb->setText(QCoreApplication::translate("getMoney", "\344\272\214\347\273\264\347\240\201\345\261\225\347\244\272\345\214\272", nullptr));
        label->setText(QCoreApplication::translate("getMoney", "\346\234\254\346\254\241\346\266\210\350\264\271\357\274\232", nullptr));
        numLb->setText(QCoreApplication::translate("getMoney", "0", nullptr));
        label_3->setText(QCoreApplication::translate("getMoney", "\345\205\203", nullptr));
        updataBt->setText(QCoreApplication::translate("getMoney", "\345\210\267\346\226\260\344\272\214\347\273\264\347\240\201", nullptr));
        buyedBt->setText(QCoreApplication::translate("getMoney", "\345\267\262\347\216\260\351\207\221\346\224\257\344\273\230", nullptr));
        waitBt->setText(QCoreApplication::translate("getMoney", "\346\210\221\345\206\215\346\203\263\346\203\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getMoney: public Ui_getMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETMONEY_H
