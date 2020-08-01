#include "pantallaf.h"
#include "ui_pantallaf.h"

PantallaF::PantallaF(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PantallaF)
{
    ui->setupUi(this);
}

PantallaF::~PantallaF()
{
    delete ui;
}
