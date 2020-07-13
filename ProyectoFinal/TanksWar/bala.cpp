#include "bala.h"

Bala::Bala(): escala(1)
{
    float posx,posy,velx,vely,r,mass,K,e;
    posx = 32;
    posy = 150;
    r = 7;
    mass = 500;
    velx = 0;
    vely = 0;
    K = 0.08;
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
    painter->setBrush(Qt::blue);
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
}

Cuerpo *Bala::getEsf()
{
    return esf;
}
