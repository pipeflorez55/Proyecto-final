#ifndef MYRECT_H
#define MYRECT_H
#include <QGraphicsPixmapItem>
#include <QObject>
//#include <QMediaPlayer>
#include <QPixmap>
class MyRect:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    MyRect(QGraphicsItem * parent = 0);
    void cambiarplayer(int eleccion);//cambia la imagen respecto al angulo en que se encuentre
    void cambiarimagen(int anguim);//saca el valor privado del angulo
    int pushx();//da la posicion en X de la bala en multiplayer
    int pushy();//da la posicion en X de la bala en multiplayer
    void actualizar();//actualiza los valores de MyRect
    void colib(int a);//funcion para disminuir las vidas en multiplayer
    int pushvidas();//saca el valor privado de vidas
    void inipos(int xi,int yi);//saca el valor privado e inicial de X y Y
public slots:

private:
    //QMediaPlayer * bulletsound;
    int vidas=4;
    int player=1;
    int anguloim=0;
    int posix;
    int posiy;
    int flag=1;

};

#endif // MYRECT_H
