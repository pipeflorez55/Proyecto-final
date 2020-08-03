#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>
#include <stdlib.h>


enemy::enemy(QGraphicsItem * parent): QObject(), QGraphicsPixmapItem()//se pinta el objeto con la imagen que se desee
{
    setPixmap(QPixmap(":/blanco_pequena.png"));

}
