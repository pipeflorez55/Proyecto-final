/********************************************************************************
** Form generated from reading UI file 'pantallaf.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANTALLAF_H
#define UI_PANTALLAF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_PantallaF
{
public:

    void setupUi(QDialog *PantallaF)
    {
        if (PantallaF->objectName().isEmpty())
            PantallaF->setObjectName(QString::fromUtf8("PantallaF"));
        PantallaF->resize(400, 300);

        retranslateUi(PantallaF);

        QMetaObject::connectSlotsByName(PantallaF);
    } // setupUi

    void retranslateUi(QDialog *PantallaF)
    {
        PantallaF->setWindowTitle(QCoreApplication::translate("PantallaF", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PantallaF: public Ui_PantallaF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANTALLAF_H
