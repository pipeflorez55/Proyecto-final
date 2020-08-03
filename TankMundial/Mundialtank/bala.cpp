#include "bala.h"
#include "nivel.h"
extern Nivel *nivel;


Bala::Bala(): escala(1)//se dan los datos inicales del objeto y se pasan al objeto cuerpo
{
    float posx,posy,velx,vely,r,mass,K,e;
    posx = -100;
    posy = -100;
    r = 7;
    mass = 500;
    velx = 0;
    vely = 0;
    K = 0.03;
    e = 0.2;
    esf = new Cuerpo(posx,posy,velx,vely,mass,r,K,e);

}

Bala::~Bala()
{
    delete esf;
}

QRectF Bala::boundingRect() const//crear el objeto
{
    return QRectF(-1*escala*esf->get_Radio(),-1*escala*esf->get_Radio(),2*escala*esf->get_Radio(),2*escala*esf->get_Radio());

}

void Bala::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(player==1){//se les da el color a cada bala
    painter->setBrush(Qt::green);}
    else{
    painter->setBrush(Qt::blue);}

    painter->drawEllipse(boundingRect());//se pinta la bala
}

void Bala::setEcala(float s)
{
    escala = s;
}

void Bala::actualizar(float v_lim)
{
    esf->actualizar();//pasa los datos para que se actualice en cuerpo
    setPos(esf->get_PosX(),(v_lim-esf->get_PosY()));
    increase=coli();
    colistar();


}

Cuerpo *Bala::getEsf()
{
    return esf;
}

bool Bala::coli()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();// se crea una lista de objetos
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i])) == typeid (enemy)){//si la bala llega a colisionar con un blanco

            //remove
            colliding_items[i]->setPos(-100,-100);// se manda el blanco a esta posicion
            //delete
            return true;


        }
    }
    return false;

}

bool Bala::colistar()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();// se crea una lista de objetos
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i])) == typeid (Circular)){//si la bala llega a colisionar con uno de estos objetos y si es del tipo circular

            //remove
            scene()->removeItem(this);// se elimina la bala de la escena
            //delete
        }
    }
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i])) == typeid (Pendulo)){//si la bala llega a colisionar con uno de estos objetos y si es del tipo pendulo

            //Increase score

            //remove
            scene()->removeItem(this);// se elimina la bala de la escena
            //delete
        }
    }
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i])) == typeid (Movible)){//si la bala llega a colisionar con uno de estos objetos y si es del tipo movible

            //remove

            scene()->removeItem(this);// se elimina la bala de la escena
            return -1;
            //delete
        }
    }
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i])) == typeid (planetas)){//si la bala llega a colisionar con uno de estos objetos y si es del tipo planetas

            //Increase score

            //remove

            scene()->removeItem(this);// se elimina la bala de la escena
            return -1;
            //delete
        }
    }
}

int Bala::coliJ()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();// se crea una lista de objetos
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i])) == typeid (MyRect)){//si la bala llega a colisionar con uno de estos objetos y si es del tipo MyRect

            //Increase score

            //remove

            scene()->removeItem(this);// se elimina la bala de la escena
            return -1;//se manda que se baje la vida al jugador que se alcanzo con la bala
            //delete
        }
    }
}

void Bala::set_player(int color)
{
    player=color;
}
