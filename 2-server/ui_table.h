/********************************************************************************
** Form generated from reading UI file 'table.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_H
#define UI_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Table
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *payStatuLb;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *peopleNum;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *moneyNum;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *changBt;
    QPushButton *outputBt;

    void setupUi(QWidget *Table)
    {
        if (Table->objectName().isEmpty())
            Table->setObjectName(QString::fromUtf8("Table"));
        Table->resize(300, 400);
        verticalLayout_2 = new QVBoxLayout(Table);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(Table);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("04b_21"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(50);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"04b_21\";\n"
"text-decoration: underline;"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(Table);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        payStatuLb = new QLabel(Table);
        payStatuLb->setObjectName(QString::fromUtf8("payStatuLb"));
        payStatuLb->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_2->addWidget(payStatuLb);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableWidget = new QTableWidget(Table);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setStyleSheet(QString::fromUtf8("\n"
"QHeaderView::section{\n"
"	background: rgba(74, 74, 74, 100);\n"
"}\n"
"\n"
"QTableWidget{\n"
"	background-color:  rgba(74, 74, 74, 100);\n"
"	color: rgb(0, 255, 255);\n"
"}"));

        verticalLayout_3->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Table);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        peopleNum = new QLabel(Table);
        peopleNum->setObjectName(QString::fromUtf8("peopleNum"));

        horizontalLayout->addWidget(peopleNum);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(Table);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        moneyNum = new QLabel(Table);
        moneyNum->setObjectName(QString::fromUtf8("moneyNum"));
        moneyNum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(moneyNum);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        changBt = new QPushButton(Table);
        changBt->setObjectName(QString::fromUtf8("changBt"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(changBt->sizePolicy().hasHeightForWidth());
        changBt->setSizePolicy(sizePolicy);
        changBt->setMinimumSize(QSize(0, 25));

        horizontalLayout_4->addWidget(changBt);

        outputBt = new QPushButton(Table);
        outputBt->setObjectName(QString::fromUtf8("outputBt"));
        sizePolicy.setHeightForWidth(outputBt->sizePolicy().hasHeightForWidth());
        outputBt->setSizePolicy(sizePolicy);
        outputBt->setMinimumSize(QSize(0, 25));

        horizontalLayout_4->addWidget(outputBt);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout->setStretch(0, 1);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Table);

        QMetaObject::connectSlotsByName(Table);
    } // setupUi

    void retranslateUi(QWidget *Table)
    {
        Table->setWindowTitle(QCoreApplication::translate("Table", "\350\256\242\345\215\225\350\241\250\346\240\274", nullptr));
        label_5->setText(QCoreApplication::translate("Table", " \350\256\242\345\215\225\347\256\241\347\220\206 ", nullptr));
        label_6->setText(QCoreApplication::translate("Table", "\346\224\257\344\273\230\347\212\266\346\200\201: ", nullptr));
        payStatuLb->setText(QCoreApplication::translate("Table", "\346\234\252\346\224\257\344\273\230", nullptr));
        label->setText(QCoreApplication::translate("Table", "\347\224\250\351\244\220\344\272\272\346\225\260\357\274\232", nullptr));
        peopleNum->setText(QCoreApplication::translate("Table", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Table", "\346\200\273\350\256\241\357\274\232", nullptr));
        moneyNum->setText(QCoreApplication::translate("Table", "0\345\205\203", nullptr));
        changBt->setText(QCoreApplication::translate("Table", "\344\277\256\346\224\271\350\256\242\345\215\225", nullptr));
        outputBt->setText(QCoreApplication::translate("Table", "\346\211\223\345\215\260\350\264\246\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Table: public Ui_Table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_H
