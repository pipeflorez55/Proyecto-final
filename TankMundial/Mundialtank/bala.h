#ifndef BALA_H
#define BALA_H
#include "QPainter"
#include "QGraphicsItem"
#include "QGraphicsScene"
#include "cuerpo.h"
#include "enemy.h"


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
    bool coli();
    bool increase;
private:
    Cuerpo *esf;
    //Nivel *nivel;
    float escala;
};

#endif // BALA_H
