#include "cuerpo.h"
#include "math.h"
#include "cmath"
Cuerpo::Cuerpo(float posX_, float posY_, float VelX_, float VelY_, float masa_, float radio_, float K_, float e_)
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

float Cuerpo::get_VelX()
{
    return VX;
}

float Cuerpo::get_VelY()
{
    return VY;
}

void Cuerpo::set_vel(float vo, float anguI, float px, float py)
{
    VX = vo*cos(anguI*(M_PI/180));
    VY = vo*sin(anguI*(M_PI/180));
    PX = px;
    PY = py;
}

void Cuerpo::actualizar()
{
    V = pow(((VX*VX)+(VY*VY)),1/2);
    angulo =atan2(VY,VX);
    AX = -((K*(V*V)*(R*R))/mass)*cos(angulo);
    AY = (-((K*(V*V)*(R*R))/mass)*sin(angulo))-G;
    PX = PX+ (VX*dt) + ((AX*(dt*dt))/2);
    PY = PY+ (VY*dt) + ((AY*(dt*dt))/2);
    VX = VX +AX*dt;
    VY = VY +AY*dt;

}

