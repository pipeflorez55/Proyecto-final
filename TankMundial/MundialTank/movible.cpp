#include "movible.h"

Movible::Movible()
{
    setPixmap(QPixmap(":/muropinchos.png"));

}

void Movible::actualizarmo()
{
    int numer=400+rand()%(500-400);
    int numer2=10+rand()%(30-10);
    if(y<numer2){
        flag=-1;
    }
    if(y>numer){
        flag=1;
    }
    if(flag==1){
        y-=10;
    }
    if(flag==-1){
        y+=10;
    }

    setPos(x,y);
}
