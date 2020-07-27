#include "pendulo.h"
#include "math.h"
#include "cmath"
Pendulo::Pendulo(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/Pendulo.png"));
}

void Pendulo::setDatos(float angulomax_, float L_, float G_, float x_, float y_)
{
    angulomax=angulomax_;
    L=L_;
    G=G_;
    y=y_;
    x=x_;
    t=0;
    T=2*M_PI*(pow(L/G,1/2));

}

void Pendulo::actualizar()
{
    angulo=angulomax*cos((2*t*M_PI)/T);
    yt=cos(angulo*(M_PI/180))*L;
    xt=sin(angulo*(M_PI/180))*L;
    t+=0.2;
    setPos(x+xt,y+yt);
}

