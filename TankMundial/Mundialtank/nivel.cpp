#include "nivel.h"
#include "ui_nivel.h"
#include "QKeyEvent"
#include "enemy.h"


int cont=0;

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
    ui->graphicsView->resize(scene->width()+2,scene->height()+2);//el graphicsview se acomoda al tamaño de la escena
    this->resize(ui->graphicsView->width()+200,ui->graphicsView->height()+200);//aumenta el tamañño

    scene->addItem(tanque);

    tanque->setPos(2,575);

    if(ena1==1){
        blanco= new enemy;//arregalar que aparezcan los objetos
        scene->addItem(blanco);
        blanco->setPos(950,600);//posicion de los objetivos
    }
    if(ena2==1){
        blanco1= new enemy;
        scene->addItem(blanco1);
        blanco1->setPos(940,180);
    }
    if(ena3==1){
        blanco2= new enemy;
        scene->addItem(blanco2);
        blanco2->setPos(280,90);
    }
    if(ena4==1){
         blanco3= new enemy;
         scene->addItem(blanco3);
          blanco3->setPos(680,600);
    }




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

    if(event->key()==Qt::Key_Space)
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
        b->set_vel(vo,angulo,93,50); // añadir las variables de la fisica
        QString disparost= QString::number(numedis);
        ui->numdis->setText(disparost);
        }
        cont++;
        numedis++;
        if(cont==1){
            if(numnivel==2){
                estrella1= new Circular;
                estrella2= new Circular;
                estrella3= new Circular;
<<<<<<< HEAD

                if(ena1==1){
                    blanco= new enemy;//arregalar que aparezcan los objetos
                    scene->addItem(blanco);
                    blanco->setPos(950,600);//posicion de los objetivos
                }
                if(ena2==1){
                    blanco1= new enemy;
                    scene->addItem(blanco1);
                    blanco1->setPos(940,180);
                }
                if(ena3==1){
                    blanco2= new enemy;
                    scene->addItem(blanco2);
                    blanco2->setPos(280,90);
                }
                if(ena4==1){
                     blanco3= new enemy;
                     scene->addItem(blanco3);
                      blanco3->setPos(680,600);
                }
                ///
                scene->addItem(estrella1);
                scene->addItem(estrella2);
                scene->addItem(estrella3);
                estrella1->setPos(783,270);
                estrella1->setPosC(783,270,100,3,0);
                estrella2->setPosC(783,270,100,3,120);
                estrella3->setPosC(783,270,100,3,240);   

            }

            if(numnivel==3){

                if(ena1==1){
                    blanco= new enemy;//arregalar que aparezcan los objetos
                    scene->addItem(blanco);
                    blanco->setPos(950,600);//posicion de los objetivos
                }
                if(ena2==1){
                    blanco1= new enemy;
                    scene->addItem(blanco1);
                    blanco1->setPos(940,180);
                }
                if(ena3==1){
                    blanco2= new enemy;
                    scene->addItem(blanco2);
                    blanco2->setPos(280,90);
                }
                if(ena4==1){
                     blanco3= new enemy;
                     scene->addItem(blanco3);
                      blanco3->setPos(680,600);
                }


                pinchos1=new Pendulo;
                pinchos2=new Pendulo;


                scene->addItem(pinchos1);
                scene->addItem(pinchos2);

                pinchos1->setDatos(45,100,18,392,117);
                pinchos2->setDatos(60,50,18,613,432);

                pinchos1->setPos(419,180);
                pinchos2->setPos(419,180);
=======
                blanco= new enemy;//arregalar que aparezcan los objetos
                blanco1= new enemy;
                blanco2= new enemy;
                blanco3= new enemy;

                scene->addItem(estrella1);
                scene->addItem(estrella2);
                scene->addItem(estrella3);
                scene->addItem(blanco);
                scene->addItem(blanco1);
                scene->addItem(blanco2);
                scene->addItem(blanco3);

                estrella1->setPos(783,270);
                estrella1->setPosC(783,270,100,3,0);


                estrella2->setPosC(783,270,100,3,120);


                estrella3->setPosC(783,270,100,3,240);
                blanco->setPos(950,600);//posicion de los objetivos
                blanco1->setPos(940,180);
                blanco2->setPos(280,90);
                blanco3->setPos(680,600);
>>>>>>> 08bfa91a13eeb5efa9578cc39cd96c794d07f734
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
                QString angulot= QString::number(angulo);
                ui->angulo->setText(angulot);
            }

        }
        if(event->key()==Qt::Key_W){
            if(angulo!=80){
                angulo+=5;
                QString angulot= QString::number(angulo);
                ui->angulo->setText(angulot);
            }
        }
    }
}

