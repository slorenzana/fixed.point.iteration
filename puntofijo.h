#ifndef PUNTOFIJO_H
#define PUNTOFIJO_H

#include <QMainWindow>

namespace Ui {
class PuntoFijo;
}

class PuntoFijo : public QMainWindow
{
    Q_OBJECT

public slots:
    void valor_raiz();

public:
    explicit PuntoFijo(QWidget *parent = 0);
    ~PuntoFijo();
    double xi;
    double error;
    double fx;
    double ea;

private:
    Ui::PuntoFijo *ui;
};

#endif // PUNTOFIJO_H
