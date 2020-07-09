#ifndef NIVEL_H
#define NIVEL_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QWidget>
#include "myrect.h"
namespace Ui {
class Nivel;
}

class Nivel : public QDialog
{
    Q_OBJECT

public:
    explicit Nivel(QWidget *parent = nullptr);
    ~Nivel();

private:
    Ui::Nivel *ui;
    QGraphicsScene *scene;
    MyRect *tanque;
};

#endif // NIVEL_H
