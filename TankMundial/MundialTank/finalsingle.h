#ifndef FINALSINGLE_H
#define FINALSINGLE_H

#include <QDialog>
#include "funcioneslogin.h"
namespace Ui {
class Finalsingle;
}

class Finalsingle : public QDialog
{
    Q_OBJECT

public:
    explicit Finalsingle(QWidget *parent = nullptr);
    ~Finalsingle();
    void podiof(std::string inpo);//muestra el podio en labels

private slots:
    void on_menu_clicked();//boton para regresar al menu

private:
    Ui::Finalsingle *ui;

};

#endif // FINALSINGLE_H
