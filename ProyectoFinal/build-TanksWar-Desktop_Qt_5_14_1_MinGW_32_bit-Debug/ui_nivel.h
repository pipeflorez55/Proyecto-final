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
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QLabel *nombrevo;
    QLabel *nombreangulo;
    QLabel *vo;
    QLabel *angulo;

    void setupUi(QDialog *Nivel)
    {
        if (Nivel->objectName().isEmpty())
            Nivel->setObjectName(QString::fromUtf8("Nivel"));
        Nivel->resize(1174, 754);
        layoutWidget = new QWidget(Nivel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 1001, 661));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(layoutWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        nombrevo = new QLabel(Nivel);
        nombrevo->setObjectName(QString::fromUtf8("nombrevo"));
        nombrevo->setGeometry(QRect(90, 680, 151, 16));
        nombreangulo = new QLabel(Nivel);
        nombreangulo->setObjectName(QString::fromUtf8("nombreangulo"));
        nombreangulo->setGeometry(QRect(540, 680, 161, 16));
        vo = new QLabel(Nivel);
        vo->setObjectName(QString::fromUtf8("vo"));
        vo->setGeometry(QRect(210, 680, 171, 16));
        angulo = new QLabel(Nivel);
        angulo->setObjectName(QString::fromUtf8("angulo"));
        angulo->setGeometry(QRect(660, 680, 55, 16));

        retranslateUi(Nivel);

        QMetaObject::connectSlotsByName(Nivel);
    } // setupUi

    void retranslateUi(QDialog *Nivel)
    {
        Nivel->setWindowTitle(QCoreApplication::translate("Nivel", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Nivel", "Inicio", nullptr));
        nombrevo->setText(QCoreApplication::translate("Nivel", "velocidad inicial:", nullptr));
        nombreangulo->setText(QCoreApplication::translate("Nivel", "angulo:", nullptr));
        vo->setText(QCoreApplication::translate("Nivel", "0", nullptr));
        angulo->setText(QCoreApplication::translate("Nivel", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nivel: public Ui_Nivel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NIVEL_H
