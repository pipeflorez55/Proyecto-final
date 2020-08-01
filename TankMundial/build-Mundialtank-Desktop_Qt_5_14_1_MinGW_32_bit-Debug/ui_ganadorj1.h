/********************************************************************************
** Form generated from reading UI file 'ganadorj1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GANADORJ1_H
#define UI_GANADORJ1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GanadorJ1
{
public:
    QLabel *label;
    QPushButton *menu;

    void setupUi(QDialog *GanadorJ1)
    {
        if (GanadorJ1->objectName().isEmpty())
            GanadorJ1->setObjectName(QString::fromUtf8("GanadorJ1"));
        GanadorJ1->resize(819, 500);
        label = new QLabel(GanadorJ1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 200, 171, 16));
        menu = new QPushButton(GanadorJ1);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(422, 347, 171, 61));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/botonMenu.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu->setIcon(icon);
        menu->setIconSize(QSize(150, 50));

        retranslateUi(GanadorJ1);

        QMetaObject::connectSlotsByName(GanadorJ1);
    } // setupUi

    void retranslateUi(QDialog *GanadorJ1)
    {
        GanadorJ1->setWindowTitle(QCoreApplication::translate("GanadorJ1", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GanadorJ1", "Gano jugador1", nullptr));
        menu->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GanadorJ1: public Ui_GanadorJ1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GANADORJ1_H
