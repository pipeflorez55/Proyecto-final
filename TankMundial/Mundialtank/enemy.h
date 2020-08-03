#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>

class enemy:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    enemy(QGraphicsItem * parent=0);

public slots:

};
#endif // ENEMY_H