void Nivel::cargar(int aniv, int bdis, int bl1, int bl2, int bl3, int bl4, int sco)
{
    numnivel=aniv;
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
<<<<<<< HEAD
    if(numnivel==3&&cont>0){
        pinchos1->actualizar();
        pinchos2->actualizar();
    }
=======
>>>>>>> 08bfa91a13eeb5efa9578cc39cd96c794d07f734
    if(score==4){
        cont=0;
        ena1=1;
        ena2=1;
        ena3=1;
        ena4=1;
        numnivel++;
<<<<<<< HEAD
        if(numnivel==2){
            scene->setBackgroundBrush(QBrush(QImage(":/Escena2.png")));
=======

        for (int i=0;bars.size()>0;i++) {
        bars.at(0)->~Bala();
        bars.removeAt(0);
>>>>>>> 08bfa91a13eeb5efa9578cc39cd96c794d07f734
        }
        score=0;

        if(numnivel==3){
            scene->removeItem(estrella1);
            scene->removeItem(estrella2);
            scene->removeItem(estrella3);
            scene->setBackgroundBrush(QBrush(QImage(":/Escena3.jpg")));
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
        if((b->get_PosX()> 408-b->get_Radio())&&(b->get_PosX()< 420-b->get_Radio())&&(b->get_PosY()<260-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),408-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosX()< 515-b->get_Radio())&&(b->get_PosX()> 500-b->get_Radio())&&(b->get_PosY()<260-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),515-b->get_Radio(),b->get_PosY());

        }
        if((b->get_PosY()<245-b->get_Radio())&&(b->get_PosX()> 408-b->get_Radio())&&(b->get_PosX()< 515-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),245-b->get_Radio());

        }

        //muro 2

        if((b->get_PosX()> 781-b->get_Radio())&&(b->get_PosX()< 801-b->get_Radio())&&(b->get_PosY()<160-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),781-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosX()< 819-b->get_Radio())&&(b->get_PosX()> 800-b->get_Radio())&&(b->get_PosY()<160-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),819-b->get_Radio(),b->get_PosY());

        }
        if((b->get_PosY()<145-b->get_Radio())&&(b->get_PosX()> 781-b->get_Radio())&&(b->get_PosX()< 808-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),245-b->get_Radio());

        }

        //muro 3
        if((b->get_PosX()> 758-b->get_Radio())&&(b->get_PosX()< 767-b->get_Radio())&&(b->get_PosY()< 423-b->get_Radio())&&(b->get_PosY()>319-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),758-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosY()<423-b->get_Radio())&&(b->get_PosX()> 758-b->get_Radio())&&(b->get_PosY()> 319-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),423-b->get_Radio());

        }
    }

    if(numnivel==2){
        //muro 1
<<<<<<< HEAD
        if((b->get_PosX()> 417-b->get_Radio())&&(b->get_PosX()< 427-b->get_Radio())&&(b->get_PosY()<216-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),417-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosX()< 521-b->get_Radio())&&(b->get_PosX()> 509-b->get_Radio())&&(b->get_PosY()<216-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),521-b->get_Radio(),b->get_PosY());

        }
        if((b->get_PosY()<216-b->get_Radio())&&(b->get_PosX()> 417-b->get_Radio())&&(b->get_PosX()< 521-b->get_Radio())){
=======
        if((b->get_PosX()> 417-b->get_Radio())&&(b->get_PosX()< 427-b->get_Radio())&&(b->get_PosY()<214-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),417-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosX()< 521-b->get_Radio())&&(b->get_PosX()> 509-b->get_Radio())&&(b->get_PosY()<214-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),521-b->get_Radio(),b->get_PosY());

        }
        if((b->get_PosY()<214-b->get_Radio())&&(b->get_PosX()> 417-b->get_Radio())&&(b->get_PosX()< 521-b->get_Radio())){
>>>>>>> 08bfa91a13eeb5efa9578cc39cd96c794d07f734
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),214-b->get_Radio());

        }
        //muro 2

        if((b->get_PosX()> 422-b->get_Radio())&&(b->get_PosX()< 432-b->get_Radio())&&(b->get_PosY()>412-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),422-b->get_Radio(),b->get_PosY());
        }

        /*if((b->get_PosX()< 521-b->get_Radio())&&(b->get_PosX()> 509-b->get_Radio())&&(b->get_PosY()<214-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),521-b->get_Radio(),b->get_PosY());

<<<<<<< HEAD
        }*/
        if((b->get_PosY()>412-b->get_Radio())&&(b->get_PosX()> 422-b->get_Radio())&&(b->get_PosX()< 511-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),412-b->get_Radio());

        }
    }

    if(numnivel==3){
        //muro 1
        if((b->get_PosX()> 430-b->get_Radio())&&(b->get_PosX()< 440-b->get_Radio())&&(b->get_PosY()<264-b->get_Radio())&&(b->get_PosY()>196-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),408-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosX()< 515-b->get_Radio())&&(b->get_PosX()> 500-b->get_Radio())&&(b->get_PosY()<260-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),515-b->get_Radio(),b->get_PosY());

        }
        if((b->get_PosY()<245-b->get_Radio())&&(b->get_PosX()> 408-b->get_Radio())&&(b->get_PosX()< 515-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),245-b->get_Radio());

        }
=======
        }
        if((b->get_PosY()<214-b->get_Radio())&&(b->get_PosX()> 417-b->get_Radio())&&(b->get_PosX()< 521-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),214-b->get_Radio());

        }*/
>>>>>>> 08bfa91a13eeb5efa9578cc39cd96c794d07f734
    }



}



/*void Nivel::on_pushButton_clicked()//Con este boton se inicia el juego y cada vez que se modifique un valor se vera en la pantalla
{                                  //Tambien es el mismo boton para realizar un nuevo disparo
    timer->start(60);
    if(flag==0){
        flag=1;
        bars.push_back(new Bala);
        bars.back()->actualizar(v_limit);

        scene->addItem(bars.back());
    }
    if(cont>0){
    scene->addItem(bars.back());
    Cuerpo *b = bars.at(cont)->getEsf();
    b->set_vel(vo,angulo,93,50);
    QString disparost= QString::number(cont);
   // ui->numdis->setText(disparost);
    }
    cont++;

}*/
