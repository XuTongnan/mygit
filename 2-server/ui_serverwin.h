/********************************************************************************
** Form generated from reading UI file 'serverwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWIN_H
#define UI_SERVERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerWin
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *IPLb;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *managerLb;
    QTabWidget *tabWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *helpOver;
    QListWidget *helpListW;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QPushButton *clearPay;
    QListWidget *payListW;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ServerWin)
    {
        if (ServerWin->objectName().isEmpty())
            ServerWin->setObjectName(QString::fromUtf8("ServerWin"));
        ServerWin->resize(640, 480);
        ServerWin->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	border-image: url(:/img/background.png);\n"
"	\n"
"}\n"
"\n"
"QListWidget{\n"
"	color: rgb(0, 255, 255);\n"
"	background-color:  rgba(74, 74, 74,100);\n"
"}\n"
"\n"
"QLabel{\n"
"	color: rgb(0, 255, 255);\n"
"	/*background-color: rgb(85, 85, 127);*/\n"
"}\n"
"\n"
"QPushButton{\n"
"	border-radius: 5px;\n"
"	background-color: rgba(255, 170, 0, 100);\n"
"	color: rgb(0, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 85, 255);\n"
"}\n"
"QPushButton:pressed{	\n"
"	background-color: rgba(255, 170, 0, 100);\n"
"}\n"
""));
        centralwidget = new QWidget(ServerWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);"));

        horizontalLayout_2->addWidget(label_3);

        IPLb = new QLabel(centralwidget);
        IPLb->setObjectName(QString::fromUtf8("IPLb"));
        IPLb->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);"));

        horizontalLayout_2->addWidget(IPLb);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("04b_21"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("/*background-color: \n"
"qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));*/\n"
"\n"
"\n"
"background-color: rgb(85, 85, 127);\n"
"font: 16pt \"04b_21\";\n"
""));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        managerLb = new QLabel(centralwidget);
        managerLb->setObjectName(QString::fromUtf8("managerLb"));
        managerLb->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);"));

        horizontalLayout->addWidget(managerLb);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 2);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane{/* \350\277\231\351\207\214\346\212\212panelRect\347\224\273\346\210\220\346\227\240\350\203\214\346\231\257\350\211\262\346\227\240\350\276\271\346\241\206\347\232\204*/\n"
"	background-color: rgba(74, 74, 74,100);\n"
"    border: none;\n"
"}\n"
"\n"
"QTabWidget::tab-bar\n"
"{\n"
"left:0px;     \n"
"}\n"
"\n"
"QTabBar::tab\n"
"{\n"
"border:none; \n"
"height:46px;\n"
"border-radius: 3px;\n"
"background-color: rgba(74, 74, 74,100);\n"
"color: rgb(255, 170, 0);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"	margin-left: 1;  \n"
"	margin-right: 0;\n"
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
"QTabBar::tab:!selected\n"
"{\n"
"margin-top: 6px;   \n"
"margin-bottom: -6px; \n"
"}\342\200\213\n"
"\n"
""));

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        helpOver = new QPushButton(centralwidget);
        helpOver->setObjectName(QString::fromUtf8("helpOver"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helpOver->sizePolicy().hasHeightForWidth());
        helpOver->setSizePolicy(sizePolicy);
        helpOver->setMinimumSize(QSize(0, 25));
        helpOver->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 5px;\n"
"	background-color: rgba(255, 170, 0, 100);\n"
"	color: rgb(0, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 85, 255);\n"
"}\n"
"QPushButton:pressed{	\n"
"	background-color: rgba(255, 170, 0, 100);\n"
"}"));

        horizontalLayout_4->addWidget(helpOver);


        verticalLayout_2->addLayout(horizontalLayout_4);

        helpListW = new QListWidget(centralwidget);
        helpListW->setObjectName(QString::fromUtf8("helpListW"));

        verticalLayout_2->addWidget(helpListW);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        clearPay = new QPushButton(centralwidget);
        clearPay->setObjectName(QString::fromUtf8("clearPay"));
        sizePolicy.setHeightForWidth(clearPay->sizePolicy().hasHeightForWidth());
        clearPay->setSizePolicy(sizePolicy);
        clearPay->setMinimumSize(QSize(0, 25));
        clearPay->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(clearPay);


        verticalLayout_4->addLayout(horizontalLayout_5);

        payListW = new QListWidget(centralwidget);
        payListW->setObjectName(QString::fromUtf8("payListW"));
        payListW->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(payListW);


        verticalLayout_5->addLayout(verticalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 1, 1, 1, 1);

        ServerWin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ServerWin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 26));
        ServerWin->setMenuBar(menubar);
        statusbar = new QStatusBar(ServerWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ServerWin->setStatusBar(statusbar);

        retranslateUi(ServerWin);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ServerWin);
    } // setupUi

    void retranslateUi(QMainWindow *ServerWin)
    {
        ServerWin->setWindowTitle(QCoreApplication::translate("ServerWin", "\347\202\271\351\244\220\346\234\215\345\212\241\347\253\257", nullptr));
        label_3->setText(QCoreApplication::translate("ServerWin", "\346\234\254\346\234\272IP\357\274\232", nullptr));
        IPLb->setText(QCoreApplication::translate("ServerWin", "0.0.0.0", nullptr));
        label->setText(QCoreApplication::translate("ServerWin", "- \346\234\215  \345\212\241  \347\253\257 -", nullptr));
        label_2->setText(QCoreApplication::translate("ServerWin", "\346\234\215\345\212\241\345\221\230\357\274\232", nullptr));
        managerLb->setText(QCoreApplication::translate("ServerWin", "001", nullptr));
        label_4->setText(QCoreApplication::translate("ServerWin", "\346\234\215\345\212\241\347\252\227\345\217\243\357\274\232", nullptr));
        helpOver->setText(QCoreApplication::translate("ServerWin", "\346\234\215\345\212\241\345\267\262\345\256\214\346\210\220", nullptr));
        label_5->setText(QCoreApplication::translate("ServerWin", "\345\205\266\344\273\226\344\277\241\346\201\257\347\252\227\345\217\243\357\274\232", nullptr));
        clearPay->setText(QCoreApplication::translate("ServerWin", "\346\270\205\351\231\244\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerWin: public Ui_ServerWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWIN_H
