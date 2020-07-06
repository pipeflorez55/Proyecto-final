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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *Login;
    QLineEdit *newname;
    QLineEdit *newpassword;
    QLabel *avisocm;
    QLineEdit *usuario;
    QLineEdit *contrase;
    QLabel *ingresomal;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 180, 93, 28));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 220, 93, 28));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 500, 93, 28));
        Login = new QPushButton(centralwidget);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setGeometry(QRect(700, 510, 93, 28));
        newname = new QLineEdit(centralwidget);
        newname->setObjectName(QString::fromUtf8("newname"));
        newname->setGeometry(QRect(20, 430, 137, 22));
        newpassword = new QLineEdit(centralwidget);
        newpassword->setObjectName(QString::fromUtf8("newpassword"));
        newpassword->setGeometry(QRect(20, 460, 137, 22));
        newpassword->setMaxLength(5);
        avisocm = new QLabel(centralwidget);
        avisocm->setObjectName(QString::fromUtf8("avisocm"));
        avisocm->setGeometry(QRect(180, 455, 251, 21));
        usuario = new QLineEdit(centralwidget);
        usuario->setObjectName(QString::fromUtf8("usuario"));
        usuario->setGeometry(QRect(680, 420, 113, 22));
        contrase = new QLineEdit(centralwidget);
        contrase->setObjectName(QString::fromUtf8("contrase"));
        contrase->setGeometry(QRect(680, 460, 113, 22));
        contrase->setMaxLength(5);
        ingresomal = new QLabel(centralwidget);
        ingresomal->setObjectName(QString::fromUtf8("ingresomal"));
        ingresomal->setGeometry(QRect(474, 420, 161, 101));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Single Player", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Multi Player", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Sing Up", nullptr));
        Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        avisocm->setText(QString());
        ingresomal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
