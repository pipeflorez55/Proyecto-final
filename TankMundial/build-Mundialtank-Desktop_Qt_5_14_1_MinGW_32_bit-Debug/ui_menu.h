/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *multi;
    QLabel *avisocm;
    QLabel *ingresomal;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *usuario;
    QLineEdit *contrase;
    QPushButton *pushButton;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLineEdit *newname;
    QLineEdit *newpassword;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(758, 514);
        multi = new QPushButton(Menu);
        multi->setObjectName(QString::fromUtf8("multi"));
        multi->setGeometry(QRect(40, 150, 93, 28));
        avisocm = new QLabel(Menu);
        avisocm->setObjectName(QString::fromUtf8("avisocm"));
        avisocm->setGeometry(QRect(200, 370, 171, 21));
        ingresomal = new QLabel(Menu);
        ingresomal->setObjectName(QString::fromUtf8("ingresomal"));
        ingresomal->setGeometry(QRect(400, 330, 161, 101));
        widget = new QWidget(Menu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(570, 350, 139, 86));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        usuario = new QLineEdit(widget);
        usuario->setObjectName(QString::fromUtf8("usuario"));

        gridLayout->addWidget(usuario, 0, 0, 1, 1);

        contrase = new QLineEdit(widget);
        contrase->setObjectName(QString::fromUtf8("contrase"));
        contrase->setMaxLength(5);

        gridLayout->addWidget(contrase, 1, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        widget1 = new QWidget(Menu);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 340, 139, 86));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        newname = new QLineEdit(widget1);
        newname->setObjectName(QString::fromUtf8("newname"));

        gridLayout_2->addWidget(newname, 0, 0, 1, 1);

        newpassword = new QLineEdit(widget1);
        newpassword->setObjectName(QString::fromUtf8("newpassword"));
        newpassword->setMaxLength(5);

        gridLayout_2->addWidget(newpassword, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 2, 0, 1, 1);


        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Dialog", nullptr));
        multi->setText(QCoreApplication::translate("Menu", "Multi Player", nullptr));
        avisocm->setText(QString());
        ingresomal->setText(QString());
        pushButton->setText(QCoreApplication::translate("Menu", "Login", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Menu", "Sing Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
