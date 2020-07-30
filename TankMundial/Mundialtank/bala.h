#ifndef BALA_H
#define BALA_H
#include "QPainter"
#include "QGraphicsItem"
#include "QGraphicsScene"
#include "cuerpo.h"
#include "enemy.h"
#include "circular.h"


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
    bool colistar();
    int coliJ();
    bool increase;
    void set_player(int color);
private:
    Cuerpo *esf;
    //Nivel *nivel;
    float escala;
    int player=1;



};

#endif // BALA_H
