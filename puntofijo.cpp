#include "puntofijo.h"
#include "ui_puntofijo.h"
PuntoFijo::PuntoFijo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PuntoFijo)
{
    ui->setupUi(this);
    connect(ui->pushButton_entrar,SIGNAL(clicked()),this,SLOT(valor_raiz()));
}
PuntoFijo::~PuntoFijo()
{
    delete ui;
}
void PuntoFijo::valor_raiz(){
    xi=0;
    ea=0;
    error=100;
    xi=ui->Valor_xi->value();
    ea=ui->Valor_ea->value();
    do{
        fx=((3-(xi*xi))/2);
        ea=100*abs((xi-fx)/xi);
            if(fx>0){
                xi=fx;
            }
    } while(ea>error);
    ui->lcdNumber->display(xi);
}
