#ifndef BALA_H
#define BALA_H
#include "QPainter"
#include "QGraphicsItem"
#include "QGraphicsScene"
#include "cuerpo.h"
#include "enemy.h"
#include "circular.h"
#include "movible.h"
#include "planetas.h"


class Bala: public QGraphicsItem
{
public:
    Bala();
    ~Bala();
    QRectF boundingRect() const;//funcion para crear el objeto
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);//funcion para pintar la bala
    void setEcala(float s);
    void actualizar(float v_lim);//actualiza la posicion de la bala
    Cuerpo *getEsf();
    bool coli();//colisiones con los blancos
    bool colistar();//colisiones con los enemigos
    int coliJ();//colision con el contrincante en multiplayer
    bool increase;
    void set_player(int color);//deifinicion del color de los tanques
private:
    Cuerpo *esf;
    //Nivel *nivel;
    float escala;
    int player=1;



};

#endif // BALA_H
