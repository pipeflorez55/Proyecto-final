#ifndef NIVEL_H
#define NIVEL_H
#include "string"
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
#include "enemy.h"
#include "circular.h"
<<<<<<< HEAD
<<<<<<< HEAD
#include "pendulo.h"
=======
>>>>>>> 08bfa91a13eeb5efa9578cc39cd96c794d07f734
=======
>>>>>>> 08bfa91a13eeb5efa9578cc39cd96c794d07f734
namespace Ui {
class Nivel;
}

class Nivel : public QDialog
{
    Q_OBJECT

public:
    explicit Nivel(QWidget *parent = nullptr);
    ~Nivel();
      void cargar(int aniv, int bdis, int bl1, int bl2, int bl3,int bl4, int sco);
private slots:
     //void on_pushButton_clicked();
     void actualizar();
private:
    Ui::Nivel *ui;
    QGraphicsScene *scene;
    MyRect *tanque;
<<<<<<< HEAD
<<<<<<< HEAD
    Pendulo *pinchos1,*pinchos2;
=======
>>>>>>> 08bfa91a13eeb5efa9578cc39cd96c794d07f734
=======
>>>>>>> 08bfa91a13eeb5efa9578cc39cd96c794d07f734
    Circular *estrella1,*estrella2,*estrella3;
    enemy *blanco, *blanco1, *blanco2, *blanco3;
    QTimer *timer;
    int score=0;
    float dt;
    int h_limit;
    int v_limit;
    int numnivel=1;
    int numedis=0;
    int ena1,ena2,ena3,ena4;
    void bordercollision(Cuerpo *b);
    void keyPressEvent(QKeyEvent *event);
    QList<Bala*>bars;

};

#endif // NIVEL_H
