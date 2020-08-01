#include "ganadorj2.h"
#include "ui_ganadorj2.h"
#include "menu.h"
GanadorJ2::GanadorJ2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GanadorJ2)
{
    ui->setupUi(this);
}

GanadorJ2::~GanadorJ2()
{
    delete ui;
}

void GanadorJ2::on_pushButton_clicked()
{
    delete ui;
    this->hide();
    Menu menu;
    menu.setModal(true);
    menu.exec();
}
