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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nivel
{
public:
    QLabel *angulo;
    QLabel *nombreangulo;
    QLabel *vo;
    QLabel *nombrevo;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *objetivo;
    QLabel *label_2;
    QLabel *numdis;

    void setupUi(QDialog *Nivel)
    {
        if (Nivel->objectName().isEmpty())
            Nivel->setObjectName(QString::fromUtf8("Nivel"));
        Nivel->resize(1038, 778);
        angulo = new QLabel(Nivel);
        angulo->setObjectName(QString::fromUtf8("angulo"));
        angulo->setGeometry(QRect(230, 670, 21, 16));
        nombreangulo = new QLabel(Nivel);
        nombreangulo->setObjectName(QString::fromUtf8("nombreangulo"));
        nombreangulo->setGeometry(QRect(170, 670, 51, 16));
        vo = new QLabel(Nivel);
        vo->setObjectName(QString::fromUtf8("vo"));
        vo->setGeometry(QRect(120, 670, 21, 16));
        nombrevo = new QLabel(Nivel);
        nombrevo->setObjectName(QString::fromUtf8("nombrevo"));
        nombrevo->setGeometry(QRect(10, 670, 101, 16));
        layoutWidget = new QWidget(Nivel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 1001, 661));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(layoutWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setEnabled(true);

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        label = new QLabel(Nivel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 670, 131, 16));
        objetivo = new QLabel(Nivel);
        objetivo->setObjectName(QString::fromUtf8("objetivo"));
        objetivo->setGeometry(QRect(410, 670, 16, 16));
        label_2 = new QLabel(Nivel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(470, 670, 131, 16));
        numdis = new QLabel(Nivel);
        numdis->setObjectName(QString::fromUtf8("numdis"));
        numdis->setGeometry(QRect(600, 670, 16, 16));

        retranslateUi(Nivel);

        QMetaObject::connectSlotsByName(Nivel);
    } // setupUi

    void retranslateUi(QDialog *Nivel)
    {
        Nivel->setWindowTitle(QCoreApplication::translate("Nivel", "Dialog", nullptr));
        angulo->setText(QCoreApplication::translate("Nivel", "0", nullptr));
        nombreangulo->setText(QCoreApplication::translate("Nivel", "Angulo:", nullptr));
        vo->setText(QCoreApplication::translate("Nivel", "0", nullptr));
        nombrevo->setText(QCoreApplication::translate("Nivel", "velocidad inicial:", nullptr));
        pushButton->setText(QCoreApplication::translate("Nivel", "Inicio", nullptr));
        label->setText(QCoreApplication::translate("Nivel", "Objetivos alcanzados:", nullptr));
        objetivo->setText(QCoreApplication::translate("Nivel", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Nivel", "Numero de disparos:", nullptr));
        numdis->setText(QCoreApplication::translate("Nivel", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nivel: public Ui_Nivel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NIVEL_H