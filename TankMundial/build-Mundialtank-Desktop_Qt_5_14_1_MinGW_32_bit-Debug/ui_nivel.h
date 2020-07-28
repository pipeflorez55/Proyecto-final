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
    QGraphicsView *graphicsView;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *nombrevo;
    QLabel *vo;
    QLabel *nombreangulo;
    QLabel *angulo;
    QLabel *label;
    QLabel *objetivo;
    QLabel *label_2;
    QLabel *numdis;
    QPushButton *controles;
    QPushButton *pushButton;
    QPushButton *menu;

    void setupUi(QDialog *Nivel)
    {
        if (Nivel->objectName().isEmpty())
            Nivel->setObjectName(QString::fromUtf8("Nivel"));
        Nivel->resize(1038, 778);
        graphicsView = new QGraphicsView(Nivel);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(0, 0, 999, 625));
        widget = new QWidget(Nivel);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 630, 981, 30));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nombrevo = new QLabel(widget);
        nombrevo->setObjectName(QString::fromUtf8("nombrevo"));

        gridLayout->addWidget(nombrevo, 0, 0, 1, 1);

        vo = new QLabel(widget);
        vo->setObjectName(QString::fromUtf8("vo"));

        gridLayout->addWidget(vo, 0, 1, 1, 1);

        nombreangulo = new QLabel(widget);
        nombreangulo->setObjectName(QString::fromUtf8("nombreangulo"));

        gridLayout->addWidget(nombreangulo, 0, 2, 1, 1);

        angulo = new QLabel(widget);
        angulo->setObjectName(QString::fromUtf8("angulo"));

        gridLayout->addWidget(angulo, 0, 3, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 4, 1, 1);

        objetivo = new QLabel(widget);
        objetivo->setObjectName(QString::fromUtf8("objetivo"));

        gridLayout->addWidget(objetivo, 0, 5, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 6, 1, 1);

        numdis = new QLabel(widget);
        numdis->setObjectName(QString::fromUtf8("numdis"));

        gridLayout->addWidget(numdis, 0, 7, 1, 1);

        controles = new QPushButton(widget);
        controles->setObjectName(QString::fromUtf8("controles"));

        gridLayout->addWidget(controles, 0, 8, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 9, 1, 1);

        menu = new QPushButton(widget);
        menu->setObjectName(QString::fromUtf8("menu"));

        gridLayout->addWidget(menu, 0, 10, 1, 1);


        retranslateUi(Nivel);

        QMetaObject::connectSlotsByName(Nivel);
    } // setupUi

    void retranslateUi(QDialog *Nivel)
    {
        Nivel->setWindowTitle(QCoreApplication::translate("Nivel", "Dialog", nullptr));
        nombrevo->setText(QCoreApplication::translate("Nivel", "Velocidad inicial:", nullptr));
        vo->setText(QCoreApplication::translate("Nivel", "0", nullptr));
        nombreangulo->setText(QCoreApplication::translate("Nivel", "Angulo:", nullptr));
        angulo->setText(QCoreApplication::translate("Nivel", "0", nullptr));
        label->setText(QCoreApplication::translate("Nivel", "Objetivos alcanzados:", nullptr));
        objetivo->setText(QCoreApplication::translate("Nivel", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Nivel", "Numero de disparos:", nullptr));
        numdis->setText(QCoreApplication::translate("Nivel", "0", nullptr));
        controles->setText(QCoreApplication::translate("Nivel", "Controles", nullptr));
        pushButton->setText(QCoreApplication::translate("Nivel", "Guardar", nullptr));
        menu->setText(QCoreApplication::translate("Nivel", "Volver al menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nivel: public Ui_Nivel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NIVEL_H
