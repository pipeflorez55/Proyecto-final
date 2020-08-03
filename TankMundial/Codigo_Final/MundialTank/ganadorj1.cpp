#include "ganadorj1.h"
#include "ui_ganadorj1.h"
#include "menu.h"
GanadorJ1::GanadorJ1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GanadorJ1)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/GanadorJ1.png"));//se pinta el label con la imagen que se desee
}

GanadorJ1::~GanadorJ1()
{
    delete ui;
}

void GanadorJ1::on_menu_clicked()//se cierra ui se abre ui de menu
{
    delete ui;
    this->hide();
    Menu menu;
    menu.setModal(true);
    menu.exec();
}
