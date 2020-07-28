#include "menu.h"
#include "ui_menu.h"
#include "nivel.h"
#include "funcioneslogin.h"
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
    std::string usuario="1", contrase="12345";
    this->hide();
    Nivel nivel;

    std::string info=cargar(usuario);
    //aqui va la funcion
    char numnivel= info[5];
    std::string numdis=info.substr(11);
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
    nivel.setModal(true);
    nivel.exec();
}
