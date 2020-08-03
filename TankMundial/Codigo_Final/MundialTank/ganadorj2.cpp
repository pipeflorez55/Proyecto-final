#include "ganadorj2.h"
#include "ui_ganadorj2.h"
#include "menu.h"
GanadorJ2::GanadorJ2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GanadorJ2)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/ganadorj2.png"));//se pinta el label con la imagen que se desee
}

GanadorJ2::~GanadorJ2()
{
    delete ui;
}

void GanadorJ2::on_pushButton_clicked()//se cierra ui se abre ui de menu
{
    delete ui;
    this->hide();
    Menu menu;
    menu.setModal(true);
    menu.exec();
}
