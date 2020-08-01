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
    void cambiarplayer(int eleccion);
    void cambiarimagen(int anguim);
    int pushx();
    int pushy();
    void actualizar();
    void colib(int a);
    int pushvidas();
    void inipos(int xi,int yi);
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
