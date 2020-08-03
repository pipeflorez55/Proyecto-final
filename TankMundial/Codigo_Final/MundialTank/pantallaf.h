#ifndef PANTALLAF_H
#define PANTALLAF_H

#include <QDialog>

namespace Ui {
class PantallaF;
}

class PantallaF : public QDialog
{
    Q_OBJECT

public:
    explicit PantallaF(QWidget *parent = nullptr);
    ~PantallaF();

private:
    Ui::PantallaF *ui;
};

#endif // PANTALLAF_H
