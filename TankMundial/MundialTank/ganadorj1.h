#ifndef GANADORJ1_H
#define GANADORJ1_H

#include <QDialog>

namespace Ui {
class GanadorJ1;
}

class GanadorJ1 : public QDialog
{
    Q_OBJECT

public:
    explicit GanadorJ1(QWidget *parent = nullptr);
    ~GanadorJ1();

private slots:
    void on_menu_clicked();

private:
    Ui::GanadorJ1 *ui;
};

#endif // GANADORJ1_H
