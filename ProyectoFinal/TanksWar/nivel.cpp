#include "nivel.h"
#include "ui_nivel.h"

Nivel::Nivel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nivel)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);//crea escena
    scene->setSceneRect(0,0,1000,1000);//limites de la escena
    tanque= new MyRect;
    ui->graphicsView->setScene(scene);//añade la escena al graphicsview
    //ui->centralwidget->adjustSize();//se ajusta al tamaño
    scene->addRect(scene->sceneRect());
    ui->graphicsView->resize(scene->width(),scene->height());//el graphicsview se acomoda al tamaño de la escena
    this->resize(ui->graphicsView->width()+100,ui->graphicsView->height()+100);//aumenta el tamañño
    scene->addItem(tanque);
}

Nivel::~Nivel()
{
    delete ui;
}
