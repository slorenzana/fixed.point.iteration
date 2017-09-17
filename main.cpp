#include "fijo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    fijo w;
    w.show();

    return a.exec();
}
