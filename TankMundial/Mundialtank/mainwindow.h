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
    void actualizar();

private slots:
    void on_pushButton_3_clicked();



    void on_Login_clicked();


    void on_multi_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
