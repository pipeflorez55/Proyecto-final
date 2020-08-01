/********************************************************************************
** Form generated from reading UI file 'ganadorj2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GANADORJ2_H
#define UI_GANADORJ2_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GanadorJ2
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *GanadorJ2)
    {
        if (GanadorJ2->objectName().isEmpty())
            GanadorJ2->setObjectName(QString::fromUtf8("GanadorJ2"));
        GanadorJ2->resize(588, 461);
        label = new QLabel(GanadorJ2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 140, 201, 16));
        pushButton = new QPushButton(GanadorJ2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 287, 141, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/botonMenu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(150, 80));

        retranslateUi(GanadorJ2);

        QMetaObject::connectSlotsByName(GanadorJ2);
    } // setupUi

    void retranslateUi(QDialog *GanadorJ2)
    {
        GanadorJ2->setWindowTitle(QCoreApplication::translate("GanadorJ2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GanadorJ2", "Gano juador 2", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GanadorJ2: public Ui_GanadorJ2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GANADORJ2_H
