/********************************************************************************
** Form generated from reading UI file 'setsocketconnwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETSOCKETCONNWIN_H
#define UI_SETSOCKETCONNWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetSocketConnWin
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *conState;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *autoRB;
    QRadioButton *manualRB;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *IPEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *PortEdit;
    QPushButton *connectBt;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *inter_left;
    QSpinBox *interTime;
    QLabel *inter_right;
    QHBoxLayout *horizontalLayout_8;
    QLabel *overTime_left;
    QSpinBox *sysOverTime;
    QLabel *overTime_right;
    QPushButton *setTimeBt;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBt;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SetSocketConnWin)
    {
        if (SetSocketConnWin->objectName().isEmpty())
            SetSocketConnWin->setObjectName(QString::fromUtf8("SetSocketConnWin"));
        SetSocketConnWin->resize(309, 447);
        SetSocketConnWin->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgba(0, 0, 0, 50);\n"
"}\n"
"\n"
"QLabel{\n"
"	color: rgb(0, 255, 255);\n"
"	/*background-color: rgb(85, 85, 127);*/\n"
"}\n"
"QRadioButton{\n"
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
        centralwidget = new QWidget(SetSocketConnWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(22);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_5);

        conState = new QLabel(centralwidget);
        conState->setObjectName(QString::fromUtf8("conState"));
        conState->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_3->addWidget(conState);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        autoRB = new QRadioButton(centralwidget);
        autoRB->setObjectName(QString::fromUtf8("autoRB"));

        horizontalLayout_4->addWidget(autoRB);

        manualRB = new QRadioButton(centralwidget);
        manualRB->setObjectName(QString::fromUtf8("manualRB"));

        horizontalLayout_4->addWidget(manualRB);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        IPEdit = new QLineEdit(centralwidget);
        IPEdit->setObjectName(QString::fromUtf8("IPEdit"));

        horizontalLayout->addWidget(IPEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        PortEdit = new QLineEdit(centralwidget);
        PortEdit->setObjectName(QString::fromUtf8("PortEdit"));

        horizontalLayout_2->addWidget(PortEdit);

        connectBt = new QPushButton(centralwidget);
        connectBt->setObjectName(QString::fromUtf8("connectBt"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(connectBt->sizePolicy().hasHeightForWidth());
        connectBt->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(connectBt);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        inter_left = new QLabel(centralwidget);
        inter_left->setObjectName(QString::fromUtf8("inter_left"));

        horizontalLayout_7->addWidget(inter_left);

        interTime = new QSpinBox(centralwidget);
        interTime->setObjectName(QString::fromUtf8("interTime"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(interTime->sizePolicy().hasHeightForWidth());
        interTime->setSizePolicy(sizePolicy1);
        interTime->setMinimum(1);
        interTime->setMaximum(3600);
        interTime->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_7->addWidget(interTime);

        inter_right = new QLabel(centralwidget);
        inter_right->setObjectName(QString::fromUtf8("inter_right"));

        horizontalLayout_7->addWidget(inter_right);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        overTime_left = new QLabel(centralwidget);
        overTime_left->setObjectName(QString::fromUtf8("overTime_left"));

        horizontalLayout_8->addWidget(overTime_left);

        sysOverTime = new QSpinBox(centralwidget);
        sysOverTime->setObjectName(QString::fromUtf8("sysOverTime"));
        sizePolicy1.setHeightForWidth(sysOverTime->sizePolicy().hasHeightForWidth());
        sysOverTime->setSizePolicy(sizePolicy1);
        sysOverTime->setMinimum(1);
        sysOverTime->setMaximum(3600);
        sysOverTime->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_8->addWidget(sysOverTime);

        overTime_right = new QLabel(centralwidget);
        overTime_right->setObjectName(QString::fromUtf8("overTime_right"));

        horizontalLayout_8->addWidget(overTime_right);


        verticalLayout_3->addLayout(horizontalLayout_8);


        horizontalLayout_9->addLayout(verticalLayout_3);

        setTimeBt = new QPushButton(centralwidget);
        setTimeBt->setObjectName(QString::fromUtf8("setTimeBt"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(setTimeBt->sizePolicy().hasHeightForWidth());
        setTimeBt->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(setTimeBt);


        verticalLayout_4->addLayout(horizontalLayout_9);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        closeBt = new QPushButton(centralwidget);
        closeBt->setObjectName(QString::fromUtf8("closeBt"));
        sizePolicy.setHeightForWidth(closeBt->sizePolicy().hasHeightForWidth());
        closeBt->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(closeBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_6);


        gridLayout->addLayout(verticalLayout_5, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 3);
        SetSocketConnWin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SetSocketConnWin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 309, 26));
        SetSocketConnWin->setMenuBar(menubar);
        statusbar = new QStatusBar(SetSocketConnWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SetSocketConnWin->setStatusBar(statusbar);

        retranslateUi(SetSocketConnWin);

        QMetaObject::connectSlotsByName(SetSocketConnWin);
    } // setupUi

    void retranslateUi(QMainWindow *SetSocketConnWin)
    {
        SetSocketConnWin->setWindowTitle(QCoreApplication::translate("SetSocketConnWin", "\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("SetSocketConnWin", "\347\275\221\347\273\234\350\277\236\346\216\245\350\256\276\347\275\256", nullptr));
        label_5->setText(QCoreApplication::translate("SetSocketConnWin", "\350\277\236\346\216\245\347\212\266\346\200\201\357\274\232", nullptr));
        conState->setText(QCoreApplication::translate("SetSocketConnWin", "\346\234\252\350\277\236\346\216\245", nullptr));
        label_7->setText(QCoreApplication::translate("SetSocketConnWin", "\345\275\223\345\211\215\350\277\236\346\216\245\346\250\241\345\274\217:", nullptr));
        autoRB->setText(QCoreApplication::translate("SetSocketConnWin", "\350\207\252\345\212\250\350\277\236\346\216\245", nullptr));
        manualRB->setText(QCoreApplication::translate("SetSocketConnWin", "\346\211\213\345\212\250\350\277\236\346\216\245", nullptr));
        label_4->setText(QCoreApplication::translate("SetSocketConnWin", "\345\275\223\345\211\215(\350\207\252\345\212\250)\350\277\236\346\216\245\347\232\204IP\345\222\214\347\253\257\345\217\243:", nullptr));
        label->setText(QCoreApplication::translate("SetSocketConnWin", "\350\277\236\346\216\245IP", nullptr));
        label_2->setText(QCoreApplication::translate("SetSocketConnWin", "\347\253\257\345\217\243\345\217\267", nullptr));
        connectBt->setText(QCoreApplication::translate("SetSocketConnWin", "\350\277\236\346\216\245", nullptr));
        inter_left->setText(QCoreApplication::translate("SetSocketConnWin", "\350\256\276\347\275\256\350\207\252\345\212\250\351\207\215\350\277\236\346\227\266\351\227\264\351\227\264\351\232\224:", nullptr));
        inter_right->setText(QCoreApplication::translate("SetSocketConnWin", "\347\247\222", nullptr));
        overTime_left->setText(QCoreApplication::translate("SetSocketConnWin", "\350\256\276\347\275\256\347\263\273\347\273\237\350\266\205\346\227\266\345\205\263\351\227\255\346\227\266\351\227\264:", nullptr));
        overTime_right->setText(QCoreApplication::translate("SetSocketConnWin", "\347\247\222", nullptr));
        setTimeBt->setText(QCoreApplication::translate("SetSocketConnWin", "\350\256\276\347\275\256", nullptr));
        closeBt->setText(QCoreApplication::translate("SetSocketConnWin", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetSocketConnWin: public Ui_SetSocketConnWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETSOCKETCONNWIN_H
