#ifndef BALA_H
#define BALA_H
#include "QPainter"
#include "QGraphicsItem"
#include "QGraphicsScene"
#include "cuerpo.h"
class Bala: public QGraphicsItem
{
public:
    Bala();
    ~Bala();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    void setEcala(float s);
    void actualizar(float v_lim);
    Cuerpo *getEsf();
private:
    Cuerpo *esf;
    float escala;
};

#endif // BALA_H
