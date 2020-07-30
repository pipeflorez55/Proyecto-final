#include "nivel.h"
#include "ui_nivel.h"
#include "QKeyEvent"
#include "enemy.h"
#include "funcioneslogin.h"
#include "QMessageBox"
#include "menu.h"

int cont=0;
int grav=1;
int flag=0, vo=0, angulo=0;
int bandera=0;
int gat=1;

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
    blanco=new enemy;
    blanco1=new enemy;
    blanco2=new enemy;
    blanco3=new enemy;
    scene->addItem(blanco);
    scene->addItem(blanco1);
    scene->addItem(blanco2);
    scene->addItem(blanco3);
    blanco->setPos(1000,1000);
    blanco1->setPos(1000,1000);
    blanco2->setPos(1000,1000);
    blanco3->setPos(1000,1000);
    estrella1= new Circular;
    estrella2= new Circular;
    estrella3= new Circular;
    pinchos1=new Pendulo;
    pinchos2=new Pendulo;



    ui->graphicsView->setScene(scene);//añade la escena al graphicsview
    //ui->centralwidget->adjustSize();//se ajusta al tamaño
    scene->addRect(scene->sceneRect());
    ui->graphicsView->resize(scene->width()+2,scene->height()+2);//el graphicsview se acomoda al tamaño de la escena
    this->resize(ui->graphicsView->width()+40,ui->graphicsView->height()+40);//aumenta el tamañño

    scene->addItem(tanque);

    tanque->setPos(2,530);

    connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));
    timer->start(60);

}

Nivel::~Nivel()
{
    delete timer;
    delete scene;
    delete ui;
}

void Nivel::keyPressEvent(QKeyEvent *event)//Teclas para variar la velocidad inicial y el valor del angulo
{
    //Cuerpo *b = bars.at(0)->getEsf();
    if(event->key()==Qt::Key_X){
         grav *=-1;


    }

    if(event->key()==Qt::Key_C)
    {
        if(score==4){
            score=0;
        }
        timer->start(40);
        if(flag==0){
            //flag=1;

            bars.push_back(new Bala);
            bars.back()->actualizar(v_limit);

        }

        if(cont>0){  // para esperar a que inicie el juego para poder disparar
        scene->addItem(bars.back());  // añadir bala a la escena
        Cuerpo *b = bars.at(cont)->getEsf(); // crear las fisicas de la bala
        if(angulo>=60){
        b->set_velini(vo,angulo,73,90); // añadir las variables de la fisica
        }
        else if(angulo>=40 && angulo<60){
        b->set_velini(vo,angulo,83,80); // añadir las variables de la fisica
        }
        else {b->set_velini(vo,angulo,93,60);}

        if(grav==-1){
            b->invertgra();

        }
        QString disparost= QString::number(numedis);
        ui->numdis->setText(disparost);
        }
        cont++;
        numedis++;
        if(cont==1){

            if(numnivel==1){//Creacion de los objetos en el nivel 1
                if(ena1==1){
                    //arregalar que aparezcan los objetos
                    blanco->setPos(950,600);//posicion de los objetivos
                    bandera=0;
                }
                if(ena2==1){
                    blanco1->setPos(940,180);
                    bandera=0;
                }
                if(ena3==1){
                    blanco2->setPos(280,90);
                    bandera=0;
                }
                if(ena4==1){
                    blanco3->setPos(680,600);
                    bandera=0;
                }
            }

            if(numnivel==2){//Creacion de los objetos en el nivel 2


                if(ena1==1){
                    //arregalar que aparezcan los objetos
                    blanco->setPos(950,600);//posicion de los objetivos
                    bandera=0;
                }
                if(ena2==1){
                    blanco1->setPos(940,180);
                    bandera=0;
                }
                if(ena3==1){
                    blanco2->setPos(280,90);
                    bandera=0;
                }
                if(ena4==1){
                      blanco3->setPos(680,600);
                      bandera=0;
                }
                //
                scene->addItem(estrella1);
                scene->addItem(estrella2);
                scene->addItem(estrella3);
                estrella1->setPos(783,270);
                estrella1->setPosC(783,270,100,3,0);
                estrella2->setPosC(783,270,100,3,120);
                estrella3->setPosC(783,270,100,3,240);   

            }

            if(numnivel==3){//Creacion de los objetos en el nivel 3
                if(ena1==1){
                    //arregalar que aparezcan los objetos
                    blanco->setPos(660,180);//posicion de los objetivos
                    bandera=0;
                }
                if(ena2==1){
                    blanco1->setPos(920,350);
                    bandera=0;
                }
                if(ena3==1){
                    blanco2->setPos(432,123);
                    bandera=0;
                }
                if(ena4==1){
                     blanco3->setPos(775,520);
                     bandera=0;
                }


                scene->addItem(pinchos1);
                scene->addItem(pinchos2);
                pinchos1->setDatos(45,100,18,392,117);
                pinchos2->setDatos(60,50,18,613,432);
                pinchos1->setPos(419,180);
                pinchos2->setPos(419,180);
            }

            if(numnivel==4){//Creacion de los objetos en el nivel 4

                scene->addItem(estrella1);
                scene->addItem(estrella2);
                scene->addItem(estrella3);
                estrella1->setPosC(350,290,100,3,0);
                estrella2->setPosC(350,290,100,3,120);
                estrella3->setPosC(350,290,100,3,240);
                if(ena1==1){
                    //arregalar que aparezcan los objetos
                    blanco->setPos(660,180);//posicion de los objetivos
                    bandera=0;
                }
                if(ena2==1){
                    blanco1->setPos(920,350);
                    bandera=0;
                }
                if(ena3==1){
                    blanco2->setPos(432,123);
                    bandera=0;
                }
                if(ena4==1){
                     blanco3->setPos(775,520);
                     bandera=0;
                }

                scene->addItem(pinchos1);
                scene->addItem(pinchos2);
                pinchos1->setDatos(45,100,18,780,370);
                pinchos2->setDatos(60,50,18,613,432);


            }
        }
    }

    if(flag==0){
        if(event->key()==Qt::Key_Q){
            if(vo!=0){
                vo-=5;
                QString vot= QString::number(vo);
                ui->vo->setText(vot);
            }

        }
        if(event->key()==Qt::Key_E){
            if(vo!=150){
                vo+=5;
                QString vot= QString::number(vo);
                ui->vo->setText(vot);
            }

        }
        if(event->key()==Qt::Key_S){
            if(angulo!=0){
                angulo-=5;
                tanque->cambiarimagen(angulo);
                tanque->cambiarplayer(1);
                QString angulot= QString::number(angulo);
                ui->angulo->setText(angulot);
            }

        }
        if(event->key()==Qt::Key_W){
            if(angulo!=80){
                angulo+=5;
                tanque->cambiarimagen(angulo);
                tanque->cambiarplayer(1);
                QString angulot= QString::number(angulo);
                ui->angulo->setText(angulot);
            }
        }
    }
}

