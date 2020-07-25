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
#include "enemy.h"
#include "circular.h"
namespace Ui {
class Nivel;
}

class Nivel : public QDialog
{
    Q_OBJECT

public:
    explicit Nivel(QWidget *parent = nullptr);
    ~Nivel();
private slots:
     //void on_pushButton_clicked();
     void actualizar();
private:
    Ui::Nivel *ui;
    QGraphicsScene *scene;
    MyRect *tanque;
    Circular *estrella1,*estrella2,*estrella3;
    enemy *blanco, *blanco1, *blanco2, *blanco3;
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
