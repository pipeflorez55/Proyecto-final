#include "multiplayer.h"
#include "ui_multiplayer.h"
#include "QKeyEvent"
#include "menu.h"
#include "ganadorj1.h"
#include "ganadorj2.h"
#include "QMessageBox"

int flag3=1,flag4=1;
long cnt2=0;
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

    jugador1->inipos(5,500);
    jugador2->inipos(898,10);

    scene->setBackgroundBrush(QBrush(QImage(":/EscenaMulti.png")));
    int radio,xr,yr,wr,angulor;
    int num=3+rand()%(7-3);
    for(int i=0;i<num;i++){
        xr=300+rand()%(600-300);
        yr=200+rand()%(400-200);
        wr=2+rand()%(10-2);
        radio=80+rand()%(160-80);
        angulor=0+rand()%(360-0);
        estrellas.push_back(new Circular);
        estrellas.at(i)->setPosC(xr,yr,radio,wr,angulor);
        scene->addItem(estrellas.at(i));
    }
    int xp,yp,angmaxp,Lp,GP;
    int numpe=2+rand()%(4-2);
    for(int i=0;i<numpe;i++){
        xp=300+rand()%(600-300);
        yp=200+rand()%(400-200);
        angmaxp=45+rand()%(120-45);
        Lp=50+rand()%(120-50);
        GP=10+rand()%(20-10);
        pendulos.push_back(new Pendulo);
        pendulos.at(i)->setDatos(angmaxp,Lp,GP,xp,yp);
        scene->addItem(pendulos.at(i));
    }
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
    jugador1->actualizar();
    jugador2->actualizar();
    for (int i=0;i<estrellas.size();i++){
    estrellas.at(i)->actualizar();
    }
    for (int i=0;i<pendulos.size();i++){
    pendulos.at(i)->actualizar();
    }
    for (int i=0;i<barsmulti.size();i++){
    barsmulti.at(i)->actualizar(v_limit);
    bordercollision(barsmulti.at(i)->getEsf());
    jugador2->colib(barsmulti.at(i)->coliJ());
    }

    for (int i=0;i<barsmulti2.size();i++){
    barsmulti2.at(i)->actualizar(v_limit);
    bordercollision(barsmulti2.at(i)->getEsf());
    jugador1->colib(barsmulti2.at(i)->coliJ());
    }
    ui->vidasJ1->setText(  QString::number(jugador1->pushvidas()));
    ui->vidasJ2->setText(  QString::number(jugador2->pushvidas()));
    cnt2++;
    if(cnt2==30){
        flag3=1;
        flag4=1;
        cnt2=0;
    }
    if(jugador1->pushvidas()<=0){

        for (int i=0;barsmulti.size()>0;i++) {
        barsmulti.at(0)->~Bala();
        barsmulti.removeAt(0);
        }

        for (int i=0;barsmulti2.size()>0;i++) {
        barsmulti2.at(0)->~Bala();
        barsmulti2.removeAt(0);
        }
        this->hide();
        contmulti=0;
        contmulti2=0;
        delete timer;
        delete jugador1;
        delete jugador2;
        delete scene;
        delete ui;
        GanadorJ1 ganador1;
        ganador1.setModal(true);
        ganador1.exec();

    }
    if(jugador2->pushvidas()<=0){

        for (int i=0;barsmulti.size()>0;i++) {
        barsmulti.at(0)->~Bala();
        barsmulti.removeAt(0);
        }

        for (int i=0;barsmulti2.size()>0;i++) {
        barsmulti2.at(0)->~Bala();
        barsmulti2.removeAt(0);
        }
        this->hide();
        contmulti=0;
        contmulti2=0;
        delete timer;
        delete jugador1;
        delete jugador2;
        delete scene;
        delete ui;
        GanadorJ2 ganador2;
        ganador2.setModal(true);
        ganador2.exec();

    }
}


void Multiplayer::keyPressEvent(QKeyEvent *event)//Teclas para variar la velocidad inicial y el valor del angulo
{
    //Cuerpo *b = bars.at(0)->getEsf();

    if(event->key()==Qt::Key_X){
         gravmulti *=-1;


    }
    if(flag3==1){
    if(event->key()==Qt::Key_C)
    {
        flag3=-1;
        timer->start(40);
        if(flagmulti==0){
            //flag=1;

            barsmulti.push_back(new Bala);
            barsmulti.back()->actualizar(v_limit);

        }

        if(contmulti>0){  // para esperar a que inicie el juego para poder disparar
        scene->addItem(barsmulti.back());  // añadir bala a la escena
        Cuerpo *b = barsmulti.at(contmulti)->getEsf(); // crear las fisicas de la bala
        b->set_velini(vomulti,angulomulti,jugador1->pushx()+120,jugador2->pushy()); // añadir las variables de la fisica
        if(gravmulti==-1){
            b->invertgra();

        }

        }
        contmulti++;

    }
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
    if(flag4==1){
    if(event->key()==Qt::Key_N)
    {
           flag4=-1;
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

        c->set_velini(vomulti2,angulomulti2,jugador2->pushx()-20,v_limit-jugador2->pushy()); // añadir las variables de la fisica
        if(gravmulti2==-1){
            c->invertgra();

        }

        }
        contmulti2++;

    }
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

void Multiplayer::on_pushButton_clicked()
{
    for (int i=0;barsmulti.size()>0;i++) {
    barsmulti.at(0)->~Bala();
    barsmulti.removeAt(0);
    }

    for (int i=0;barsmulti2.size()>0;i++) {
    barsmulti2.at(0)->~Bala();
    barsmulti2.removeAt(0);
    }
    this->hide();
    contmulti=0;
    contmulti2=0;
    delete timer;
    delete jugador1;
    delete jugador2;
    delete scene;
    delete ui;


    Menu menu;
    menu.setModal(true);
    menu.exec();
}

void Multiplayer::on_ControJ1_clicked()
{
    QMessageBox::information(this, tr("Controles"), tr("-El boton C es para realizar un disparo.\n-Presione el boton X para cambiar la gravedad. Si quiere regresarla a al normalidad presione el boton otra vez.\n-Los botones Q y E, son para variar la velocidad inicial.\n-Los botones W y S, son para variar el angulo de disparo."));
}

void Multiplayer::on_ControlJ2_clicked()
{
    QMessageBox::information(this, tr("Controles"), tr("-El boton N es para realizar un disparo.\n-Presione el boton M para cambiar la gravedad. Si quiere regresarla a al normalidad presione el boton otra vez.\n-Los botones O y U, son para variar la velocidad inicial.\n-Los botones I y K, son para variar el angulo de disparo."));
}
