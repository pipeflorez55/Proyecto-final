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
#include <QtWidgets/QGridLayout>
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
    QPushButton *multi;
    QLabel *ingresomal;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *newname;
    QLineEdit *newpassword;
    QPushButton *pushButton_3;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLineEdit *usuario;
    QLineEdit *contrase;
    QPushButton *Login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(804, 562);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        avisocm = new QLabel(centralwidget);
        avisocm->setObjectName(QString::fromUtf8("avisocm"));
        avisocm->setGeometry(QRect(156, 435, 251, 21));
        multi = new QPushButton(centralwidget);
        multi->setObjectName(QString::fromUtf8("multi"));
        multi->setGeometry(QRect(30, 200, 93, 28));
        ingresomal = new QLabel(centralwidget);
        ingresomal->setObjectName(QString::fromUtf8("ingresomal"));
        ingresomal->setGeometry(QRect(450, 400, 161, 101));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(31, 411, 139, 86));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        newname = new QLineEdit(layoutWidget);
        newname->setObjectName(QString::fromUtf8("newname"));

        gridLayout->addWidget(newname, 0, 0, 1, 1);

        newpassword = new QLineEdit(layoutWidget);
        newpassword->setObjectName(QString::fromUtf8("newpassword"));
        newpassword->setMaxLength(5);

        gridLayout->addWidget(newpassword, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(657, 401, 139, 86));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        usuario = new QLineEdit(layoutWidget1);
        usuario->setObjectName(QString::fromUtf8("usuario"));

        gridLayout_2->addWidget(usuario, 0, 0, 1, 1);

        contrase = new QLineEdit(layoutWidget1);
        contrase->setObjectName(QString::fromUtf8("contrase"));
        contrase->setMaxLength(5);

        gridLayout_2->addWidget(contrase, 1, 0, 1, 1);

        Login = new QPushButton(layoutWidget1);
        Login->setObjectName(QString::fromUtf8("Login"));

        gridLayout_2->addWidget(Login, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 804, 26));
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
        multi->setText(QCoreApplication::translate("MainWindow", "Multi Player", nullptr));
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
