/********************************************************************************
** Form generated from reading UI file 'nivel.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NIVEL_H
#define UI_NIVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
<<<<<<< HEAD
#include <QtWidgets/QProgressBar>
=======
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nivel
{
public:
<<<<<<< HEAD
    QProgressBar *progressBar;
=======
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
    QWidget *widget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;

    void setupUi(QDialog *Nivel)
    {
        if (Nivel->objectName().isEmpty())
            Nivel->setObjectName(QString::fromUtf8("Nivel"));
        Nivel->resize(1174, 754);
<<<<<<< HEAD
        progressBar = new QProgressBar(Nivel);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(-20, 690, 999, 24));
        progressBar->setValue(24);
=======
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
        widget = new QWidget(Nivel);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 1001, 661));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(widget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

<<<<<<< HEAD
        gridLayout->addWidget(pushButton, 2, 0, 1, 1);
=======
        gridLayout->addWidget(pushButton, 1, 0, 1, 1);
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f


        retranslateUi(Nivel);

        QMetaObject::connectSlotsByName(Nivel);
    } // setupUi

    void retranslateUi(QDialog *Nivel)
    {
        Nivel->setWindowTitle(QCoreApplication::translate("Nivel", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Nivel", "Inicio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nivel: public Ui_Nivel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NIVEL_H
