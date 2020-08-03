#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include <string>
#include <funcioneslogin.h>
namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_pushButton_clicked();//boton para confirmar un nuevo usuario

    void on_pushButton_3_clicked();//boton para ingresar al juego

    void on_multi_clicked();//boton para iniciar el multijugador

private:
    Ui::Menu *ui;
};

#endif // MENU_H
