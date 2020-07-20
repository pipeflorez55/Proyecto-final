#ifndef NIVEL_H
#define NIVEL_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "QPixmap"
#include <QWidget>
#include "QBrush"
#include "myrect.h"
#include "QTimer"
#include "cuerpo.h"
#include "bala.h"
<<<<<<< HEAD:TankMundial/Mundialtank/nivel.h
#include "enemy.h"
=======
>>>>>>> 5053605f4360514f79dc04ce9d9aff54afff1476:ProyectoFinal/TanksWar/nivel.h
namespace Ui {
class Nivel;
}

class Nivel : public QDialog
{
    Q_OBJECT

public:
    explicit Nivel(QWidget *parent = nullptr);
    ~Nivel();
<<<<<<< HEAD:TankMundial/Mundialtank/nivel.h
=======


>>>>>>> 5053605f4360514f79dc04ce9d9aff54afff1476:ProyectoFinal/TanksWar/nivel.h
private slots:
     //void on_pushButton_clicked();
     void actualizar();
<<<<<<< HEAD:TankMundial/Mundialtank/nivel.h
=======

>>>>>>> 5053605f4360514f79dc04ce9d9aff54afff1476:ProyectoFinal/TanksWar/nivel.h
private:
    Ui::Nivel *ui;
    QGraphicsScene *scene;
    MyRect *tanque;
<<<<<<< HEAD:TankMundial/Mundialtank/nivel.h
    enemy *blanco, *blanco1, *blanco2, *blanco3;
=======
>>>>>>> 5053605f4360514f79dc04ce9d9aff54afff1476:ProyectoFinal/TanksWar/nivel.h
    QTimer *timer;
    int score=0;
    float dt;
    int h_limit;
    int v_limit;
    int numnivel=1;
    void bordercollision(Cuerpo *b);
    void keyPressEvent(QKeyEvent *event);
    QList<Bala*>bars;
};

#endif // NIVEL_H
