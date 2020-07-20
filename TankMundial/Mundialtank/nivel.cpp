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
    blanco= new enemy;
    blanco1= new enemy;
    blanco2= new enemy;
    blanco3= new enemy;

    ui->graphicsView->setScene(scene);//añade la escena al graphicsview
    //ui->centralwidget->adjustSize();//se ajusta al tamaño
    scene->addRect(scene->sceneRect());
    ui->graphicsView->resize(scene->width(),scene->height());//el graphicsview se acomoda al tamaño de la escena
    this->resize(ui->graphicsView->width()+200,ui->graphicsView->height()+200);//aumenta el tamañño

    scene->setBackgroundBrush(QBrush(QImage(":/Escena.png")));

    scene->addItem(tanque);

    scene->addItem(blanco);
    scene->addItem(blanco1);
    scene->addItem(blanco2);
    scene->addItem(blanco3);


    tanque->setPos(2,575);
    blanco->setPos(950,600);//posicion de los objetivos
    blanco1->setPos(940,180);
    blanco2->setPos(280,90);
    blanco3->setPos(680,600);




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
        ui->pushButton->setText("DISPARO!!!");
        if(flag==0){
            //flag=1;

            bars.push_back(new Bala);
            bars.back()->actualizar(v_limit);

        }

        if(cont>0){  // para esperar a que inicie el juego para poder disparar
        scene->addItem(bars.back());  // añadir bala a la escena
        Cuerpo *b = bars.at(cont)->getEsf(); // crear las fisicas de la bala
        b->set_vel(vo,angulo,93,50); // añadir las variables de la fisica
        QString disparost= QString::number(cont);
        ui->numdis->setText(disparost);
        }
        cont++;
        if(cont==1){
            if(numnivel==2){
                blanco= new enemy;//arregalar que aparezcan los objetos
                blanco1= new enemy;
                blanco2= new enemy;
                blanco3= new enemy;
                scene->addItem(blanco);
                scene->addItem(blanco1);
                scene->addItem(blanco2);
                scene->addItem(blanco3);
                blanco->setPos(950,600);//posicion de los objetivos
                blanco1->setPos(940,180);
                blanco2->setPos(280,90);
                blanco3->setPos(680,600);
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
    if(score==4){
        cont=0;
        scene->setBackgroundBrush(QBrush(QImage(":/Escena2.png")));
        numnivel++;
        for (int i=0;i<bars.size();i++) {
        bars.at(i)->~Bala();
        bars.removeAt(i);
        }




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
