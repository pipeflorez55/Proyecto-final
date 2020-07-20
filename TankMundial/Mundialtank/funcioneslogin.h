#ifndef FUNCIONESLOGIN_H
#define FUNCIONESLOGIN_H


#include "string"
#include "iostream"
#include "fstream"
using namespace std;

void escribirnewlogin(string name,string password);//Funcion para crear nuevo usuario

string leernuevousu(string usuario, bool *valido);//Funcion para leer si esta bien el usuario

bool validarcontrase(string datos, string datosui);//Funcion para compara la contrseña del archivo con la contraseña ingresada

#endif // FUNCIONESLOGIN_H

