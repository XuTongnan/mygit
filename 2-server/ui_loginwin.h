/********************************************************************************
** Form generated from reading UI file 'loginwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIN_H
#define UI_LOGINWIN_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWin
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
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
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWin)
    {
        if (LoginWin->objectName().isEmpty())
            LoginWin->setObjectName(QString::fromUtf8("LoginWin"));
        LoginWin->resize(600, 500);
        LoginWin->setStyleSheet(QString::fromUtf8("QMainWindow#LoginWin{\n"
"	\n"
"	border-image: url(:/img/food.PNG);\n"
"background-color: rgba(255, 255, 255,100);\n"
"}\n"
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
"	background-color:  rgba(0, 255, 255,100);\n"
"}"));
        centralwidget = new QWidget(LoginWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"border-radius:20px;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(200, 280));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
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


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        LoginWin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 26));
        LoginWin->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LoginWin->setStatusBar(statusbar);

        retranslateUi(LoginWin);

        QMetaObject::connectSlotsByName(LoginWin);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWin)
    {
        LoginWin->setWindowTitle(QCoreApplication::translate("LoginWin", "\346\234\215\345\212\241\347\253\257\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("LoginWin", "\346\234\215\345\212\241\345\221\230\347\231\273\345\275\225", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QString());
        nameEdit->setPlaceholderText(QCoreApplication::translate("LoginWin", "\350\264\246\345\217\267", nullptr));
        pwdEdit->setPlaceholderText(QCoreApplication::translate("LoginWin", "\345\257\206\347\240\201", nullptr));
        loginBt->setText(QCoreApplication::translate("LoginWin", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(shortcut)
        loginBt->setShortcut(QCoreApplication::translate("LoginWin", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class LoginWin: public Ui_LoginWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIN_H
