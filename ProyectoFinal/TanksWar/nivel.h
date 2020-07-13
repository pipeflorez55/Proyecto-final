#ifndef NIVEL_H
#define NIVEL_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QWidget>
#include "myrect.h"
<<<<<<< HEAD
#include "QTimer"
#include "cuerpo.h"
#include "bala.h"
=======
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
namespace Ui {
class Nivel;
}

class Nivel : public QDialog
{
    Q_OBJECT

public:
    explicit Nivel(QWidget *parent = nullptr);
    ~Nivel();

<<<<<<< HEAD

private slots:
     void on_pushButton_clicked();
     void actualizar();

=======
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
private:
    Ui::Nivel *ui;
    QGraphicsScene *scene;
    MyRect *tanque;
<<<<<<< HEAD
    QTimer *timer;
    float dt;
    int h_limit;
    int v_limit;
    void bordercollision(Cuerpo *b);
    void keyPressEvent(QKeyEvent *event);
    QList<Bala*>bars;
=======
>>>>>>> d25cc1564d00c0afc5c53c6734b509e67d24ae2f
};

#endif // NIVEL_H
