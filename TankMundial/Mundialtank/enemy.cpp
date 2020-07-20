#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>
#include <stdlib.h>


enemy::enemy(QGraphicsItem * parent): QObject(), QGraphicsPixmapItem()
{
    //set random posicion
    //int random_number = rand() % 600;
    //int random_number2 = rand() % 400;

    //draw the bullet
    setPixmap(QPixmap(":/blanco_pequena.png"));

    //connect


}
/*
int flag1=0;
void enemy::movede2()
{
    if(pos().x() > 624){
        flag1=1;
//        //decrease the health
//        game->health->decrease();

//        scene()->removeItem(this);
//        delete this;
    }
    else if(pos().x()<18){
        flag1=0;
    }
    if(flag1==1){
      setPos(x()-11,y());
    }
    if(flag1==0){
        setPos(x()+15,y());
    }
}
int flag2=0;
void enemy::movede3()
{
    if(pos().x() >=389&&pos().y()>75){
        flag2=2;
    }
    else if(pos().y()>341&&pos().x()<=271){
        flag2=1;
    }
    else if(pos().x()<271&&pos().y()<75){
        flag2=0;
    }
    else if(pos().y()<75&&pos().x() > 389){
        flag2=3;
    }
    if(flag2==1){
      setPos(x()+11,y());
    }
    if(flag2==0){
        setPos(x(),y()+9);
    }
    if(flag2==2){
        setPos(x(),y()-9);
    }
    if(flag2==3){
        setPos(x()-7,y());
    }

}
int flag=0;
void enemy::movede1()
{


    if(pos().x() > 624){
        flag=1;
//        //decrease the health
//        game->health->decrease();

//        scene()->removeItem(this);
//        delete this;
    }
    else if(pos().x()<18){
        flag=0;
    }
    if(flag==1){
      setPos(x()-9,y());
    }
    if(flag==0){
        setPos(x()+10,y());
    }
}
*/
