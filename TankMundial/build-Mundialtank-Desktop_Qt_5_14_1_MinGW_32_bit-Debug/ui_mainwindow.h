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
    QLineEdit *newname;
    QLabel *avisocm;
    QLineEdit *newpassword;
    QPushButton *pushButton_2;
    QLineEdit *contrase;
    QLineEdit *usuario;
    QLabel *ingresomal;
    QPushButton *Login;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        newname = new QLineEdit(centralwidget);
        newname->setObjectName(QString::fromUtf8("newname"));
        newname->setGeometry(QRect(-4, 410, 137, 22));
        avisocm = new QLabel(centralwidget);
        avisocm->setObjectName(QString::fromUtf8("avisocm"));
        avisocm->setGeometry(QRect(156, 435, 251, 21));
        newpassword = new QLineEdit(centralwidget);
        newpassword->setObjectName(QString::fromUtf8("newpassword"));
        newpassword->setGeometry(QRect(-4, 440, 137, 22));
        newpassword->setMaxLength(5);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(6, 200, 93, 28));
        contrase = new QLineEdit(centralwidget);
        contrase->setObjectName(QString::fromUtf8("contrase"));
        contrase->setGeometry(QRect(656, 440, 113, 22));
        contrase->setMaxLength(5);
        usuario = new QLineEdit(centralwidget);
        usuario->setObjectName(QString::fromUtf8("usuario"));
        usuario->setGeometry(QRect(656, 400, 113, 22));
        ingresomal = new QLabel(centralwidget);
        ingresomal->setObjectName(QString::fromUtf8("ingresomal"));
        ingresomal->setGeometry(QRect(450, 400, 161, 101));
        Login = new QPushButton(centralwidget);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setGeometry(QRect(680, 480, 93, 28));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 470, 93, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
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
        Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Sing Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
