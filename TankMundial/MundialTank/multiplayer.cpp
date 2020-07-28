#include "multiplayer.h"
#include "ui_multiplayer.h"
#include "QKeyEvent"
Multiplayer::Multiplayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Multiplayer)
{
    ui->setupUi(this);
    v_limit=625;
    h_limit=999;
    timer = new QTimer(this);
    scene = new QGraphicsScene(this);//crea escena
    scene->setSceneRect(0,0,h_limit,v_limit);//limites de la escena
    tanque= new MyRect;
    tanque1= new MyRect;
    ui->graphicsView->setScene(scene);//añade la escena al graphicsview
    //ui->centralwidget->adjustSize();//se ajusta al tamaño
    scene->addRect(scene->sceneRect());
    ui->graphicsView->resize(scene->width()+2,scene->height()+2);//el graphicsview se acomoda al tamaño de la escena
    this->resize(ui->graphicsView->width()+40,ui->graphicsView->height()+40);//aumenta el tamañño

    scene->addItem(tanque);
    scene->addItem(tanque1);

    tanque->setPos(2,575);
    tanque1->setPos(900,575);

    connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));
    timer->start(60);
}

Multiplayer::~Multiplayer()
{
    delete ui;
}
