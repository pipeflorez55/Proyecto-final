#include "funcioneslogin.h"

void escribirnewlogin(string name, string password)
{
 //
    string t="../Usuarios/";
    name=t+name+".txt";
    ofstream archivo2;
    archivo2.open(name);//Se crea el archivo con el nombre de ingreso
    archivo2<< password;//Se le agrega al archivo la contrseña
    archivo2.close();

}



string leernuevousu(string usuario, bool *valido)//lectura del archivo del usuario
{
    string datos;
    string t="../Usuarios/";
    usuario=t+usuario+".txt";
    ifstream archivo(usuario);

    if(archivo.is_open()){  //validar si esta el usuario
        *valido=true;
        while (!archivo.eof()) {//leer el archivo
            if(!archivo.eof()){
                datos += archivo.get();
            }
        }
        archivo.close();
        return datos;
    }
    else{         //si no se encuentra el archivo, significa que el archivo no es valido
        *valido= false;
        archivo.close();
            }

}


bool validarcontrase(string datos, string datosui)
{
    string contrasena;
    contrasena += datos[0];    //Se cogen los primeros 5 datos
    contrasena += datos[1];
    contrasena += datos[2];
    contrasena += datos[3];
    contrasena += datos[4];

    if(contrasena==datosui){//se compara con la contraseña ingresada para ver si son iguales y retornar true
        return  true;
    }
    else{
        return false;
    }

}

/*setPixmap(QPixmap(":/images/TUIMAGEN"));
    setTransformOriginPoint(50,50);
    setRotation(180);*/
