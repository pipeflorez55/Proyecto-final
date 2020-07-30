#include "menu.h"
#include "ui_menu.h"
#include "nivel.h"
#include "funcioneslogin.h"
#include "multiplayer.h"
#include "QMessageBox"
std::string usuarios;

Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    QString usuario2 = ui->usuario->text();
    usuarios = usuario2.toStdString();

    QString contrase2 = ui->contrase->text();
    std::string contrase = contrase2.toStdString();

    string archivousu;
    bool val,valc;
    archivousu=leernuevousu(usuarios,&val);
    if(val==true){

        valc=validarcontrase(archivousu,contrase);
        if(valc==true){
            ui->ingresomal->setText("Acceso concedido");
            this->hide();
            Nivel nivel;
            std::string info=cargar(usuarios);
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
            nivel.usuario=usuarios;
            nivel.contrsmain=contrase;
            nivel.cargardo(numnivel1,numdis1,bl1,bl2,bl3,bl4,sco);
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
void Menu::on_pushButton_3_clicked()
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

void Menu::on_multi_clicked()
{
    this->hide();
    Multiplayer multiplayer;
    multiplayer.setModal(true);
    multiplayer.exec();
}
