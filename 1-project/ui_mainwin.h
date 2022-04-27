/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWin
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_8;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *InitOrderBt;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QLabel *serverNum;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *deskNum;
    QLabel *label_2;
    QSpinBox *peopleBox;
    QLabel *label_3;
    QLabel *orderNum;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QPushButton *foodBt;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_3;
    QPushButton *moneyBt;
    QLabel *label_10;
    QVBoxLayout *verticalLayout;
    QPushButton *buyBt;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *helpBt;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWin)
    {
        if (MainWin->objectName().isEmpty())
            MainWin->setObjectName(QString::fromUtf8("MainWin"));
        MainWin->resize(800, 480);
        MainWin->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	\n"
"	border-image: url(:/img/meat.PNG);\n"
"}\n"
"\n"
"QPushButton{\n"
"\n"
"}\n"
"QLabel{\n"
"\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"/***************************************/\n"
"QTabWidget::pane\n"
"{\n"
"border-width: 0px;\n"
"border-color:white;\n"
"border-style:outset;\n"
"border-radius: 3px;\n"
"background-color: rgb(132, 171, 208);\n"
"background: transparent;\n"
"}\342\200\213\n"
"\n"
"QTabWidget::tab-bar\n"
"{\n"
"left:0px;     \n"
"}\n"
"\n"
"QTabBar::tab\n"
"{\n"
"border:none;\n"
"width: 100px; \n"
"height:46px;\n"
"font:20px;\n"
"border-radius: 3px;\n"
"\n"
"background: transparent;\n"
"color: rgb(255, 170, 0);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"margin-left: 1;  \n"
"margin-right: 0;\n"
"	\n"
"	color: rgb(255, 255, 0);\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"color: white;\n"
"margin-left: 1;\n"
"margin-right: 0;\n"
"}\n"
"\n"
"QTabBar::tab:hover:!selected\n"
"{\n"
"color: white;\n"
"margin-left: 1;\n"
"margin-right: 0;\n"
"}\n"
"\n"
"QTabBar::tab:!sel"
                        "ected\n"
"{\n"
"margin-top: 6px;   \n"
"margin-bottom: -6px; \n"
"}\342\200\213\n"
"\n"
""));
        centralwidget = new QWidget(MainWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_8 = new QGridLayout(centralwidget);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	\n"
"background-color: rgba(0, 0, 0,100);\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        InitOrderBt = new QPushButton(widget);
        InitOrderBt->setObjectName(QString::fromUtf8("InitOrderBt"));
        sizePolicy.setHeightForWidth(InitOrderBt->sizePolicy().hasHeightForWidth());
        InitOrderBt->setSizePolicy(sizePolicy);
        InitOrderBt->setMinimumSize(QSize(0, 50));
        InitOrderBt->setStyleSheet(QString::fromUtf8("border-image: url(:/img/title.png);\n"
"margin:0px 30px 0px 30px;"));

        verticalLayout_4->addWidget(InitOrderBt);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_2->addWidget(label_11);

        serverNum = new QLabel(widget);
        serverNum->setObjectName(QString::fromUtf8("serverNum"));

        horizontalLayout_2->addWidget(serverNum);


        verticalLayout_4->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        deskNum = new QLabel(widget);
        deskNum->setObjectName(QString::fromUtf8("deskNum"));
        sizePolicy1.setHeightForWidth(deskNum->sizePolicy().hasHeightForWidth());
        deskNum->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        deskNum->setFont(font);

        gridLayout->addWidget(deskNum, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        peopleBox = new QSpinBox(widget);
        peopleBox->setObjectName(QString::fromUtf8("peopleBox"));

        gridLayout->addWidget(peopleBox, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        orderNum = new QLabel(widget);
        orderNum->setObjectName(QString::fromUtf8("orderNum"));
        sizePolicy1.setHeightForWidth(orderNum->sizePolicy().hasHeightForWidth());
        orderNum->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(orderNum, 2, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(10, 10));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/img/menu.png);\n"
"background-color: rgba(0, 0, 0,128);"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_7);

        foodBt = new QPushButton(widget);
        foodBt->setObjectName(QString::fromUtf8("foodBt"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(foodBt->sizePolicy().hasHeightForWidth());
        foodBt->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(20);
        foodBt->setFont(font1);
        foodBt->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);\n"
"/*border-radius:23px;*/\n"
"border:none;\n"
"background-color: rgba(0, 0, 0,128);"));

        horizontalLayout->addWidget(foodBt);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setVerticalSpacing(12);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        moneyBt = new QPushButton(widget);
        moneyBt->setObjectName(QString::fromUtf8("moneyBt"));
        sizePolicy2.setHeightForWidth(moneyBt->sizePolicy().hasHeightForWidth());
        moneyBt->setSizePolicy(sizePolicy2);
        moneyBt->setStyleSheet(QString::fromUtf8("border-image: url(:/img/money.png);"));

        verticalLayout_3->addWidget(moneyBt);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_10);


        gridLayout_7->addLayout(verticalLayout_3, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        buyBt = new QPushButton(widget);
        buyBt->setObjectName(QString::fromUtf8("buyBt"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buyBt->sizePolicy().hasHeightForWidth());
        buyBt->setSizePolicy(sizePolicy3);
        buyBt->setStyleSheet(QString::fromUtf8("border-image: url(:/img/buy.png);"));

        verticalLayout->addWidget(buyBt);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_8);


        gridLayout_7->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        helpBt = new QPushButton(widget);
        helpBt->setObjectName(QString::fromUtf8("helpBt"));
        sizePolicy2.setHeightForWidth(helpBt->sizePolicy().hasHeightForWidth());
        helpBt->setSizePolicy(sizePolicy2);
        helpBt->setStyleSheet(QString::fromUtf8("border-image: url(:/img/help.png);"));

        verticalLayout_2->addWidget(helpBt);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_9);


        gridLayout_7->addLayout(verticalLayout_2, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_7);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 1);
        verticalLayout_4->setStretch(2, 3);
        verticalLayout_4->setStretch(3, 1);
        verticalLayout_4->setStretch(4, 10);

        gridLayout_8->addWidget(widget, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color:  rgba(74, 74, 74,100);\n"
"QTabWidget::pane{     /* \350\277\231\351\207\214\346\212\212panelRect\347\224\273\346\210\220\346\227\240\350\203\214\346\231\257\350\211\262\346\227\240\350\276\271\346\241\206\347\232\204*/\n"
"    border: none;\n"
"	 \n"
"}\n"
""));

        gridLayout_8->addWidget(tabWidget, 0, 1, 1, 1);

        gridLayout_8->setColumnStretch(0, 1);
        gridLayout_8->setColumnStretch(1, 4);
        MainWin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setMaximumSize(QSize(16777215, 27));
        MainWin->setStatusBar(statusbar);

        retranslateUi(MainWin);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWin);
    } // setupUi

    void retranslateUi(QMainWindow *MainWin)
    {
        MainWin->setWindowTitle(QCoreApplication::translate("MainWin", "\347\202\271\351\244\220\345\256\242\346\210\267\347\253\257", nullptr));
        InitOrderBt->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWin", "\346\234\215\345\212\241\345\267\245\345\217\267\357\274\232", nullptr));
        serverNum->setText(QCoreApplication::translate("MainWin", "\346\234\252\347\237\245", nullptr));
        label->setText(QCoreApplication::translate("MainWin", "\346\241\214\345\217\267\357\274\232", nullptr));
        deskNum->setText(QCoreApplication::translate("MainWin", "\346\234\252\347\237\245", nullptr));
        label_2->setText(QCoreApplication::translate("MainWin", "\344\272\272\346\225\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWin", "\350\256\242\345\215\225\345\217\267\357\274\232", nullptr));
        orderNum->setText(QCoreApplication::translate("MainWin", " \346\217\220\344\272\244\350\256\242\345\215\225\345\220\216\346\230\276\347\244\272  ", nullptr));
        label_7->setText(QString());
        foodBt->setText(QCoreApplication::translate("MainWin", "\350\217\234\345\223\201", nullptr));
        moneyBt->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWin", "\347\273\223\350\264\246", nullptr));
        buyBt->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWin", "\350\256\242\345\215\225", nullptr));
        helpBt->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWin", "\346\234\215\345\212\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWin: public Ui_MainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
