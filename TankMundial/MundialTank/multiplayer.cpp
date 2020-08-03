#include "multiplayer.h"
#include "ui_multiplayer.h"
#include "QKeyEvent"
#include "menu.h"
#include "ganadorj1.h"
#include "ganadorj2.h"
#include "QMessageBox"
#include "QMediaPlayer"

//variables externas
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
    jugador1= new MyRect;//se crean los jugadores
    jugador2= new MyRect;
    muro= new Movible;//se crean los muros
    muro1= new Movible;
    muro->Push_X(160);//se les da las posiciones a los muros
    muro->Push_Y(200);
    muro1->Push_X(780);
    muro1->Push_Y(500);
    ui->graphicsView->setScene(scene);//añade la escena al graphicsview
    scene->addRect(scene->sceneRect());
    ui->graphicsView->resize(scene->width()+2,scene->height()+2);//el graphicsview se acomoda al tamaño de la escena
    this->resize(ui->graphicsView->width()+40,ui->graphicsView->height()+40);//aumenta el tamañño
    jugador2->cambiarplayer(2);
    scene->addItem(jugador1);//se agrega los jugadores a la escena
    scene->addItem(jugador2);

    scene->addItem(muro);//se agrega los muros a la escena
    scene->addItem(muro1);
    jugador1->inipos(5,500);//se les da las posiciones a los jugadores
    jugador2->inipos(898,10);

    scene->setBackgroundBrush(QBrush(QImage(":/EscenaMulti.png")));//se pinta la escena con la imagen que se desee

    sondi = new QMediaPlayer();//creacion del sonido de disparo
    sondi1 = new QMediaPlayer();

    int radio,xr,yr,wr,angulor;
    int num=3+rand()%(7-3);//se da un numero aleatorio para el enemigo Circular
    for(int i=0;i<num;i++){

        xr=300+rand()%(600-300);//las posiciones son aleatorias, pero estan restringidas en estos valores
        yr=100+rand()%(500-100);
        wr=2+rand()%(10-2);//los datos son aleatorios, restringidos en un rango
        radio=80+rand()%(160-80);
        angulor=0+rand()%(360-0);
        estrellas.push_back(new Circular);//se crean los enemigos
        estrellas.at(i)->setPosC(xr,yr,radio,wr,angulor);//se les pasa los datos que se obtuvieron con random
        scene->addItem(estrellas.at(i));//se agrega a la escena
    }

    int xp,yp,angmaxp,Lp,GP;
    int numpe=2+rand()%(4-2);//se da un numero aleatorio para el enemigo Pendulo
    for(int i=0;i<numpe;i++){
        xp=300+rand()%(600-300);//las posiciones son aleatorias, pero estan restringidas en estos valores
        yp=100+rand()%(500-100);
        angmaxp=45+rand()%(120-45);//los datos son aleatorios, restringidos en un rango
        Lp=50+rand()%(120-50);
        GP=10+rand()%(20-10);
        pendulos.push_back(new Pendulo);//se crean los enemigos
        pendulos.at(i)->setDatos(angmaxp,Lp,GP,xp,yp);//se les pasa los datos que se obtuvieron con random
        scene->addItem(pendulos.at(i));//se agrega a la escena
    }
    connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));//se conecta el timer con la funcion actualizar
    timer->start(60);//se inicializa el timer
}

Multiplayer::~Multiplayer()
{
    delete ui;
}


void Multiplayer::bordercollision(Cuerpo *b)
{
    //muros de la escena
    if(b->get_PosX()< b->get_Radio()){//si se cumple esta condicion
        b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),b->get_Radio(),b->get_PosY());//se entra y se dara unos nuevos valores de posicion y velocidad cambiando los valores de la bala

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

    //unico muro
    if((b->get_PosX()> 462-b->get_Radio())&&(b->get_PosX()< 482-b->get_Radio())&&(b->get_PosY()>525-b->get_Radio())){//si se cumple esta condicion
        b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),462-b->get_Radio(),b->get_PosY());//se entra y se dara unos nuevos valores de posicion y velocidad cambiando los valores de la bala
    }

    if((b->get_PosX()< 574-b->get_Radio())&&(b->get_PosX()> 554-b->get_Radio())&&(b->get_PosY()>525-b->get_Radio())){
        b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),574-b->get_Radio(),b->get_PosY());
    }

    if((b->get_PosY()>527-b->get_Radio())&&(b->get_PosX()> 462-b->get_Radio())&&(b->get_PosX()< 570-b->get_Radio())){
        b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),527-b->get_Radio());
    }
}

