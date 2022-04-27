/********************************************************************************
** Form generated from reading UI file 'datetimeshow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIMESHOW_H
#define UI_DATETIMESHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DateTimeShow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *timeLb;
    QCalendarWidget *calendarWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addEventBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DateTimeShow)
    {
        if (DateTimeShow->objectName().isEmpty())
            DateTimeShow->setObjectName(QString::fromUtf8("DateTimeShow"));
        DateTimeShow->resize(400, 480);
        DateTimeShow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgba(0, 0, 0, 50);\n"
"}\n"
"\n"
"QCalendarWidget{\n"
"	background-color: rgba(0, 0, 0, 50);\n"
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
        centralwidget = new QWidget(DateTimeShow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        timeLb = new QLabel(centralwidget);
        timeLb->setObjectName(QString::fromUtf8("timeLb"));
        QFont font;
        font.setPointSize(26);
        timeLb->setFont(font);
        timeLb->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(timeLb);

        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setStyleSheet(QString::fromUtf8("selection-color: rgb(255, 170, 0);\n"
"alternate-background-color: rgba(85, 85, 127, 100);\n"
"background-color: rgba(0, 0, 0, 100);\n"
"color: rgb(0, 255, 255);\n"
"selection-background-color: rgb(0, 0, 255);"));

        verticalLayout->addWidget(calendarWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addEventBt = new QPushButton(centralwidget);
        addEventBt->setObjectName(QString::fromUtf8("addEventBt"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addEventBt->sizePolicy().hasHeightForWidth());
        addEventBt->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(addEventBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeBt = new QPushButton(centralwidget);
        closeBt->setObjectName(QString::fromUtf8("closeBt"));
        sizePolicy.setHeightForWidth(closeBt->sizePolicy().hasHeightForWidth());
        closeBt->setSizePolicy(sizePolicy);
        closeBt->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(closeBt);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        DateTimeShow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DateTimeShow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 26));
        DateTimeShow->setMenuBar(menubar);
        statusbar = new QStatusBar(DateTimeShow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DateTimeShow->setStatusBar(statusbar);

        retranslateUi(DateTimeShow);

        QMetaObject::connectSlotsByName(DateTimeShow);
    } // setupUi

    void retranslateUi(QMainWindow *DateTimeShow)
    {
        DateTimeShow->setWindowTitle(QCoreApplication::translate("DateTimeShow", "\346\227\245\346\234\237\350\257\246\346\203\205", nullptr));
        timeLb->setText(QCoreApplication::translate("DateTimeShow", "\346\227\266\351\222\237", nullptr));
        addEventBt->setText(QCoreApplication::translate("DateTimeShow", "\345\206\234\345\216\206", nullptr));
        closeBt->setText(QCoreApplication::translate("DateTimeShow", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DateTimeShow: public Ui_DateTimeShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIMESHOW_H
