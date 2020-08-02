#include "planetas.h"
#include<stdlib.h>
#include<time.h>
#include <math.h>
#include "bala.h"

planetas::planetas(): escala(1)
{
        srand(time(NULL));
}
void planetas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::black);

    painter->drawEllipse(boundingRect());
}

void planetas::setEcala(float s)
{
    escala = s;
}

float planetas::push_x()
{
    return x;
}

float planetas::push_y()
{
    return y;
}

void planetas::get_posiciones( float xotro2, float yotro2, float xotro3, float yotro3, float xotro4, float yotro4, float xotro5, float yotro5)
{
    x2=xotro2;
    y2=yotro2;
    x3=xotro3;
    y3=yotro3;
    x4=xotro4;
    y4=yotro4;
    x5=xotro5;
    y5=yotro5;



}

void planetas::actualizar(float v_lim)
{
    ra=sqrt(pow((x2-x),2)+ pow((y2-y),2));
    r3=sqrt(pow((x3-x),2)+ pow((y3-y),2));
    r4=sqrt(pow((x4-x),2)+ pow((y4-y),2));
    r5=sqrt(pow((x5-x),2)+ pow((y5-y),2));
    ay=((G*masai)*(y2-y))/pow(ra,3)+((G*masai)*(y3-y))/pow(r3,3)+((G*masai)*(y4-y))/pow(r4,3)+((G*masai)*(y5-y))/pow(r5,3);
    ax=((G*masai)*(x2-x))/pow(ra,3)+((G*masai)*(x3-x))/pow(r3,3)+((G*masai)*(x4-x))/pow(r4,3)+((G*masai)*(x5-x))/pow(r5,3);
    vy+=(ay*T);
    vx+=(ax*T);
    x+=(vx*T);
    y+=vy*T;
    setPos(xbase+(x/40),ybase+(y/40));


}
QRectF planetas::boundingRect() const
{
    return QRectF(-1*escala*radio,-1*escala*radio,2*escala*radio,2*escala*radio);
}


void planetas::set_valores(float xi, float yi, float vxi, float vyi, float masa, float radioi)
{
    x=xi;
    y=yi;
    vx=vxi;
    vy=vyi;
    radio=radioi/10;
}