void Multiplayer::actualizar()
{
    jugador1->actualizar();//se actualiza los valores de los jugadores
    jugador2->actualizar();
    muro->actualizarmo();//se actualiza los valores de los muros
    muro1->actualizarmo();
    for (int i=0;i<estrellas.size();i++){
    estrellas.at(i)->actualizar();//se actualiza los valores de las objetos Circular
    }
    for (int i=0;i<pendulos.size();i++){
    pendulos.at(i)->actualizar();//se actualiza los valores de las objetos Pendular
    }
    for (int i=0;i<barsmulti.size();i++){//para la lista de las balas del jugador 1
    barsmulti.at(i)->actualizar(v_limit);//se va actualizando su datos
    bordercollision(barsmulti.at(i)->getEsf());//si ha chocado contra un muro
    jugador2->colib(barsmulti.at(i)->coliJ());//si ha sido alcanzado por una bala, disminuir la vida
    }

    for (int i=0;i<barsmulti2.size();i++){//para la lista de las balas del jugador 2
    barsmulti2.at(i)->actualizar(v_limit);
    bordercollision(barsmulti2.at(i)->getEsf());
    jugador1->colib(barsmulti2.at(i)->coliJ());
    }
    ui->vidasJ1->setText(  QString::number(jugador1->pushvidas()));//se muestra las vidas de los jugadores en pantalla
    ui->vidasJ2->setText(  QString::number(jugador2->pushvidas()));
    cnt2++;
    if(cnt2==30){
        flag3=1;
        flag4=1;
        cnt2=0;
    }
    if(jugador1->pushvidas()<=0){//si el jugador 1 llega a 0 en vidas

        for (int i=0;barsmulti.size()>0;i++) {//se elimina las balas del jugador 1
        barsmulti.at(0)->~Bala();
        barsmulti.removeAt(0);
        }

        for (int i=0;barsmulti2.size()>0;i++) {//se elimina las balas del jugador 2
        barsmulti2.at(0)->~Bala();
        barsmulti2.removeAt(0);
        }
        this->hide();
        contmulti=0;//se inicializa para que no de problemas con la listas de las balas
        contmulti2=0;
        delete timer;//se elimina objetos de la ui
        delete jugador1;
        delete jugador2;
        delete scene;
        delete ui;
        GanadorJ2 ganador2;//se cierra ui se abre ui de ganador2
        ganador2.setModal(true);
        ganador2.exec();

    }
    if(jugador2->pushvidas()<=0){//si el jugador 2 llega a 0 en vidas

        for (int i=0;barsmulti.size()>0;i++) {//se eliminan los objetos de las listas de ambos jugadores
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
        GanadorJ1 ganador1;//se cierra ui se abre ui de ganador1
        ganador1.setModal(true);
        ganador1.exec();

    }
}


void Multiplayer::keyPressEvent(QKeyEvent *event)//Teclas para variar la velocidad inicial y el valor del angulo
{
    //JUGADOR 2

    if(event->key()==Qt::Key_X){//tecla para cambiar la gravedad
         gravmulti *=-1;


    }
    if(flag3==1){
    if(event->key()==Qt::Key_C)//tecla para realizar un disparo
    {
        sondi = new QMediaPlayer();
        sondi->setMedia(QUrl("qrc:/TANK9 (mp3cut.net).mp3"));
        sondi->setVolume(40);
        sondi->play();
        flag3=-1;
        timer->start(40);
        if(flagmulti==0){
            //flag=1;

            barsmulti.push_back(new Bala);//se añade un objeto a la lista del tipo Bala
            barsmulti.back()->actualizar(v_limit);//manda los datos para que se actualice la bala

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
        if(event->key()==Qt::Key_Q){//tecla para disminuir la velocidad inicial
            if(vomulti!=0){
                vomulti-=5;
            }

        }
        if(event->key()==Qt::Key_E){//tecla para aumentar la velocidad inicial
            if(vomulti!=150){
                vomulti+=5;
            }

        }
        if(event->key()==Qt::Key_S){//tecla para disminuir el angulo inicial
            if(angulomulti!=0){
                angulomulti-=5;
                jugador1->cambiarimagen(angulomulti);//se va cambiando la imagen del tanque
                jugador1->cambiarplayer(1);//se especifica que imagenes utilizar
            }

        }
        if(event->key()==Qt::Key_W){//tecla para aumentar el angulo inicial
            if(angulomulti!=80){
                angulomulti+=5;
                jugador1->cambiarimagen(angulomulti);
                jugador1->cambiarplayer(1);
            }
        }
    }


    //JUGADOR2

    if(event->key()==Qt::Key_M){//tecla para cambiar la gravedad
         gravmulti2 *=-1;


    }
    if(flag4==1){
    if(event->key()==Qt::Key_N)//tecla para realizar un disparo
    {
        sondi1 = new QMediaPlayer();
        sondi1->setMedia(QUrl("qrc:/TANK9 (mp3cut.net).mp3"));
        sondi1->setVolume(40);
        sondi1->play();
           flag4=-1;
        timer->start(40);
        if(flagmulti2==0){
            //flag=1;

            barsmulti2.push_back(new Bala);//se añade un objeto a la lista del tipo Bala
            barsmulti2.back()->actualizar(v_limit);//manda los datos para que se actualice la bala

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
        if(event->key()==Qt::Key_U){//tecla para disminuir la velocidad inicial
            if(vomulti2!=0){
                vomulti2+=5;
            }

        }
        if(event->key()==Qt::Key_O){//tecla para aumentar la velocidad inicial
            if(vomulti2!=-150){
                vomulti2-=5;
            }

        }
        if(event->key()==Qt::Key_K){//tecla para disminuir el angulo inicial
            if(angulomulti2!=0){
                angulomulti2+=5;
                jugador2->cambiarimagen(angulomulti2);//se va cambiando la imagen del tanque
                jugador2->cambiarplayer(2);//se especifica que imagenes utilizar

            }

        }
        if(event->key()==Qt::Key_I){//tecla para aumentar el angulo inicial
            if(angulomulti2!=-80){
                angulomulti2-=5;
                jugador2->cambiarimagen(angulomulti2);
                jugador2->cambiarplayer(2);
            }
        }
    }
}

void Multiplayer::on_pushButton_clicked()
{
    for (int i=0;barsmulti.size()>0;i++) {//se elimina las balas del jugador 1
    barsmulti.at(0)->~Bala();
    barsmulti.removeAt(0);
    }

    for (int i=0;barsmulti2.size()>0;i++) {//se elimina las balas del jugador 2
    barsmulti2.at(0)->~Bala();
    barsmulti2.removeAt(0);
    }
    this->hide();
    contmulti=0;//se inicializa para que no de problemas con la listas de las balas
    contmulti2=0;
    delete timer;//se eliminan los objetos de la ui
    delete jugador1;
    delete jugador2;
    delete scene;
    delete ui;


    Menu menu;//se cierra ui se abre ui de menu
    menu.setModal(true);
    menu.exec();
}

void Multiplayer::on_ControJ1_clicked()//despliega la ventana de los controles J1
{
    QMessageBox::information(this, tr("Controles"), tr("-El boton C es para realizar un disparo.\n-Presione el boton X para cambiar la gravedad. Si quiere regresarla a al normalidad presione el boton otra vez.\n-Los botones Q y E, son para variar la velocidad inicial.\n-Los botones W y S, son para variar el angulo de disparo."));
}

void Multiplayer::on_ControlJ2_clicked()//despliega la ventana de los controles J2
{
    QMessageBox::information(this, tr("Controles"), tr("-El boton N es para realizar un disparo.\n-Presione el boton M para cambiar la gravedad. Si quiere regresarla a al normalidad presione el boton otra vez.\n-Los botones O y U, son para variar la velocidad inicial.\n-Los botones I y K, son para variar el angulo de disparo."));
}
