#ifndef CUERPO_H
#define CUERPO_H


class Cuerpo
{
public:
    Cuerpo(float posX_,float posY_,float VelX_,float VelY_,float masa_,float radio_,float K_,float e_);
    ~Cuerpo();
    float get_PosX();
    float get_PosY();
    float get_Radio();
    float get_masa();
    float get_e();
    float get_VelX();
    float get_VelY();
    void set_vel(float velx, float vely,float px,float py);
    void actualizar();
private:
    float PX,PY,mass,R,VX,VY,angulo,AX,AY,G,K,e,V,dt;

};

#endif // CUERPO_H
