#include "mainwindow.h"
#include "ui_mainwindow.h"


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

        }
        else{
             ui->ingresomal->setText("Contraseña invalida");
        }

    }
    else{
        ui->ingresomal->setText("Ingreso mal el usuario\n o no se encuentra registrado");
    }





}
