#ifndef PLANETAS_H
#define PLANETAS_H
#include "QPainter"
#include "QGraphicsItem"
#include "QGraphicsScene"

class planetas: public QGraphicsItem
{
public:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);//funcion para pintar la bala
    void setEcala(float s);
     float push_x();//sacar valores privados
     float push_y();//sacar valores privados
     void get_posiciones(float xotro2,float yotro2,float xotro3,float yotro3,float xotro4,float yotro4,float xotro5,float yotro5);//da los valores de las posiciones inicales a los objetos
     void actualizar(float v_lim);//actualiza la posicion de los planetas
    QRectF boundingRect() const;//funcion para crear el objeto
     void set_valores(float xi,float yi,float vxi,float vyi,float masa,float radioi);// da los valores del objeto

    planetas();
private:
    float x2=0,y2=0,x3=0,y3=0,x4=0,y4=0,x5=0,y5=0;
    float ra=0,r3=0,r4=0,r5=0;
    float xbase=1200/2,ybase=351/2;
    float x=0,y=0,vx=0,vy=0,masai=50000,ax=0,ay=0,T=10,G=1;
   float radio=5,escala;
};

#endif // PLANETAS_H
