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

QT_BEGIN_NAMESPACE

class Ui_Multiplayer
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QDialog *Multiplayer)
    {
        if (Multiplayer->objectName().isEmpty())
            Multiplayer->setObjectName(QString::fromUtf8("Multiplayer"));
        Multiplayer->resize(1035, 700);
        graphicsView = new QGraphicsView(Multiplayer);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 999, 625));

        retranslateUi(Multiplayer);

        QMetaObject::connectSlotsByName(Multiplayer);
    } // setupUi

    void retranslateUi(QDialog *Multiplayer)
    {
        Multiplayer->setWindowTitle(QCoreApplication::translate("Multiplayer", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Multiplayer: public Ui_Multiplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLAYER_H
