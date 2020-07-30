/********************************************************************************
** Form generated from reading UI file 'multiplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLAYER_H
#define UI_MULTIPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Multiplayer
{
public:
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *vidasJ1;
    QLabel *vidasJ2;

    void setupUi(QDialog *Multiplayer)
    {
        if (Multiplayer->objectName().isEmpty())
            Multiplayer->setObjectName(QString::fromUtf8("Multiplayer"));
        Multiplayer->resize(1035, 700);
        graphicsView = new QGraphicsView(Multiplayer);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 999, 625));
        pushButton = new QPushButton(Multiplayer);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 630, 93, 28));
        label = new QLabel(Multiplayer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 630, 47, 13));
        label_2 = new QLabel(Multiplayer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 630, 47, 13));
        vidasJ1 = new QLabel(Multiplayer);
        vidasJ1->setObjectName(QString::fromUtf8("vidasJ1"));
        vidasJ1->setGeometry(QRect(80, 630, 47, 13));
        vidasJ2 = new QLabel(Multiplayer);
        vidasJ2->setObjectName(QString::fromUtf8("vidasJ2"));
        vidasJ2->setGeometry(QRect(540, 630, 47, 13));

        retranslateUi(Multiplayer);

        QMetaObject::connectSlotsByName(Multiplayer);
    } // setupUi

    void retranslateUi(QDialog *Multiplayer)
    {
        Multiplayer->setWindowTitle(QCoreApplication::translate("Multiplayer", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Multiplayer", "Volver al menu", nullptr));
        label->setText(QCoreApplication::translate("Multiplayer", "vidas J1:", nullptr));
        label_2->setText(QCoreApplication::translate("Multiplayer", "vidas J2:", nullptr));
        vidasJ1->setText(QCoreApplication::translate("Multiplayer", "4", nullptr));
        vidasJ2->setText(QCoreApplication::translate("Multiplayer", "4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Multiplayer: public Ui_Multiplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLAYER_H
