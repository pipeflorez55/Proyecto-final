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
#include <QtGui/QIcon>
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
    QLabel *avisocm;
    QPushButton *multi;
    QLabel *ingresomal;
    QLabel *label;
    QLineEdit *contrase;
    QLineEdit *usuario;
    QPushButton *Login;
    QLineEdit *newpassword;
    QLineEdit *newname;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(999, 625);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        avisocm = new QLabel(centralwidget);
        avisocm->setObjectName(QString::fromUtf8("avisocm"));
        avisocm->setGeometry(QRect(180, 470, 251, 21));
        multi = new QPushButton(centralwidget);
        multi->setObjectName(QString::fromUtf8("multi"));
        multi->setGeometry(QRect(430, 40, 171, 31));
        multi->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/botonMulti.png"), QSize(), QIcon::Normal, QIcon::Off);
        multi->setIcon(icon);
        multi->setIconSize(QSize(190, 80));
        ingresomal = new QLabel(centralwidget);
        ingresomal->setObjectName(QString::fromUtf8("ingresomal"));
        ingresomal->setGeometry(QRect(590, 450, 241, 101));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 999, 625));
        label->setPixmap(QPixmap(QString::fromUtf8("inicio.jpg")));
        contrase = new QLineEdit(centralwidget);
        contrase->setObjectName(QString::fromUtf8("contrase"));
        contrase->setGeometry(QRect(841, 489, 137, 22));
        contrase->setTabletTracking(true);
        contrase->setMaxLength(5);
        usuario = new QLineEdit(centralwidget);
        usuario->setObjectName(QString::fromUtf8("usuario"));
        usuario->setGeometry(QRect(841, 461, 137, 22));
        usuario->setTabletTracking(true);
        Login = new QPushButton(centralwidget);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setEnabled(true);
        Login->setGeometry(QRect(840, 520, 131, 31));
        Login->setMouseTracking(true);
        Login->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/botonLogin.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setIcon(icon1);
        Login->setIconSize(QSize(150, 80));
        newpassword = new QLineEdit(centralwidget);
        newpassword->setObjectName(QString::fromUtf8("newpassword"));
        newpassword->setGeometry(QRect(21, 499, 137, 22));
        newpassword->setTabletTracking(true);
        newpassword->setMaxLength(5);
        newname = new QLineEdit(centralwidget);
        newname->setObjectName(QString::fromUtf8("newname"));
        newname->setGeometry(QRect(21, 471, 137, 22));
        newname->setTabletTracking(true);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 530, 131, 31));
        pushButton_3->setMouseTracking(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/botonSignup.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(150, 80));
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        multi->raise();
        newpassword->raise();
        newname->raise();
        usuario->raise();
        Login->raise();
        contrase->raise();
        ingresomal->raise();
        avisocm->raise();
        pushButton_3->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 999, 26));
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
        multi->setText(QString());
        ingresomal->setText(QString());
        label->setText(QString());
        Login->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
