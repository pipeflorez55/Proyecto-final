/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *avisocm;
    QPushButton *pushButton_2;
    QLabel *ingresomal;
    QWidget *widget;
    QFormLayout *formLayout;
    QLineEdit *newname;
    QLineEdit *newpassword;
    QPushButton *pushButton_3;
    QWidget *widget1;
    QFormLayout *formLayout_2;
    QLineEdit *usuario;
    QLineEdit *contrase;
    QPushButton *Login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        avisocm = new QLabel(centralwidget);
        avisocm->setObjectName(QString::fromUtf8("avisocm"));
        avisocm->setGeometry(QRect(156, 435, 251, 21));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(6, 200, 93, 28));
        ingresomal = new QLabel(centralwidget);
        ingresomal->setObjectName(QString::fromUtf8("ingresomal"));
        ingresomal->setGeometry(QRect(450, 400, 161, 101));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 410, 145, 86));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        newname = new QLineEdit(widget);
        newname->setObjectName(QString::fromUtf8("newname"));

        formLayout->setWidget(0, QFormLayout::LabelRole, newname);

        newpassword = new QLineEdit(widget);
        newpassword->setObjectName(QString::fromUtf8("newpassword"));
        newpassword->setMaxLength(5);

        formLayout->setWidget(1, QFormLayout::LabelRole, newpassword);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton_3);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(656, 400, 145, 86));
        formLayout_2 = new QFormLayout(widget1);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        usuario = new QLineEdit(widget1);
        usuario->setObjectName(QString::fromUtf8("usuario"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, usuario);

        contrase = new QLineEdit(widget1);
        contrase->setObjectName(QString::fromUtf8("contrase"));
        contrase->setMaxLength(5);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, contrase);

        Login = new QPushButton(widget1);
        Login->setObjectName(QString::fromUtf8("Login"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, Login);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        avisocm->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Multi Player", nullptr));
        ingresomal->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Sing Up", nullptr));
        Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
