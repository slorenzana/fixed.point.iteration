#include "puntofijo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PuntoFijo w;
    w.show();

    return a.exec();
}
