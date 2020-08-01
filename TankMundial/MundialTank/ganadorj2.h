#ifndef GANADORJ2_H
#define GANADORJ2_H

#include <QDialog>

namespace Ui {
class GanadorJ2;
}

class GanadorJ2 : public QDialog
{
    Q_OBJECT

public:
    explicit GanadorJ2(QWidget *parent = nullptr);
    ~GanadorJ2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GanadorJ2 *ui;
};

#endif // GANADORJ2_H
