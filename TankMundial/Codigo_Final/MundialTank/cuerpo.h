#ifndef CUERPO_H
#define CUERPO_H


class Cuerpo
{
public:
    Cuerpo(float posX_,float posY_,float VelX_,float VelY_,float masa_,float radio_,float K_,float e_);
    ~Cuerpo();
    float get_PosX();//sacar valores privados de X
    float get_PosY();//sacar valores privados de Y
    float get_Radio();//sacar valores privados del radio
    float get_masa();//sacar valores privados de la masa
    float get_e();//sacar valores privados de e
    int grat();//sacar valores privados de la gravedad
    void invertgra();//invierte la gravedad de la bala
    float get_VelX();//sacar valores privados
    float get_VelY();//sacar valores privados
    void set_velini(float vo, float anguI,float px,float py);// da los valores iniciales
    void set_vel(float velx, float vely, float px, float py);// actualizar valores para rebotes
    void actualizar();//actualiza los datos del cuerpo
private:
    float PX,PY,mass,R,VX,VY,angulo,AX,AY,G,K,e,V,dt;

};

#endif // CUERPO_H
