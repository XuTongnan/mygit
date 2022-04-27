/********************************************************************************
** Form generated from reading UI file 'clientwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIN_H
#define UI_CLIENTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "numberboard.h"

QT_BEGIN_NAMESPACE

class Ui_ClientWin
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *pwdEdit;
    QPushButton *loginBt;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *IPLb;
    QPushButton *IPchange;
    QSpacerItem *verticalSpacer_3;
    NumberBoard *widget;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;

    void setupUi(QMainWindow *ClientWin)
    {
        if (ClientWin->objectName().isEmpty())
            ClientWin->setObjectName(QString::fromUtf8("ClientWin"));
        ClientWin->resize(800, 480);
        ClientWin->setStyleSheet(QString::fromUtf8("QMainWindow#ClientWin{\n"
"	\n"
"	border-image: url(:/img/food.PNG);\n"
"	background-color: rgba(255, 255, 255, 100);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"}\n"
"QPushButton{\n"
"background-color: rgb(255, 170, 0);\n"
"border-radius:10px;\n"
"}\n"
"QLineEdit{\n"
"border-radius:7px;\n"
"padding:0 10px 0 10px;\n"
"/*background-color:transparent;*/\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	border-radius:20px;\n"
"	background-color:  rgba(0, 255, 255, 100);\n"
"}"));
        centralwidget = new QWidget(ClientWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(200, 280));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(0, 50));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/img/title.png);"));

        verticalLayout_2->addWidget(label_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nameEdit = new QLineEdit(groupBox);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setMinimumSize(QSize(0, 20));
        nameEdit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pwdEdit = new QLineEdit(groupBox);
        pwdEdit->setObjectName(QString::fromUtf8("pwdEdit"));
        pwdEdit->setMinimumSize(QSize(0, 20));
        pwdEdit->setStyleSheet(QString::fromUtf8(""));
        pwdEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(pwdEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        loginBt = new QPushButton(groupBox);
        loginBt->setObjectName(QString::fromUtf8("loginBt"));
        loginBt->setMinimumSize(QSize(0, 25));
        loginBt->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));

        verticalLayout_2->addWidget(loginBt);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        IPLb = new QLabel(centralwidget);
        IPLb->setObjectName(QString::fromUtf8("IPLb"));
        IPLb->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"background-color: rgba(0, 0, 0, 150);\n"
"border-radius: 5px;"));

        horizontalLayout_3->addWidget(IPLb);

        IPchange = new QPushButton(centralwidget);
        IPchange->setObjectName(QString::fromUtf8("IPchange"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(IPchange->sizePolicy().hasHeightForWidth());
        IPchange->setSizePolicy(sizePolicy2);
        IPchange->setMinimumSize(QSize(50, 20));

        horizontalLayout_3->addWidget(IPchange);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        widget = new NumberBoard(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(200, 300));
        widget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	font: 12pt \"Arial\";\n"
"	background-color: rgba(255, 255, 255, 150);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	font: 20pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgba(255, 170, 0, 150);\n"
"}"));

        verticalLayout_4->addWidget(widget);


        gridLayout->addLayout(verticalLayout_4, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(281, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        ClientWin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ClientWin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ClientWin->setMenuBar(menubar);

        retranslateUi(ClientWin);

        QMetaObject::connectSlotsByName(ClientWin);
    } // setupUi

    void retranslateUi(QMainWindow *ClientWin)
    {
        ClientWin->setWindowTitle(QCoreApplication::translate("ClientWin", "\345\256\242\346\210\267\347\253\257\347\231\273\345\275\225", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QString());
        nameEdit->setPlaceholderText(QCoreApplication::translate("ClientWin", "\350\264\246\345\217\267", nullptr));
        pwdEdit->setPlaceholderText(QCoreApplication::translate("ClientWin", "\345\257\206\347\240\201", nullptr));
        loginBt->setText(QCoreApplication::translate("ClientWin", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(shortcut)
        loginBt->setShortcut(QCoreApplication::translate("ClientWin", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        IPLb->setText(QCoreApplication::translate("ClientWin", "192.168.164.1", nullptr));
        IPchange->setText(QCoreApplication::translate("ClientWin", "\344\277\256\346\224\271IP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWin: public Ui_ClientWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIN_H
