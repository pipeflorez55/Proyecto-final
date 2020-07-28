#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nivel.h"
#include "multiplayer.h"
#include "QMessageBox"
#include <cstdlib>

std::string usuario;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
        ui->avisocm->setText("La contraseña debe ser de 5 caracteres");
    }
}



void MainWindow::on_Login_clicked()
{
    QString usuario2 = ui->usuario->text();
    usuario = usuario2.toStdString();

    QString contrase2 = ui->contrase->text();
    std::string contrase = contrase2.toStdString();

    string archivousu;
    bool val,valc;
    archivousu=leernuevousu(usuario,&val);
    if(val==true){

        valc=validarcontrase(archivousu,contrase);
        if(valc==true){
            ui->ingresomal->setText("Acceso concedido");
            this->hide();
            Nivel nivel;
            std::string info=cargar(usuario);
            //aqui va la funcion
            char numnivel= info[5];
            string numdis=info.substr(11);
            int numdis1=atoi(numdis.c_str());
            int numnivel1=numnivel-48;
            int bl1=info[6]-48;
            int bl2=info[7]-48;
            int bl3=info[8]-48;
            int bl4=info[9]-48;
            int sco=info[10]-48;
            nivel.usuario=usuario;
            nivel.contrsmain=contrase;
            nivel.cargardo(numnivel1,numdis1,bl1,bl2,bl3,bl4,sco);
           // ui->setupUi(Nivel);
            nivel.setModal(true);
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

void MainWindow::on_multi_clicked()
{
    this->hide();
    Multiplayer multiplayer;
    multiplayer.setModal(true);
    multiplayer.exec();
}
