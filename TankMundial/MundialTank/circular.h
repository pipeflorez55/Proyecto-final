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
<<<<<<< HEAD
<<<<<<< HEAD
=======
    //void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
>>>>>>> 08bfa91a13eeb5efa9578cc39cd96c794d07f734
=======
    //void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
>>>>>>> 08bfa91a13eeb5efa9578cc39cd96c794d07f734

private:
    float angulo=0,x=0,xt=radio,y=0,yt=0,w=0,radio=0;
};

#endif // CIRCULAR_H
