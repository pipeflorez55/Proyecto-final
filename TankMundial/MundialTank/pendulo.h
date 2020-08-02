#ifndef PENDULO_H
#define PENDULO_H
#include "QPainter"
#include "QGraphicsItem"
#include "QGraphicsScene"
#include "circular.h"

class Pendulo: public Circular
{
    Q_OBJECT
public:
    Pendulo();
    void setDatos(float angulomax_,float L_, float G_,float x_,float y_);
    void actualizar();



private:
    float angulomax=0,T=0,L=0,G=0,t=0;
};

#endif // PENDULO_H
