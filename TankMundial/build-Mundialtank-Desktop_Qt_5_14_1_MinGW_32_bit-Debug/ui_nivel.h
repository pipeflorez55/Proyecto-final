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
#include <QtGui/QIcon>
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
    QPushButton *pushButton;
    QPushButton *controles;
    QPushButton *menu;
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

    void setupUi(QDialog *Nivel)
    {
        if (Nivel->objectName().isEmpty())
            Nivel->setObjectName(QString::fromUtf8("Nivel"));
        Nivel->resize(1038, 778);
        graphicsView = new QGraphicsView(Nivel);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(0, 0, 999, 625));
        pushButton = new QPushButton(Nivel);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(690, 630, 151, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/botonGuardar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(150, 80));
        controles = new QPushButton(Nivel);
        controles->setObjectName(QString::fromUtf8("controles"));
        controles->setGeometry(QRect(540, 630, 151, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/botonControles - copia.png"), QSize(), QIcon::Normal, QIcon::Off);
        controles->setIcon(icon1);
        controles->setIconSize(QSize(150, 80));
        menu = new QPushButton(Nivel);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(840, 630, 151, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/botonMenu.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu->setIcon(icon2);
        menu->setIconSize(QSize(150, 80));
        widget = new QWidget(Nivel);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 640, 531, 20));
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


        retranslateUi(Nivel);

        QMetaObject::connectSlotsByName(Nivel);
    } // setupUi

    void retranslateUi(QDialog *Nivel)
    {
        Nivel->setWindowTitle(QCoreApplication::translate("Nivel", "Dialog", nullptr));
        pushButton->setText(QString());
        controles->setText(QString());
        menu->setText(QString());
        nombrevo->setText(QCoreApplication::translate("Nivel", "Velocidad inicial:", nullptr));
        vo->setText(QCoreApplication::translate("Nivel", "0", nullptr));
        nombreangulo->setText(QCoreApplication::translate("Nivel", "Angulo:", nullptr));
        angulo->setText(QCoreApplication::translate("Nivel", "0", nullptr));
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
