#ifndef NIVEL_H
#define NIVEL_H
#include "string"
#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "QPixmap"
#include <QWidget>
#include "QBrush"
#include "myrect.h"
#include "QTimer"
#include "cuerpo.h"
#include "bala.h"
#include "enemy.h"
#include "circular.h"
#include "pendulo.h"
#include "QMediaPlayer"
#include "planetas.h"
namespace Ui {
class Nivel;
}

class Nivel : public QDialog
{
    Q_OBJECT

public:
    explicit Nivel(QWidget *parent = nullptr);
    ~Nivel();
     void cargardo(int aniv, int bdis, int bl1, int bl2, int bl3,int bl4, int sco);//funcion para cargar la partida apartir de los valores que se tiene en el archivo de texto
     std::string pospo(std::string info,int num,std::string nam);//extrae los valores de archivo de texto podio y escribe sobre este dependiendo de la puntuacion final
     std::string usuario;
     std::string contrsmain;
private slots:

     void actualizar();//actualiza los valores de todos los objetos en escena

     void on_pushButton_clicked();//despliega el aviso de que se guardo la partida

     void on_controles_clicked();//despliega la ventana de los controles del tanque

     void on_menu_clicked();//boton para regresar al menu principal

private:
    Ui::Nivel *ui;
    QGraphicsScene *scene;
    MyRect *tanque;
    Pendulo *pinchos1,*pinchos2;
    Circular *estrella1,*estrella2,*estrella3;
    enemy *blanco, *blanco1, *blanco2, *blanco3;
    QTimer *timer;
    QMediaPlayer *sondi;
    planetas *planeta1,*planeta2,*planeta3,*planeta4,*planeta5;
    int score=0;
    float dt;
    int h_limit;
    int v_limit;
    int numnivel=1;
    int numedis=0;
    int ena1,ena2,ena3,ena4;
    void guardar(std::string name);//funcion para pasar datos y sobreescribir en el archivo de texto cuando se desea guardar una partida
    void comprobarblancos();//comprueba el estado de los objetos, si estan activos o inactivos
    void bordercollision(Cuerpo *b);//funcion para rebotar con los muros de la escena y los bordes de la pantalla
    void keyPressEvent(QKeyEvent *event);//funcion para que se haga un evento cuando se oprime una tecla en especifico
    QList<Bala*>bars;

};

#endif // NIVEL_H