void Nivel::cargardo(int aniv, int bdis, int bl1, int bl2, int bl3, int bl4, int sco)
{
    numnivel=aniv;
    numedis=bdis;
    ena1=bl1;
    ena2=bl2;
    ena3=bl3;
    ena4=bl4;
    score=sco;

}


void Nivel::actualizar()
{
    for (int i=0;i<bars.size();i++) {
    bars.at(i)->actualizar(v_limit);
    bordercollision(bars.at(i)->getEsf());

    if(bars.at(i)->increase){

        score++;
        QString scoret= QString::number(score);
        ui->objetivo->setText(scoret);

    }
    }
    if(numnivel==2&&cont>0){
        estrella1->actualizar();
        estrella2->actualizar();
        estrella3->actualizar();
    }
    if(numnivel==3&&cont>0){
        pinchos1->actualizar();
        pinchos2->actualizar();
    }
    if(numnivel==4&&cont>0){
        estrella1->actualizar();
        estrella2->actualizar();
        estrella3->actualizar();
        pinchos1->actualizar();
        pinchos2->actualizar();
    }
    if(bandera==0){
        comprobarblancos();

    }
    if(score==4){//Avance a los niveles desde el nivel 1
        cont=0;
        ena1=1;
        ena2=1;
        ena3=1;
        ena4=1;
        bandera=1;
        numnivel++;
        if(numnivel==2){

        }

        if(numnivel==3){
            scene->removeItem(estrella1);
            scene->removeItem(estrella2);
            scene->removeItem(estrella3);

        }
        if(numnivel==4){
            scene->removeItem(pinchos1);
            scene->removeItem(pinchos2);

        }

        for (int i=0;bars.size()>0;i++) {
        bars.at(0)->~Bala();
        bars.removeAt(0);
        }
        score=0;

    }

    if(numnivel==1){
        scene->setBackgroundBrush(QBrush(QImage(":/Escena.png")));
    }

    if(numnivel==2){
        scene->setBackgroundBrush(QBrush(QImage(":/Escena2.png")));
    }

    if(numnivel==3){
        scene->setBackgroundBrush(QBrush(QImage(":/Escena3.jpg")));
    }

    if(numnivel==4){
        scene->setBackgroundBrush(QBrush(QImage(":/Escena4.jpg")));
    }

}

void Nivel::guardar(std::string name)
{
    std::string rec=contrsmain+to_string(numnivel)+to_string(ena1)+to_string(ena2)+to_string(ena3)+to_string(ena4)+to_string(score)+to_string(numedis);
    string t="../Usuarios/";
    name=t+name+".txt";
    ofstream archivo2;
    archivo2.open(name);//Se crea el archivo con el nombre de ingreso
    archivo2<< rec;//Se le agrega al archivo la contrseña
    archivo2.close();
}

