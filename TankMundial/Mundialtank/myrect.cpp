#include "myrect.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QDebug>
#include "bala.h"

MyRect::MyRect(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    //bulletsound = new QMediaPlayer;
    //bulletsound->setMedia(QUrl("qrc:/sounds/disparo.mp3"));
    if(player==1){
    setPixmap(QPixmap(":/Tanque/tank-verde-0-grados.png"));
    }
    else {
        setPixmap(QPixmap(":/Tanque/tank-azul-0-grados.png"));
    }

}

void MyRect::cambiarplayer(int eleccion)
{
    player=eleccion;
    if(player==1){
        if(anguloim==0||anguloim==5){
           setPixmap(QPixmap(":/Tanque/tank-verde-0-grados.png"));
        }
        if(anguloim==10||anguloim==15){
           setPixmap(QPixmap(":/Tanque/tank-verde-10-grados.png"));
        }
        if(anguloim==20||anguloim==25){
           setPixmap(QPixmap(":/Tanque/tank-verde-20-grados.png"));
        }
        if(anguloim==30||anguloim==35){
           setPixmap(QPixmap(":/Tanque/tank-verde-30-grados.png"));
        }
        if(anguloim==40||anguloim==45){
           setPixmap(QPixmap(":/Tanque/tank-verde-40-grados.png"));
        }
        if(anguloim==50||anguloim==55){
           setPixmap(QPixmap(":/Tanque/tank-verde-50-grados.png"));
        }
        if(anguloim==60||anguloim==65){
           setPixmap(QPixmap(":/Tanque/tank-verde-60-grados.png"));
        }
        if(anguloim==70||anguloim==75){
           setPixmap(QPixmap(":/Tanque/tank-verde-70-grados.png"));
        }
        if(anguloim==80){
           setPixmap(QPixmap(":/Tanque/tank-verde-80-grados.png"));
        }



    }
    if(player==2){
        if(anguloim==0||anguloim==-5){
           setPixmap(QPixmap(":/Tanque/tank-azul-0-grados.png"));
        }
        if(anguloim==-10||anguloim==-15){
           setPixmap(QPixmap(":/Tanque/tank-azul-10-grados.png"));
        }
        if(anguloim==-20||anguloim==-25){
           setPixmap(QPixmap(":/Tanque/tank-azul-20-grados.png"));
        }
        if(anguloim==-30||anguloim==-35){
           setPixmap(QPixmap(":/Tanque/tank-azul-30-grados.png"));
        }
        if(anguloim==-40||anguloim==-45){
           setPixmap(QPixmap(":/Tanque/tank-azul-40-grados.png"));
        }
        if(anguloim==-50||anguloim==-55){
           setPixmap(QPixmap(":/Tanque/tank-azul-50-grados.png"));
        }
        if(anguloim==-60||anguloim==-65){
           setPixmap(QPixmap(":/Tanque/tank-azul-60-grados.png"));
        }
        if(anguloim==-70||anguloim==-75){
           setPixmap(QPixmap(":/Tanque/tank-azul-70-grados.png"));
        }
        if(anguloim==-80){
           setPixmap(QPixmap(":/Tanque/tank-azul-80-grados.png"));
        }
    }


}

void MyRect::cambiarimagen(int anguim)
{
    anguloim=anguim;
}

int MyRect::pushx()
{
    if(anguloim>60){
    return posix-10;
    }
    else{
    return posix;
    }
}

int MyRect::pushy()
{
    if(flag==1){
    return posiy+50;
    }
    if(flag==-1){
    return posiy+100;
    }
}

void MyRect::actualizar()
{
    if(posiy<10){
        flag=-1;
    }
    if(posiy>480){
        flag=1;
    }
    if(flag==1){
        posiy-=10;
    }
    if(flag==-1){
        posiy+=10;
    }
    setPos(posix,posiy);

}

void MyRect::colib(int a)
{

        if(a==-1){
            vidas--;

           }

}

int MyRect::pushvidas()
{
    return vidas;
}

void MyRect::inipos(int xi, int yi)
{
    posix=xi;
    posiy=yi;
}
