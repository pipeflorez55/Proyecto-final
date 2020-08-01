#include "ganadorj1.h"
#include "ui_ganadorj1.h"
#include "menu.h"
GanadorJ1::GanadorJ1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GanadorJ1)
{
    ui->setupUi(this);
}

GanadorJ1::~GanadorJ1()
{
    delete ui;
}

void GanadorJ1::on_menu_clicked()
{
    delete ui;
    this->hide();
    Menu menu;
    menu.setModal(true);
    menu.exec();
}
