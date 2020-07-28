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
namespace Ui {
class Multiplayer;
}

class Multiplayer : public QDialog
{
    Q_OBJECT

public:
    explicit Multiplayer(QWidget *parent = nullptr);
    ~Multiplayer();

private:
    Ui::Multiplayer *ui;
    MyRect *tanque, *tanque1;
    QGraphicsScene *scene;
    QTimer *timer;
    int h_limit;
    int v_limit;
};

#endif // MULTIPLAYER_H
