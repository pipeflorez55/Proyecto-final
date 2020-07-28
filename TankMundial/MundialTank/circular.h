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
    void actualizar();
    void setPosC(float x_,float y_, float radio_,float w_,float angulo_);

private:
    float angulo=0,x=0,xt=radio,y=0,yt=0,w=0,radio=0;
};

#endif // CIRCULAR_H