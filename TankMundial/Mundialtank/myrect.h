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

public slots:

private:
    //QMediaPlayer * bulletsound;
    int player=1;
    int anguloim=0;

};

#endif // MYRECT_H
