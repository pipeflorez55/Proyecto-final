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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Multiplayer
{
public:
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *ControJ1;
    QPushButton *ControlJ2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *vidasJ1;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
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
        pushButton->setGeometry(QRect(850, 627, 131, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/botonMenu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(150, 80));
        ControJ1 = new QPushButton(Multiplayer);
        ControJ1->setObjectName(QString::fromUtf8("ControJ1"));
        ControJ1->setGeometry(QRect(150, 627, 131, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/botonControles - copia.png"), QSize(), QIcon::Normal, QIcon::Off);
        ControJ1->setIcon(icon1);
        ControJ1->setIconSize(QSize(150, 80));
        ControlJ2 = new QPushButton(Multiplayer);
        ControlJ2->setObjectName(QString::fromUtf8("ControlJ2"));
        ControlJ2->setGeometry(QRect(560, 627, 131, 41));
        ControlJ2->setIcon(icon1);
        ControlJ2->setIconSize(QSize(150, 80));
        widget = new QWidget(Multiplayer);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(7, 630, 131, 26));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        vidasJ1 = new QLabel(widget);
        vidasJ1->setObjectName(QString::fromUtf8("vidasJ1"));
        vidasJ1->setFont(font);

        gridLayout->addWidget(vidasJ1, 0, 1, 1, 1);

        widget1 = new QWidget(Multiplayer);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(420, 630, 112, 26));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        vidasJ2 = new QLabel(widget1);
        vidasJ2->setObjectName(QString::fromUtf8("vidasJ2"));
        vidasJ2->setFont(font);

        gridLayout_2->addWidget(vidasJ2, 0, 1, 1, 1);


        retranslateUi(Multiplayer);

        QMetaObject::connectSlotsByName(Multiplayer);
    } // setupUi

    void retranslateUi(QDialog *Multiplayer)
    {
        Multiplayer->setWindowTitle(QCoreApplication::translate("Multiplayer", "Dialog", nullptr));
        pushButton->setText(QString());
        ControJ1->setText(QString());
        ControlJ2->setText(QString());
        label->setText(QCoreApplication::translate("Multiplayer", "Vidas J1:", nullptr));
        vidasJ1->setText(QCoreApplication::translate("Multiplayer", "4", nullptr));
        label_2->setText(QCoreApplication::translate("Multiplayer", "Vidas J2:", nullptr));
        vidasJ2->setText(QCoreApplication::translate("Multiplayer", "4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Multiplayer: public Ui_Multiplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLAYER_H
