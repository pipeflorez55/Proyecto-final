#include "nivel.h"
#include "ui_nivel.h"
#include "QKeyEvent"
#include "enemy.h"
#include "funcioneslogin.h"
#include "QMessageBox"
#include "menu.h"
#include "finalsingle.h"

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
                    blanco->setPos(950,587);//posicion de los objetivos
                    bandera=0;
                }
                if(ena2==1){
                    blanco1->setPos(940,170);
                    bandera=0;
                }
                if(ena3==1){
                    blanco2->setPos(280,90);
                    bandera=0;
                }
                if(ena4==1){
                    blanco3->setPos(680,587);
                    bandera=0;
                }
            }

            if(numnivel==2){//Creacion de los objetos en el nivel 2

                if(ena1==1){
                    //arregalar que aparezcan los objetos
                    blanco->setPos(940,30);//posicion de los objetivos
                    bandera=0;
                }
                if(ena2==1){
                    blanco1->setPos(780,248);
                    bandera=0;
                }
                if(ena3==1){
                    blanco2->setPos(190,20);
                    bandera=0;
                }
                if(ena4==1){
                      blanco3->setPos(680,587);
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
                estrella1->setPosC(250,250,100,3,0);
                estrella2->setPosC(250,250,100,3,120);
                estrella3->setPosC(250,250,100,3,240);
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
                pinchos1->setDatos(45,100,18,742,162);
                pinchos2->setDatos(60,40,18,495,497);


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

string Nivel::pospo(string info, int num, string nam)
{
    int flag=-1;
    int cnt=0;
    int lec1=0;
    string a;
    string tren;
    string infoc=info;
    if(nam.length()==1)tren=nam+"**";
    if(nam.length()==2)tren=nam+"*";
    if(nam.length()>=3)tren=nam;
    string remplaso=tren.substr(0,3)+to_string(num);
    int numdisp;
    for(int i=0;i<info.length()-1;i++){
        if(info[i]=='|'){
            if(lec1>=1){
                flag*=-1;
            }
            lec1++;
        }

        if(flag==1){
           cnt++;

           if(cnt>4){
             a+=info[i];
           }
        }
        if(lec1>1){
        if(flag==-1){
            numdisp=stoi(a);

            if(num<numdisp){
                string part1,part2;

                if(a.length()==3){
                 part1=info.substr(0,i-6);
                 part2=info.substr(i-8);
                }
                if(a.length()==2){
                    part1=info.substr(0,i-5);
                    part2=info.substr(i-7);
                }
                infoc=part1+remplaso+part2;

                infoc.replace(infoc.length()-1,1,"");


                return infoc;
            }
            else {
                a="";
            }
            cnt=0;
        }
        }

    }



    return  info;

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
    if(numnivel>4){
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
        std::string podio;
        podio=pospo(cargar("podio/podio"),numedis,usuario);
        escribirpodio(podio);
        score=0;
        escribirnewlogin(usuario,contrsmain);
        Finalsingle finalsingle;
        finalsingle.setModal(true);
        finalsingle.exec();

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
        if((b->get_PosX()> 401-b->get_Radio())&&(b->get_PosX()< 413-b->get_Radio())&&(b->get_PosY()<240-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),401-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosX()< 517-b->get_Radio())&&(b->get_PosX()> 505-b->get_Radio())&&(b->get_PosY()<240-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),517-b->get_Radio(),b->get_PosY());

        }
        if((b->get_PosY()<247-b->get_Radio())&&(b->get_PosX()> 401-b->get_Radio())&&(b->get_PosX()< 517-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),247-b->get_Radio());

        }

        //muro 2

        if((b->get_PosX()> 781-b->get_Radio())&&(b->get_PosX()< 801-b->get_Radio())&&(b->get_PosY()<152-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),781-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosX()< 821-b->get_Radio())&&(b->get_PosX()> 807-b->get_Radio())&&(b->get_PosY()<152-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),821-b->get_Radio(),b->get_PosY());

        }
        if((b->get_PosY()<152-b->get_Radio())&&(b->get_PosX()> 781-b->get_Radio())&&(b->get_PosX()< 821-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),152-b->get_Radio());

        }

        //muro 3
        if((b->get_PosX()> 755-b->get_Radio())&&(b->get_PosX()< 764-b->get_Radio())&&(b->get_PosY()< 425-b->get_Radio())&&(b->get_PosY()>317-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),755-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosY()<430-b->get_Radio())&&(b->get_PosX()> 755-b->get_Radio())&&(b->get_PosY()> 320-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),430-b->get_Radio());

        }
    }

    if(numnivel==2){
        //muro 1
        if((b->get_PosX()> 406-b->get_Radio())&&(b->get_PosX()< 416-b->get_Radio())&&(b->get_PosY()<225-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),406-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosX()< 521-b->get_Radio())&&(b->get_PosX()> 509-b->get_Radio())&&(b->get_PosY()<225-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),521-b->get_Radio(),b->get_PosY());

        }
        if((b->get_PosY()<227-b->get_Radio())&&(b->get_PosX()> 419-b->get_Radio())&&(b->get_PosX()< 521-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),227-b->get_Radio());

        }
        //muro 2

        if((b->get_PosX()> 422-b->get_Radio())&&(b->get_PosX()< 432-b->get_Radio())&&(b->get_PosY()>415-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),422-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosX()< 531-b->get_Radio())&&(b->get_PosX()> 520-b->get_Radio())&&(b->get_PosY()>415-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),531-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosY()>416-b->get_Radio())&&(b->get_PosX()> 422-b->get_Radio())&&(b->get_PosX()< 531-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),416-b->get_Radio());
        }
    }

    if(numnivel==3){
        //muro 1
        if((b->get_PosX()> 405-b->get_Radio())&&(b->get_PosX()< 416-b->get_Radio())&&(b->get_PosY()<264-b->get_Radio())&&(b->get_PosY()>194-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),405-b->get_Radio(),b->get_PosY());
        }
        if((b->get_PosX()< 802-b->get_Radio())&&(b->get_PosX()> 794-b->get_Radio())&&(b->get_PosY()<264-b->get_Radio())&&(b->get_PosY()>194-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),802-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosY()<275-b->get_Radio())&&(b->get_PosY()>260-b->get_Radio())&&(b->get_PosX()> 405-b->get_Radio())&&(b->get_PosX()< 800-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),275-b->get_Radio());

        }
        if((b->get_PosY()>196-b->get_Radio())&&(b->get_PosY()<210-b->get_Radio())&&(b->get_PosX()> 405-b->get_Radio())&&(b->get_PosX()< 798-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),196-b->get_Radio());
        }

        //muro 2
        if((b->get_PosX()> 407-b->get_Radio())&&(b->get_PosX()< 413-b->get_Radio())&&(b->get_PosY()<110-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),407-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosX()< 520-b->get_Radio())&&(b->get_PosX()> 509-b->get_Radio())&&(b->get_PosY()<110-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),520-b->get_Radio(),b->get_PosY());

        }
        if((b->get_PosY()<115-b->get_Radio())&&(b->get_PosX()> 407-b->get_Radio())&&(b->get_PosX()< 520-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),115-b->get_Radio());

        }

        //muro 3

        if((b->get_PosX()> 507-b->get_Radio())&&(b->get_PosX()< 516-b->get_Radio())&&(b->get_PosY()<555-b->get_Radio())&&(b->get_PosY()>455-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),507-b->get_Radio(),b->get_PosY());
        }

        if((b->get_PosY()<568-b->get_Radio())&&(b->get_PosY()>555-b->get_Radio())&&(b->get_PosX()> 507-b->get_Radio())&&(b->get_PosX()< 616-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),568-b->get_Radio());

        }
        if((b->get_PosY()>457-b->get_Radio())&&(b->get_PosY()<465-b->get_Radio())&&(b->get_PosX()> 507-b->get_Radio())&&(b->get_PosX()< 616-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),457-b->get_Radio());
        }


    }

    if(numnivel==4){
        // muro 1
        if((b->get_PosX()> 385-b->get_Radio())&&(b->get_PosX()< 397-b->get_Radio())&&(b->get_PosY()<268-b->get_Radio())&&(b->get_PosY()>167-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),385-b->get_Radio(),b->get_PosY());
        }
        if((b->get_PosY()<280-b->get_Radio())&&(b->get_PosY()>265-b->get_Radio())&&(b->get_PosX()> 385-b->get_Radio())&&(b->get_PosX()< 629-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),280-b->get_Radio());

        }
        if((b->get_PosY()>168-b->get_Radio())&&(b->get_PosY()<180-b->get_Radio())&&(b->get_PosX()> 385-b->get_Radio())&&(b->get_PosX()< 625-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),168-b->get_Radio());
        }

        //muro 2
        if((b->get_PosX()> 697-b->get_Radio())&&(b->get_PosX()< 680-b->get_Radio())&&(b->get_PosY()<565-b->get_Radio())&&(b->get_PosY()>466-b->get_Radio())){
            b->set_vel(-1*b->get_VelX()*b->get_e(),b->get_VelY(),697-b->get_Radio(),b->get_PosY());
        }
        if((b->get_PosY()<565-b->get_Radio())&&(b->get_PosY()>550-b->get_Radio())&&(b->get_PosX()> 697-b->get_Radio())&&(b->get_PosX()< 800-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),565-b->get_Radio());

        }
        if((b->get_PosY()>466-b->get_Radio())&&(b->get_PosY()<480-b->get_Radio())&&(b->get_PosX()> 697-b->get_Radio())&&(b->get_PosX()< 800-b->get_Radio())){
            b->set_vel(b->get_VelX(),-1*b->get_e()*b->get_VelY(),b->get_PosX(),466-b->get_Radio());
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
    QMessageBox::information(this, tr("Controles"), tr("-El boton C es para realizar un disparo.\n-Presione el boton X para cambiar la gravedad. Si quiere regresarla a al normalidad presione el boton otra vez.\n-Los botones Q y E, son para variar la velocidad inicial.\n-Los botones W y S, son para variar el angulo de disparo."));
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
