#include "circular.h"
#include "math.h"
#include "cmath"
Circular::Circular(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    //bulletsound = new QMediaPlayer;
    //bulletsound->setMedia(QUrl("qrc:/sounds/disparo.mp3"));

    setPixmap(QPixmap(":/Estrella.png"));

}

Circular::~Circular()
{

}

void Circular::actualizar()
{
    angulo+=w;
    xt=cos(angulo*(M_PI/180))*radio;
    yt=sin(angulo*(M_PI/180))*radio;
    setPos(x+xt,y+yt);

}

void Circular::setPosC(float x_, float y_, float radio_, float w_,float angulo_)
{
    x=x_;
    y=y_;
    radio=radio_;
    w=w_;
    angulo=angulo_;
}

