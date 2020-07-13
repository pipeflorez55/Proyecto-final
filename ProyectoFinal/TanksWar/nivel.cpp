#include "nivel.h"
#include "ui_nivel.h"
<<<<<<< HEAD
#include "QKeyEvent"

int flag=0;
=======

>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
Nivel::Nivel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nivel)
{
    ui->setupUi(this);
<<<<<<< HEAD
    v_limit=625;
    h_limit=999;
    timer = new QTimer(this);
    scene = new QGraphicsScene(this);//crea escena
    scene->setSceneRect(0,0,h_limit,v_limit);//limites de la escena

=======
    scene = new QGraphicsScene(this);//crea escena
    scene->setSceneRect(0,0,1000,1000);//limites de la escena
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
    tanque= new MyRect;
    ui->graphicsView->setScene(scene);//añade la escena al graphicsview
    //ui->centralwidget->adjustSize();//se ajusta al tamaño
    scene->addRect(scene->sceneRect());
    ui->graphicsView->resize(scene->width(),scene->height());//el graphicsview se acomoda al tamaño de la escena
    this->resize(ui->graphicsView->width()+100,ui->graphicsView->height()+100);//aumenta el tamañño
    scene->addItem(tanque);
<<<<<<< HEAD
    tanque->setPos(2,575);

    connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));
    timer->start(20);
=======
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
}

Nivel::~Nivel()
{
<<<<<<< HEAD
    delete timer;
    delete scene;
    delete ui;
}

void Nivel::keyPressEvent(QKeyEvent *event)
{
    Cuerpo *b = bars.at(0)->getEsf();

    /*if(event->key()==Qt::Key_Space)
    {
        timer->start(6);
        bars.push_back(new Bala);
        bars.back()->actualizar(v_limit);
        scene->addItem(bars.back());
        flag=1;
    }*/
    if(flag==0){
        if(event->key()==Qt::Key_D){
            b->set_vel(65,b->get_VelY(),b->get_PosX(),b->get_PosY());

        }
        if(event->key()==Qt::Key_A){
            b->set_vel(-65,b->get_VelY(),b->get_PosX(),b->get_PosY());

        }
        if(event->key()==Qt::Key_W){
            b->set_vel(b->get_VelX(),80,b->get_PosX(),b->get_PosY());

        }
    }
}

void Nivel::actualizar()
{
    for (int i=0;i<bars.size();i++) {
    bars.at(i)->actualizar(v_limit);
    bordercollision(bars.at(i)->getEsf());}
}

void Nivel::bordercollision(Cuerpo *b)
{
    if(b->get_PosX()< b->get_Radio()){
        b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),b->get_Radio(),b->get_PosY());

    }
    if(b->get_PosX()> h_limit-b->get_Radio()){
        b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),h_limit-b->get_Radio(),b->get_PosY());

    }
    if(b->get_PosY()< b->get_Radio()){
        b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),b->get_Radio());

    }
    if(b->get_PosX()>v_limit-b->get_Radio()){
        b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),v_limit-b->get_Radio());

    }
}

void Nivel::on_pushButton_clicked()
{
    timer->start(6);
    if(flag==0){
        flag=1;

        bars.push_back(new Bala);
        bars.back()->actualizar(v_limit);
        scene->addItem(bars.back());
    }
    Cuerpo *b = bars.at(0)->getEsf();
    b->set_vel(40,80,72,13);

}
=======
    delete ui;
}
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
