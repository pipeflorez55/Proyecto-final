#ifndef PENDULO_H
#define PENDULO_H
#include "QPainter"
#include "QGraphicsItem"
#include "QGraphicsScene"

class Pendulo:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Pendulo(QGraphicsItem * parent = 0);
    void setDatos(float angulomax_,float L_, float G_,float x_,float y_);
    void actualizar();



private:
    float angulo=0,angulomax=0,T=0,L=0,G=0,x=0,xt=0,y=0,yt=0,t=0;
};

#endif // PENDULO_H
