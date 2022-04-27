/********************************************************************************
** Form generated from reading UI file 'connectinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTINFO_H
#define UI_CONNECTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectInfo
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *disConnectBt;
    QPushButton *allSelectBt;
    QPushButton *updateBt;
    QPushButton *closeBt;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *IPcomboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *PortEdit;
    QPushButton *setConnectBt;
    QMenuBar *menubar;

    void setupUi(QMainWindow *ConnectInfo)
    {
        if (ConnectInfo->objectName().isEmpty())
            ConnectInfo->setObjectName(QString::fromUtf8("ConnectInfo"));
        ConnectInfo->resize(360, 420);
        ConnectInfo->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgba(0, 0, 0, 50);\n"
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
"}"));
        centralwidget = new QWidget(ConnectInfo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_3->addWidget(listWidget);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        disConnectBt = new QPushButton(centralwidget);
        disConnectBt->setObjectName(QString::fromUtf8("disConnectBt"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(disConnectBt->sizePolicy().hasHeightForWidth());
        disConnectBt->setSizePolicy(sizePolicy);
        disConnectBt->setMinimumSize(QSize(80, 25));

        verticalLayout_2->addWidget(disConnectBt);

        allSelectBt = new QPushButton(centralwidget);
        allSelectBt->setObjectName(QString::fromUtf8("allSelectBt"));
        sizePolicy.setHeightForWidth(allSelectBt->sizePolicy().hasHeightForWidth());
        allSelectBt->setSizePolicy(sizePolicy);
        allSelectBt->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(allSelectBt);

        updateBt = new QPushButton(centralwidget);
        updateBt->setObjectName(QString::fromUtf8("updateBt"));
        sizePolicy.setHeightForWidth(updateBt->sizePolicy().hasHeightForWidth());
        updateBt->setSizePolicy(sizePolicy);
        updateBt->setMinimumSize(QSize(0, 25));
        updateBt->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0);\n"
"background-color: rgba(0, 0, 0, 0);\n"
"border: none;"));

        verticalLayout_2->addWidget(updateBt);

        closeBt = new QPushButton(centralwidget);
        closeBt->setObjectName(QString::fromUtf8("closeBt"));
        sizePolicy.setHeightForWidth(closeBt->sizePolicy().hasHeightForWidth());
        closeBt->setSizePolicy(sizePolicy);
        closeBt->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(closeBt);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        IPcomboBox = new QComboBox(centralwidget);
        IPcomboBox->setObjectName(QString::fromUtf8("IPcomboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(IPcomboBox->sizePolicy().hasHeightForWidth());
        IPcomboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(IPcomboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        PortEdit = new QLineEdit(centralwidget);
        PortEdit->setObjectName(QString::fromUtf8("PortEdit"));
        sizePolicy1.setHeightForWidth(PortEdit->sizePolicy().hasHeightForWidth());
        PortEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(PortEdit);

        setConnectBt = new QPushButton(centralwidget);
        setConnectBt->setObjectName(QString::fromUtf8("setConnectBt"));
        sizePolicy.setHeightForWidth(setConnectBt->sizePolicy().hasHeightForWidth());
        setConnectBt->setSizePolicy(sizePolicy);
        setConnectBt->setMinimumSize(QSize(80, 25));

        horizontalLayout_2->addWidget(setConnectBt);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        ConnectInfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ConnectInfo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 360, 26));
        ConnectInfo->setMenuBar(menubar);

        retranslateUi(ConnectInfo);

        QMetaObject::connectSlotsByName(ConnectInfo);
    } // setupUi

    void retranslateUi(QMainWindow *ConnectInfo)
    {
        ConnectInfo->setWindowTitle(QCoreApplication::translate("ConnectInfo", "\345\256\242\346\210\267\347\253\257\350\277\236\346\216\245\347\256\241\347\220\206", nullptr));
        label->setText(QCoreApplication::translate("ConnectInfo", "\345\267\262\350\277\236\346\216\245\345\256\242\346\210\267\347\253\257\345\220\215\345\215\225\357\274\232", nullptr));
        disConnectBt->setText(QCoreApplication::translate("ConnectInfo", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        allSelectBt->setText(QCoreApplication::translate("ConnectInfo", "\344\270\200\351\224\256\345\205\250\346\226\255", nullptr));
        updateBt->setText(QCoreApplication::translate("ConnectInfo", "\345\210\267\346\226\260", nullptr));
        closeBt->setText(QCoreApplication::translate("ConnectInfo", "\345\205\263\351\227\255", nullptr));
        label_2->setText(QCoreApplication::translate("ConnectInfo", "\345\217\257\351\200\211IP", nullptr));
        label_3->setText(QCoreApplication::translate("ConnectInfo", "\347\253\257\345\217\243\345\217\267", nullptr));
        setConnectBt->setText(QCoreApplication::translate("ConnectInfo", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectInfo: public Ui_ConnectInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTINFO_H
