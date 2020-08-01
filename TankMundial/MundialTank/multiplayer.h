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
     void on_pushButton_clicked();
     void actualizar();

     void on_ControJ1_clicked();

     void on_ControlJ2_clicked();

private:
    Ui::Multiplayer *ui;
    MyRect *jugador1, *jugador2;
    QGraphicsScene *scene;
    QTimer *timer;
    int h_limit;
    int v_limit;
    void bordercollision(Cuerpo *b);
    void keyPressEvent(QKeyEvent *event);
    QList<Bala*>barsmulti;
    QList<Bala*>barsmulti2;
    QList<Circular*>estrellas;
    QList<Pendulo*>pendulos;
    Movible *muro,*muro1;
};

#endif // MULTIPLAYER_H
