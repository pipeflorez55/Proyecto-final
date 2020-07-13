#ifndef NIVEL_H
#define NIVEL_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QWidget>
#include "myrect.h"
#include "QTimer"
#include "cuerpo.h"
#include "bala.h"
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
     void on_pushButton_clicked();
     void actualizar();

private:
    Ui::Nivel *ui;
    QGraphicsScene *scene;
    MyRect *tanque;
    QTimer *timer;
    float dt;
    int h_limit;
    int v_limit;
    void bordercollision(Cuerpo *b);
    void keyPressEvent(QKeyEvent *event);
    QList<Bala*>bars;
};

#endif // NIVEL_H
