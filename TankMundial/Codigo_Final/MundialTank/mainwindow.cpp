#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nivel.h"
#include "multiplayer.h"
#include "QMessageBox"
#include <cstdlib>
#include <QMediaPlayer>
#include <QMediaPlaylist>
std::string usuario;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/inicio.jpg"));//se pinta el label con la imagen que se desee

    QMediaPlaylist *playlist = new QMediaPlaylist();//se crea una playlist
    playlist->addMedia(QUrl("qrc:/Battleship.mp3"));//se agrega solo una cancion
    playlist->setPlaybackMode(QMediaPlaylist::Loop);//se pone en loop para que se repita cuando termine

    QMediaPlayer *music = new QMediaPlayer();// se crea un objeto musica
    music->setPlaylist(playlist);//se agrega la playlist
    music->setVolume(10);

    music->play();


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{

    QString name2 = ui->newname->text();
    std::string name = name2.toStdString();//cambio de QString para extraer datos de la Mainwindow para utilizar funciones
    QString password2 = ui->newpassword->text();
    std::string password = password2.toStdString();//cambio de QString para extraer datos de la Mainwindow para utilizar funciones
    int n=password.length();

    if(n==5){//condicional para saber el numero de caracteres necesarios
        escribirnewlogin(name, password);
        QMessageBox::information(this, tr("Nuevo usuario"), tr("Se ha guardado un nuevo usuario"));
    }
    else{
        ui->avisocm->setText("La contraseña debe\n ser de 5 caracteres");
    }
}



void MainWindow::on_Login_clicked()
{
    QString usuario2 = ui->usuario->text();
    usuario = usuario2.toStdString();//cambio de QString para extraer datos de la ui de Mainwindow para utilizar funciones

    QString contrase2 = ui->contrase->text();
    std::string contrase = contrase2.toStdString();

    string archivousu;
    bool val,valc;
    archivousu=leernuevousu(usuario,&val);//se confirma que el usuario exista
    if(val==true){//si el archivo esta bien val sera true

        valc=validarcontrase(archivousu,contrase);//se confirma que se escriba bien la contraseña
        if(valc==true){
            ui->ingresomal->setText("Acceso concedido");
            this->hide();
            Nivel nivel;
            std::string info=cargar(usuario);//se saca los valores
            //aqui va la funcion
            char numnivel= info[5];//se saca en que nivel esta
            string numdis=info.substr(11);//se saca el numero de disparos
            int numdis1=atoi(numdis.c_str());
            int numnivel1=numnivel-48;
            int bl1=info[6]-48;//se saca el estado de los objetivos
            int bl2=info[7]-48;
            int bl3=info[8]-48;
            int bl4=info[9]-48;
            int sco=info[10]-48;
            nivel.usuario=usuario;//se les pasa los valores a las privadas de nivel
            nivel.contrsmain=contrase;
            nivel.cargardo(numnivel1,numdis1,bl1,bl2,bl3,bl4,sco);//se carga el juego con los valores dados
            delete ui;
            nivel.setModal(true);//se cierra ui se abre ui de nivel
            nivel.exec();

        }
        else{
             ui->ingresomal->setText("Contraseña invalida");
        }

    }
    else{
        ui->ingresomal->setText("Ingreso mal el usuario\n o no se encuentra registrado");
    }


}

void MainWindow::on_multi_clicked()//se cierra ui se abre ui de multiplayer
{
    this->hide();
    Multiplayer multiplayer;
    multiplayer.setModal(true);
    multiplayer.exec();
}
