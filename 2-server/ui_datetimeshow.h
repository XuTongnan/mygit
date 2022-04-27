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
    QVBoxLayout *verticalLayout_2;
    QLabel *timeLb_2;
    QCalendarWidget *calendarWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addEventBt_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closeBt_2;
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
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        timeLb_2 = new QLabel(centralwidget);
        timeLb_2->setObjectName(QString::fromUtf8("timeLb_2"));
        QFont font;
        font.setPointSize(26);
        timeLb_2->setFont(font);
        timeLb_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(timeLb_2);

        calendarWidget_2 = new QCalendarWidget(centralwidget);
        calendarWidget_2->setObjectName(QString::fromUtf8("calendarWidget_2"));
        calendarWidget_2->setStyleSheet(QString::fromUtf8("selection-color: rgb(255, 170, 0);\n"
"alternate-background-color: rgba(85, 85, 127, 100);\n"
"background-color: rgba(0, 0, 0, 100);\n"
"color: rgb(0, 255, 255);\n"
"selection-background-color: rgb(0, 0, 255);"));

        verticalLayout_2->addWidget(calendarWidget_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        addEventBt_2 = new QPushButton(centralwidget);
        addEventBt_2->setObjectName(QString::fromUtf8("addEventBt_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addEventBt_2->sizePolicy().hasHeightForWidth());
        addEventBt_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(addEventBt_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        closeBt_2 = new QPushButton(centralwidget);
        closeBt_2->setObjectName(QString::fromUtf8("closeBt_2"));
        sizePolicy.setHeightForWidth(closeBt_2->sizePolicy().hasHeightForWidth());
        closeBt_2->setSizePolicy(sizePolicy);
        closeBt_2->setMinimumSize(QSize(0, 25));

        horizontalLayout_2->addWidget(closeBt_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

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
        DateTimeShow->setWindowTitle(QCoreApplication::translate("DateTimeShow", "\346\227\245\346\234\237\350\257\246\346\203\205\351\241\265", nullptr));
        timeLb_2->setText(QCoreApplication::translate("DateTimeShow", "\346\227\266\351\222\237", nullptr));
        addEventBt_2->setText(QCoreApplication::translate("DateTimeShow", "\345\206\234\345\216\206", nullptr));
        closeBt_2->setText(QCoreApplication::translate("DateTimeShow", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DateTimeShow: public Ui_DateTimeShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIMESHOW_H
