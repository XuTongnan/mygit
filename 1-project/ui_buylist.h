/********************************************************************************
** Form generated from reading UI file 'buylist.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYLIST_H
#define UI_BUYLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buyList
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *numLb;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *costlb;
    QLabel *costnum;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *costlb_2;
    QLabel *costForOne;
    QHBoxLayout *horizontalLayout;
    QPushButton *buyBt;
    QPushButton *backBt;
    QMenuBar *menubar;

    void setupUi(QMainWindow *buyList)
    {
        if (buyList->objectName().isEmpty())
            buyList->setObjectName(QString::fromUtf8("buyList"));
        buyList->resize(406, 480);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buyList->sizePolicy().hasHeightForWidth());
        buyList->setSizePolicy(sizePolicy);
        buyList->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: rgba(90, 90, 90,100);\n"
"	color: rgb(255, 170, 0);\n"
"}\n"
"QTableWidget{\n"
"	border:2px solid #55ff7f\n"
"}\n"
"QPushButton{\n"
"	background-color: rgb(255, 170, 0);\n"
"border-radius:20px;\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	font: 28pt \"Arial\";\n"
"}\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(0, 255, 255);\n"
"}"));
        centralwidget = new QWidget(buyList);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        numLb = new QLabel(centralwidget);
        numLb->setObjectName(QString::fromUtf8("numLb"));
        numLb->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);"));

        horizontalLayout_2->addWidget(numLb);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 10);

        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        costlb = new QLabel(centralwidget);
        costlb->setObjectName(QString::fromUtf8("costlb"));

        horizontalLayout_4->addWidget(costlb);

        costnum = new QLabel(centralwidget);
        costnum->setObjectName(QString::fromUtf8("costnum"));
        costnum->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);"));

        horizontalLayout_4->addWidget(costnum);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        costlb_2 = new QLabel(centralwidget);
        costlb_2->setObjectName(QString::fromUtf8("costlb_2"));

        horizontalLayout_3->addWidget(costlb_2);

        costForOne = new QLabel(centralwidget);
        costForOne->setObjectName(QString::fromUtf8("costForOne"));
        costForOne->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);"));

        horizontalLayout_3->addWidget(costForOne);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buyBt = new QPushButton(centralwidget);
        buyBt->setObjectName(QString::fromUtf8("buyBt"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buyBt->sizePolicy().hasHeightForWidth());
        buyBt->setSizePolicy(sizePolicy1);
        buyBt->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setPointSize(20);
        buyBt->setFont(font1);

        horizontalLayout->addWidget(buyBt);

        backBt = new QPushButton(centralwidget);
        backBt->setObjectName(QString::fromUtf8("backBt"));
        sizePolicy1.setHeightForWidth(backBt->sizePolicy().hasHeightForWidth());
        backBt->setSizePolicy(sizePolicy1);
        backBt->setMinimumSize(QSize(0, 40));
        backBt->setFont(font1);

        horizontalLayout->addWidget(backBt);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        buyList->setCentralWidget(centralwidget);
        menubar = new QMenuBar(buyList);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 406, 26));
        buyList->setMenuBar(menubar);

        retranslateUi(buyList);

        QMetaObject::connectSlotsByName(buyList);
    } // setupUi

    void retranslateUi(QMainWindow *buyList)
    {
        buyList->setWindowTitle(QCoreApplication::translate("buyList", "\350\256\242\345\215\225\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("buyList", "----------\345\267\262\350\264\255\350\256\242\345\215\225----------", nullptr));
        label_2->setText(QCoreApplication::translate("buyList", "\347\224\250\351\244\220\344\272\272\346\225\260\357\274\232", nullptr));
        numLb->setText(QCoreApplication::translate("buyList", "0", nullptr));
        costlb->setText(QCoreApplication::translate("buyList", "\347\224\250\351\244\220\350\264\271\347\224\250\357\274\232", nullptr));
        costnum->setText(QCoreApplication::translate("buyList", "0", nullptr));
        costlb_2->setText(QCoreApplication::translate("buyList", "\345\271\263\345\235\207\346\257\217\344\272\272\357\274\232", nullptr));
        costForOne->setText(QCoreApplication::translate("buyList", "0", nullptr));
        buyBt->setText(QCoreApplication::translate("buyList", "\346\217\220\344\272\244", nullptr));
        backBt->setText(QCoreApplication::translate("buyList", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buyList: public Ui_buyList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYLIST_H
