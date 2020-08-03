#ifndef MOVIBLE_H
#define MOVIBLE_H

#include "circular.h"
#include "time.h"
#include "stdlib.h"
class Movible:public Circular
{
public:
    Movible();
    void actualizarmo();//actualiza los valores del objeto apartir del movimiento que se hereda en Circular

private:
    int flag=1;
};

#endif // MOVIBLE_H
