#include "multiplayer.h"
#include "ui_multiplayer.h"
#include "QKeyEvent"
#include "menu.h"


int contmulti=0;
int gravmulti=1;
int flagmulti=0, vomulti=0, angulomulti=0;
int banderamulti=0;
int gatmulti=1;

int contmulti2=0;
int gravmulti2=1;
int flagmulti2=0, vomulti2=0, angulomulti2=0;
int banderamulti2=0;
int gatmulti2=1;

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
    jugador1= new MyRect;
    jugador2= new MyRect;
    ui->graphicsView->setScene(scene);//añade la escena al graphicsview
    scene->addRect(scene->sceneRect());
    ui->graphicsView->resize(scene->width()+2,scene->height()+2);//el graphicsview se acomoda al tamaño de la escena
    this->resize(ui->graphicsView->width()+40,ui->graphicsView->height()+40);//aumenta el tamañño
    jugador2->cambiarplayer(2);
    scene->addItem(jugador1);
    scene->addItem(jugador2);

    jugador1->setPos(2,540);
    jugador2->setPos(900,540);

    connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));
    timer->start(60);
}

Multiplayer::~Multiplayer()
{
    delete ui;
}


void Multiplayer::bordercollision(Cuerpo *b)
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

void Multiplayer::actualizar()
{
    for (int i=0;i<barsmulti.size();i++){
    barsmulti.at(i)->actualizar(v_limit);
    bordercollision(barsmulti.at(i)->getEsf());
    }

    for (int i=0;i<barsmulti2.size();i++){
    barsmulti2.at(i)->actualizar(v_limit);
    bordercollision(barsmulti2.at(i)->getEsf());
    }
}


void Multiplayer::keyPressEvent(QKeyEvent *event)//Teclas para variar la velocidad inicial y el valor del angulo
{
    //Cuerpo *b = bars.at(0)->getEsf();

    if(event->key()==Qt::Key_X){
         gravmulti *=-1;


    }

    if(event->key()==Qt::Key_B)
    {

        timer->start(40);
        if(flagmulti==0){
            //flag=1;

            barsmulti.push_back(new Bala);
            barsmulti.back()->actualizar(v_limit);

        }

        if(contmulti>0){  // para esperar a que inicie el juego para poder disparar
        scene->addItem(barsmulti.back());  // añadir bala a la escena
        Cuerpo *b = barsmulti.at(contmulti)->getEsf(); // crear las fisicas de la bala
        b->set_velini(vomulti,angulomulti,93,50); // añadir las variables de la fisica
        if(gravmulti==-1){
            b->invertgra();

        }

        }
        contmulti++;

    }

    if(flagmulti==0){
        if(event->key()==Qt::Key_Q){
            if(vomulti!=0){
                vomulti-=5;
                //QString vot= QString::number(vomulti);
                //ui->vo->setText(vot);
            }

        }
        if(event->key()==Qt::Key_E){
            if(vomulti!=150){
                vomulti+=5;
                //QString vot= QString::number(vomulti);
                //ui->vo->setText(vot);
            }

        }
        if(event->key()==Qt::Key_S){
            if(angulomulti!=0){
                angulomulti-=5;
                jugador1->cambiarimagen(angulomulti);
                jugador1->cambiarplayer(1);
                //QString angulot= QString::number(angulo);
                //ui->angulo->setText(angulot);
            }

        }
        if(event->key()==Qt::Key_W){
            if(angulomulti!=80){
                angulomulti+=5;
                jugador1->cambiarimagen(angulomulti);
                jugador1->cambiarplayer(1);
                //QString angulot= QString::number(angulo);
                //ui->angulo->setText(angulot);
            }
        }
    }


    //JUGADOR2
    if(event->key()==Qt::Key_M){
         gravmulti2 *=-1;


    }

    if(event->key()==Qt::Key_N)
    {

        timer->start(40);
        if(flagmulti2==0){
            //flag=1;

            barsmulti2.push_back(new Bala);
            barsmulti2.back()->actualizar(v_limit);

        }

        if(contmulti2>0){  // para esperar a que inicie el juego para poder disparar
        scene->addItem(barsmulti2.back());  // añadir bala a la escena
        barsmulti2.back()->set_player(2);
        Cuerpo *c = barsmulti2.at(contmulti2)->getEsf(); // crear las fisicas de la bala
        c->set_velini(vomulti2,angulomulti2,850,50); // añadir las variables de la fisica
        if(gravmulti2==-1){
            c->invertgra();

        }

        }
        contmulti2++;

    }

    if(flagmulti2==0){
        if(event->key()==Qt::Key_U){
            if(vomulti2!=0){
                vomulti2+=5;
                //QString vot= QString::number(vomulti);
                //ui->vo->setText(vot);
            }

        }
        if(event->key()==Qt::Key_O){
            if(vomulti2!=-150){
                vomulti2-=5;
                //QString vot= QString::number(vomulti);
                //ui->vo->setText(vot);
            }

        }
        if(event->key()==Qt::Key_K){
            if(angulomulti2!=0){
                angulomulti2+=5;
                jugador2->cambiarimagen(angulomulti2);
                jugador2->cambiarplayer(2);
                //QString angulot= QString::number(angulo);
                //ui->angulo->setText(angulot);
            }

        }
        if(event->key()==Qt::Key_I){
            if(angulomulti2!=-80){
                angulomulti2-=5;
                jugador2->cambiarimagen(angulomulti2);
                jugador2->cambiarplayer(2);
                //QString angulot= QString::number(angulo);
                //ui->angulo->setText(angulot);
            }
        }
    }
}

/*void Multiplayer::on_pushButton_clicked()
{
    Menu menu;
    menu.setModal(true);
    menu.exec();
}*/
