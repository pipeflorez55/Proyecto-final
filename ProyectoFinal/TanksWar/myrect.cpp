#include "myrect.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QDebug>


MyRect::MyRect(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    //bulletsound = new QMediaPlayer;
    //bulletsound->setMedia(QUrl("qrc:/sounds/disparo.mp3"));

    setPixmap(QPixmap(":/Tanque/tank-verde-0-grados.png"));

}
