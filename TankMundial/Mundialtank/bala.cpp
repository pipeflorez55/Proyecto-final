#include "bala.h"
#include "nivel.h"
extern Nivel *nivel;


Bala::Bala(): escala(1)
{
    float posx,posy,velx,vely,r,mass,K,e;
    posx = 32;
    posy = 150;
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

QRectF Bala::boundingRect() const
{
    return QRectF(-1*escala*esf->get_Radio(),-1*escala*esf->get_Radio(),2*escala*esf->get_Radio(),2*escala*esf->get_Radio());

}

void Bala::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(player==1){
    painter->setBrush(Qt::blue);}
    else{
    painter->setBrush(Qt::red);}

    painter->drawEllipse(boundingRect());
}

void Bala::setEcala(float s)
{
    escala = s;
}

void Bala::actualizar(float v_lim)
{
    esf->actualizar();
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

    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i])) == typeid (enemy)){

            //Increase score

            //remove
            colliding_items[i]->setPos(-100,-100);
            //delete
            return true;


        }
    }
    return false;
    /*for(int i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i])) == typeid (enemy)){

            //Increase score
            game->health->decrease();
            game->player->setPos(115,320);
            timer1->stop();
            timer2->stop();
            timer3->stop();
            timer4->stop();
            if(game->health->lose()){

                game->loser =new enemy;
                game->loser->setPixmap(QPixmap(":/images/lose.png"));
                game->scene->addItem(game->loser);
                game->scene->removeItem(game->player);
                game->scene->removeItem(game->enemigo1);
                game->scene->removeItem(game->enemigo2);
                delete game->player;
                delete  game->enemigo1;
                delete  game->enemigo2;
                game->music->pause();


            }
        }
    }*/

}

bool Bala::colistar()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i])) == typeid (Circular)){

            //Increase score

            //remove
            scene()->removeItem(this);
            //delete
        }
    }
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i])) == typeid (Pendulo)){

            //Increase score

            //remove
            scene()->removeItem(this);
            //delete
        }
    }


}

void Bala::set_player(int color)
{
    player=color;
}
