#ifndef MULTIPLAYER_H
#define MULTIPLAYER_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "QPixmap"
#include "QBrush"
#include "QTimer"
#include "myrect.h"
#include "cuerpo.h"
#include "bala.h"
#include "circular.h"
#include "pendulo.h"
#include "movible.h"
#include "time.h"
#include "stdlib.h"
#include "QMediaPlayer"

namespace Ui {
class Multiplayer;
}

class Multiplayer : public QDialog
{
    Q_OBJECT

public:
    explicit Multiplayer(QWidget *parent = nullptr);
    ~Multiplayer();


private slots:
     void on_pushButton_clicked();//despliega el menu

     void actualizar();//actualiza los valores de todos los objetos en escena

     void on_ControJ1_clicked();//despliega los controles del jugador 1

     void on_ControlJ2_clicked();//despliega los controles del jugador 1

private:
    Ui::Multiplayer *ui;
    MyRect *jugador1, *jugador2;
    QGraphicsScene *scene;
    QTimer *timer;
    int h_limit;
    int v_limit;
    void bordercollision(Cuerpo *b);//funcion para rebotar con los muros de la escena y los bordes de la pantalla
    void keyPressEvent(QKeyEvent *event);//funcion para que se haga un evento cuando se oprime una tecla en especifico
    QList<Bala*>barsmulti;
    QList<Bala*>barsmulti2;
    QList<Circular*>estrellas;
    QList<Pendulo*>pendulos;
    Movible *muro,*muro1;
    QMediaPlayer *sondi,*sondi1;
};

#endif // MULTIPLAYER_H
