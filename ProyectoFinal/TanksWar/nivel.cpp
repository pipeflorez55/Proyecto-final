#include "nivel.h"
#include "ui_nivel.h"
#include "QKeyEvent"

int flag=0, vo=0, angulo=0;
Nivel::Nivel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nivel)
{
    ui->setupUi(this);
    v_limit=625;
    h_limit=999;
    timer = new QTimer(this);
    scene = new QGraphicsScene(this);//crea escena
    scene->setSceneRect(0,0,h_limit,v_limit);//limites de la escena

    tanque= new MyRect;
    ui->graphicsView->setScene(scene);//añade la escena al graphicsview
    //ui->centralwidget->adjustSize();//se ajusta al tamaño
    scene->addRect(scene->sceneRect());
    ui->graphicsView->resize(scene->width(),scene->height());//el graphicsview se acomoda al tamaño de la escena
    this->resize(ui->graphicsView->width()+100,ui->graphicsView->height()+100);//aumenta el tamañño
    scene->addItem(tanque);
    tanque->setPos(2,575);

    connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));
    timer->start(20);
}

Nivel::~Nivel()
{
    delete timer;
    delete scene;
    delete ui;
}

void Nivel::keyPressEvent(QKeyEvent *event)//Teclas para variar la velocidad inicial y el valor del angulo
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
        if(event->key()==Qt::Key_Q){
            if(vo!=0){
                vo-=10;
                QString vot= QString::number(vo);
                ui->vo->setText(vot);
            }

        }
        if(event->key()==Qt::Key_E){
            if(vo!=100){
                vo+=10;
                QString vot= QString::number(vo);
                ui->vo->setText(vot);
            }

        }
        if(event->key()==Qt::Key_S){
            if(angulo!=0){
                angulo-=5;
                QString angulot= QString::number(angulo);
                ui->angulo->setText(angulot);
            }

        }
        if(event->key()==Qt::Key_W){
            if(angulo!=60){
                angulo+=5;
                QString angulot= QString::number(angulo);
                ui->angulo->setText(angulot);
            }
        }
    }
}

void Nivel::actualizar()//se va actualizando los valores del proyectil
{
    for (int i=0;i<bars.size();i++) {
    bars.at(i)->actualizar(v_limit);
    bordercollision(bars.at(i)->getEsf());}
}

void Nivel::bordercollision(Cuerpo *b)//En esta parte se definen los bordes de colision donde no podran pasar los proyectiles
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
    if(b->get_PosY()>v_limit-b->get_Radio()){
        b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),v_limit-b->get_Radio());

    }
}

int cont=0;
void Nivel::on_pushButton_clicked()//Con este boton se inicia el juego y cada vez que se modifique un valor se vera en la pantalla
{                                  //Tambien es el mismo boton para realizar un nuevo disparo
    timer->start(40);
    ui->pushButton->setText("DISPARO!!!");
    if(flag==0){
        //flag=1;

        bars.push_back(new Bala);
        bars.back()->actualizar(v_limit);

    }
    if(cont>0){
    scene->addItem(bars.back());
    Cuerpo *b = bars.at(cont)->getEsf();
    b->set_vel(vo,angulo,72,13);
    }
    cont++;
}
