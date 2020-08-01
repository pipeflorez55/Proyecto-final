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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *multi;
    QLabel *avisocm;
    QLabel *ingresomal;
    QLabel *label;
    QLineEdit *usuario;
    QLineEdit *contrase;
    QPushButton *pushButton;
    QLineEdit *newname;
    QLineEdit *newpassword;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(999, 625);
        multi = new QPushButton(Menu);
        multi->setObjectName(QString::fromUtf8("multi"));
        multi->setGeometry(QRect(430, 40, 171, 31));
        multi->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/botonMulti.png"), QSize(), QIcon::Normal, QIcon::Off);
        multi->setIcon(icon);
        multi->setIconSize(QSize(190, 80));
        avisocm = new QLabel(Menu);
        avisocm->setObjectName(QString::fromUtf8("avisocm"));
        avisocm->setGeometry(QRect(160, 520, 171, 21));
        ingresomal = new QLabel(Menu);
        ingresomal->setObjectName(QString::fromUtf8("ingresomal"));
        ingresomal->setGeometry(QRect(570, 450, 231, 101));
        label = new QLabel(Menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 999, 625));
        label->setPixmap(QPixmap(QString::fromUtf8(":/inicio.jpg")));
        usuario = new QLineEdit(Menu);
        usuario->setObjectName(QString::fromUtf8("usuario"));
        usuario->setGeometry(QRect(841, 461, 137, 22));
        usuario->setTabletTracking(true);
        contrase = new QLineEdit(Menu);
        contrase->setObjectName(QString::fromUtf8("contrase"));
        contrase->setGeometry(QRect(841, 489, 137, 22));
        contrase->setTabletTracking(true);
        contrase->setMaxLength(5);
        pushButton = new QPushButton(Menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(840, 520, 131, 31));
        pushButton->setMouseTracking(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/botonLogin.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(150, 80));
        newname = new QLineEdit(Menu);
        newname->setObjectName(QString::fromUtf8("newname"));
        newname->setGeometry(QRect(21, 471, 137, 22));
        newname->setTabletTracking(true);
        newpassword = new QLineEdit(Menu);
        newpassword->setObjectName(QString::fromUtf8("newpassword"));
        newpassword->setGeometry(QRect(21, 499, 137, 22));
        newpassword->setTabletTracking(true);
        newpassword->setMaxLength(5);
        pushButton_3 = new QPushButton(Menu);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 530, 131, 31));
        pushButton_3->setMouseTracking(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/botonSignup.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(150, 80));
        label->raise();
        usuario->raise();
        contrase->raise();
        pushButton->raise();
        ingresomal->raise();
        avisocm->raise();
        pushButton_3->raise();
        newpassword->raise();
        newname->raise();
        multi->raise();

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Dialog", nullptr));
        multi->setText(QString());
        avisocm->setText(QString());
        ingresomal->setText(QString());
        label->setText(QString());
        pushButton->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
