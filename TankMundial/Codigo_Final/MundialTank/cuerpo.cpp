#include "cuerpo.h"
#include "math.h"
#include "cmath"
Cuerpo::Cuerpo(float posX_, float posY_, float VelX_, float VelY_, float masa_, float radio_, float K_, float e_)// se dan los valores iniciales al objeto
{
    PX = posX_;
    PY = posY_;
    mass = masa_;
    R = radio_;
    VX= VelX_;
    VY = VelY_;
    AX = 0;
    G = 10;
    K = K_;
    e = e_;
    V = 0;
    dt = 0.1;

}

Cuerpo::~Cuerpo()
{

}

float Cuerpo::get_PosX()
{
    return PX;
}

float Cuerpo::get_PosY()
{
    return PY;
}

float Cuerpo::get_Radio()
{
    return R;
}

float Cuerpo::get_masa()
{
    return mass;
}

float Cuerpo::get_e()
{
    return e;
}

int Cuerpo::grat()
{
    return G;
}

void Cuerpo::invertgra()
{
    G*=-1;
}

float Cuerpo::get_VelX()
{
    return VX;
}

float Cuerpo::get_VelY()
{
    return VY;
}
void Cuerpo::set_vel(float velx, float vely, float px, float py)
{
    VX = velx;
    VY = vely;
    PX = px;
    PY = py;
}

void Cuerpo::set_velini(float vo, float anguI, float px, float py)//ecuaciones para dar las velocidades en X y Y, tambien pasa las posiciones
{
    VX = vo*cos(anguI*(M_PI/180));
    VY = vo*sin(anguI*(M_PI/180));
    PX = px;
    PY = py;
}

void Cuerpo::actualizar()//ecuaciones para el movimiento parabolico de la bala, que se van actualizando
{
    //se saca el vector velocidad
    V = pow(((VX*VX)+(VY*VY)),1/2);
    //se da el angulo de la bala
    angulo =atan2(VY,VX);
    //se dan las aceleraciones en X y Y
    AX = -((K*(V*V)*(R*R))/mass)*cos(angulo);
    AY = (-((K*(V*V)*(R*R))/mass)*sin(angulo))-G;
    //se actualiza las pocisiones en X y Y
    PX = PX+ (VX*dt) + ((AX*(dt*dt))/2);
    PY = PY+ (VY*dt) + ((AY*(dt*dt))/2);
    //se actualiza las velocidades en X y Y
    VX = VX +AX*dt;
    VY = VY +AY*dt;

}
