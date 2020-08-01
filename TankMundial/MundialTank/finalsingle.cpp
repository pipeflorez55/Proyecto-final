#include "finalsingle.h"
#include "ui_finalsingle.h"
#include "menu.h"

Finalsingle::Finalsingle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Finalsingle)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/pantallafinal.png"));
    podiof(cargar("podio/podio"));
}

Finalsingle::~Finalsingle()
{
    delete ui;
}

void Finalsingle::podiof(string inpo)
{
    int flag=-1;
    int cnt=0;
    int contpo=1;
    int lec1=0;
    string a;
    string tren;
    string infoc=inpo;

    QString numdisp;
    for(int i=0;i<inpo.length()-1;i++){
        if(inpo[i]=='|'){
            if(lec1>=1){
                flag*=-1;
            }
            lec1++;
        }
        if(flag==1){
           cnt++;
           if(cnt>4){
             a+=inpo[i];
           }
        }
        if(lec1>1){
            if(flag==-1){
                numdisp=QString::fromStdString(a);
                string nombre;
                if(a.length()==3){
                    nombre=inpo.substr(i-6,3);
                }
                if(a.length()==2){
                    nombre=inpo.substr(i-5,3);
                }
                QString nombre1=QString::fromStdString(nombre);
                a="";
                if(contpo==1){
                    ui->nm1->setText(nombre1);
                    ui->num1->setText(numdisp);
                }
                if(contpo==2){
                    ui->nm2->setText(nombre1);
                    ui->num2->setText(numdisp);
                }
                if(contpo==3){
                    ui->nm3->setText(nombre1);
                    ui->num3->setText(numdisp);
                }
                if(contpo==4){
                    ui->nm4->setText(nombre1);
                    ui->num4->setText(numdisp);
                }
                if(contpo==5){
                    ui->nm5->setText(nombre1);
                    ui->num5->setText(numdisp);
                }
                if(contpo==6){
                    ui->nm6->setText(nombre1);
                    ui->num6->setText(numdisp);
                }
                if(contpo==7){
                    ui->lnm7->setText(nombre1);
                    ui->num7->setText(numdisp);
                }
                if(contpo==8){
                    ui->nm8->setText(nombre1);
                    ui->num8->setText(numdisp);
                }
                if(contpo==9){
                    ui->nm9->setText(nombre1);
                    ui->num9->setText(numdisp);
                }
                if(contpo==10){
                    ui->nm10->setText(nombre1);
                    ui->num10->setText(numdisp);
                }
                contpo++;

                cnt=0;
            }
        }
    }

}

void Finalsingle::on_menu_clicked()
{
    delete ui;
    this->hide();
    Menu menu;
    menu.setModal(true);
    menu.exec();
}