void Nivel::comprobarblancos()
{
    if(blanco->y()==-100){
        ena1=0;
    }
    if(blanco1->y()==-100){
        ena2=0;
    }
    if(blanco2->y()==-100){
        ena3=0;
    }
    if(blanco3->y()==-100){
        ena4=0;
    }
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
    if(b->get_PosY()>v_limit-b->get_Radio()){
        b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),v_limit-b->get_Radio());

    }


    if(numnivel==1){

        //muro 1
        if((b->get_PosX()> 401-b->get_Radio())&&(b->get_PosX()< 413-b->get_Radio())&&(b->get_PosY()<234-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),401-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosX()< 503-b->get_Radio())&&(b->get_PosX()> 492-b->get_Radio())&&(b->get_PosY()<234-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),503-b->get_Radio(),b->get_PosY());

        }
        if((b->get_PosY()<234-b->get_Radio())&&(b->get_PosX()> 401-b->get_Radio())&&(b->get_PosX()< 503-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),234-b->get_Radio());

        }

        //muro 2

        if((b->get_PosX()> 781-b->get_Radio())&&(b->get_PosX()< 801-b->get_Radio())&&(b->get_PosY()<152-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),781-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosX()< 812-b->get_Radio())&&(b->get_PosX()> 800-b->get_Radio())&&(b->get_PosY()<152-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),812-b->get_Radio(),b->get_PosY());

        }
        if((b->get_PosY()<152-b->get_Radio())&&(b->get_PosX()> 781-b->get_Radio())&&(b->get_PosX()< 812-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),152-b->get_Radio());

        }

        //muro 3
        if((b->get_PosX()> 755-b->get_Radio())&&(b->get_PosX()< 764-b->get_Radio())&&(b->get_PosY()< 425-b->get_Radio())&&(b->get_PosY()>317-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),755-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosY()<425-b->get_Radio())&&(b->get_PosX()> 755-b->get_Radio())&&(b->get_PosY()> 317-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),425-b->get_Radio());

        }
    }

    if(numnivel==2){
        //muro 1
        if((b->get_PosX()> 417-b->get_Radio())&&(b->get_PosX()< 427-b->get_Radio())&&(b->get_PosY()<216-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),417-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosX()< 521-b->get_Radio())&&(b->get_PosX()> 509-b->get_Radio())&&(b->get_PosY()<216-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),521-b->get_Radio(),b->get_PosY());

        }
        if((b->get_PosY()<216-b->get_Radio())&&(b->get_PosX()> 417-b->get_Radio())&&(b->get_PosX()< 521-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),214-b->get_Radio());

        }
        //muro 2

        if((b->get_PosX()> 422-b->get_Radio())&&(b->get_PosX()< 432-b->get_Radio())&&(b->get_PosY()>412-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),422-b->get_Radio(),b->get_PosY());
        }
        if((b->get_PosY()>412-b->get_Radio())&&(b->get_PosX()> 422-b->get_Radio())&&(b->get_PosX()< 511-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),412-b->get_Radio());
        }
    }

    if(numnivel==3){
        //muro 1
        if((b->get_PosX()> 430-b->get_Radio())&&(b->get_PosX()< 444-b->get_Radio())&&(b->get_PosY()<264-b->get_Radio())&&(b->get_PosY()>196-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),408-b->get_Radio(),b->get_PosY());
        }
        if((b->get_PosY()<275-b->get_Radio())&&(b->get_PosY()>260-b->get_Radio())&&(b->get_PosX()> 430-b->get_Radio())&&(b->get_PosX()< 791-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),275-b->get_Radio());

        }
        if((b->get_PosY()>196-b->get_Radio())&&(b->get_PosY()<210-b->get_Radio())&&(b->get_PosX()> 430-b->get_Radio())&&(b->get_PosX()< 791-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),196-b->get_Radio());
        }
    }

    if(numnivel==4){
        //muro 2
        if((b->get_PosX()> 430-b->get_Radio())&&(b->get_PosX()< 444-b->get_Radio())&&(b->get_PosY()<264-b->get_Radio())&&(b->get_PosY()>196-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),408-b->get_Radio(),b->get_PosY());
        }

    }



}


void Nivel::on_pushButton_clicked()
{
    guardar(usuario);
    QMessageBox::information(this, tr("Guardado"), tr("Se ha guardado su partida"));
}

void Nivel::on_controles_clicked()
{
    QMessageBox::information(this, tr("Controles"), tr("El boton B es para realizar un disparo.\nLos botones Q y E, son para variar la velocidad inicial.\nLos botones W y S, son para variar el angulo de disparo."));
}

void Nivel::on_menu_clicked()
{
    for (int i=0;bars.size()>0;i++) {
    bars.at(0)->~Bala();
    bars.removeAt(0);
    }
    this->hide();
    cont=0;
    delete timer;
    delete tanque;
    delete blanco;
    delete blanco1;
    delete blanco2;
    delete blanco3;
    delete estrella1;
    delete estrella2;
    delete estrella3;
    delete pinchos1;
    delete pinchos2;
    delete scene;
    delete ui;


    score=0;
    Menu menu;
    menu.setModal(true);
    menu.exec();


}
