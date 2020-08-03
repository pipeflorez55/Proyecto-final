#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <funcioneslogin.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_3_clicked();//boton para confirmar un nuevo usuario



    void on_Login_clicked();//boton para ingresar al juego


    void on_multi_clicked();//boton para iniciar el multijugador

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H