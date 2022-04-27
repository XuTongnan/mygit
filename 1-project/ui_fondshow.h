/********************************************************************************
** Form generated from reading UI file 'fondshow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONDSHOW_H
#define UI_FONDSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_fondShow
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *nameLb;
    QHBoxLayout *horizontalLayout;
    QLabel *money_type;
    QLabel *money;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addBt_2;
    QLineEdit *numEdit;
    QPushButton *addBt;

    void setupUi(QFrame *fondShow)
    {
        if (fondShow->objectName().isEmpty())
            fondShow->setObjectName(QString::fromUtf8("fondShow"));
        fondShow->resize(205, 191);
        fondShow->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QFrame #fondShow{\n"
"margin:5px;\n"
"}\n"
"\n"
"QFrame :hover{\n"
"border:2px solid #00ff00;\n"
"\n"
"}\n"
"\n"
""));
        verticalLayout_2 = new QVBoxLayout(fondShow);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(fondShow);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/img/menu.png);"));

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nameLb = new QLabel(fondShow);
        nameLb->setObjectName(QString::fromUtf8("nameLb"));
        sizePolicy.setHeightForWidth(nameLb->sizePolicy().hasHeightForWidth());
        nameLb->setSizePolicy(sizePolicy);
        nameLb->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(9);
        nameLb->setFont(font);
        nameLb->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(nameLb);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        money_type = new QLabel(fondShow);
        money_type->setObjectName(QString::fromUtf8("money_type"));
        sizePolicy.setHeightForWidth(money_type->sizePolicy().hasHeightForWidth());
        money_type->setSizePolicy(sizePolicy);
        money_type->setMinimumSize(QSize(0, 0));
        money_type->setFont(font);
        money_type->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));
        money_type->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(money_type);

        money = new QLabel(fondShow);
        money->setObjectName(QString::fromUtf8("money"));
        sizePolicy.setHeightForWidth(money->sizePolicy().hasHeightForWidth());
        money->setSizePolicy(sizePolicy);
        money->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(10);
        money->setFont(font1);
        money->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));
        money->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(money);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        addBt_2 = new QPushButton(fondShow);
        addBt_2->setObjectName(QString::fromUtf8("addBt_2"));
        sizePolicy.setHeightForWidth(addBt_2->sizePolicy().hasHeightForWidth());
        addBt_2->setSizePolicy(sizePolicy);
        addBt_2->setMinimumSize(QSize(16, 16));
        QFont font2;
        font2.setPointSize(36);
        addBt_2->setFont(font2);
        addBt_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #c2c2c2;\n"
"border-radius: 8px;\n"
"}\n"
"QPushButton:hover{background-color: rgb(255, 255, 127);}\n"
"QPushButton:pressed{background-color: #ffaa00}"));

        horizontalLayout_2->addWidget(addBt_2);

        numEdit = new QLineEdit(fondShow);
        numEdit->setObjectName(QString::fromUtf8("numEdit"));
        numEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        numEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(numEdit);

        addBt = new QPushButton(fondShow);
        addBt->setObjectName(QString::fromUtf8("addBt"));
        sizePolicy.setHeightForWidth(addBt->sizePolicy().hasHeightForWidth());
        addBt->setSizePolicy(sizePolicy);
        addBt->setMinimumSize(QSize(16, 16));
        addBt->setFont(font2);
        addBt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #c2c2c2;\n"
"border-radius: 8px;\n"
"}\n"
"QPushButton:hover{background-color: rgb(255, 255, 127);}\n"
"QPushButton:pressed{background-color: #ffaa00}"));

        horizontalLayout_2->addWidget(addBt);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(0, 8);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1);

        retranslateUi(fondShow);

        QMetaObject::connectSlotsByName(fondShow);
    } // setupUi

    void retranslateUi(QFrame *fondShow)
    {
        fondShow->setWindowTitle(QCoreApplication::translate("fondShow", "\351\243\237\347\211\251\350\257\246\346\203\205", nullptr));
        label->setText(QString());
        nameLb->setText(QCoreApplication::translate("fondShow", "\350\217\234\345\220\215", nullptr));
        money_type->setText(QCoreApplication::translate("fondShow", "RMB", nullptr));
        money->setText(QCoreApplication::translate("fondShow", "99.99/\344\273\275", nullptr));
        addBt_2->setText(QCoreApplication::translate("fondShow", "-", nullptr));
        numEdit->setText(QCoreApplication::translate("fondShow", "0", nullptr));
        addBt->setText(QCoreApplication::translate("fondShow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fondShow: public Ui_fondShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONDSHOW_H
