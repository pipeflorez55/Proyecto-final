#include "pendulo.h"
#include "math.h"
#include "cmath"
Pendulo::Pendulo()
{
    setPixmap(QPixmap(":/Pendulo.png"));//imagen del pendulo
    xt=0;
}

void Pendulo::setDatos(float angulomax_, float L_, float G_, float x_, float y_)//se pasan los valores al pendulo
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
    angulo=angulomax*cos((2*t*M_PI)/T);//angulo que va a variar el movimiento
    yt=cos(angulo*(M_PI/180))*L;//posicion en Y respecto al angulo
    xt=sin(angulo*(M_PI/180))*L;//posicion en X respecto al angulo
    t+=0.2;
    setPos(x+xt,y+yt);
}

