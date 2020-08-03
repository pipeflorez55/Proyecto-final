#ifndef CIRCULAR_H
#define CIRCULAR_H
#include "QPainter"
#include "QGraphicsItem"
#include "QGraphicsScene"

class Circular:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Circular(QGraphicsItem * parent = 0);
    ~Circular();
    void actualizar();//actualiza los datos del objeto en su movimiento circular
    void setPosC(float x_,float y_, float radio_,float w_,float angulo_);//le da los valores al objeto en determinado momento de la funcion
    void Push_X(int x_);//dar valores privados
    void Push_Y(int y_);//dar valores privados
    int get_X();//sacar valores privados
    int get_Y();//sacar valores privados

protected:
    float angulo=0,x=0,xt=radio,y=0,yt=0,w=0,radio=0;
};

#endif // CIRCULAR_H
