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

public slots:

private:
    //QMediaPlayer * bulletsound;

};

#endif // MYRECT_H
