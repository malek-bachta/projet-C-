#include "dialogbacha.h"
#include "ui_dialogbacha.h"
#include "matriel.h"
#include "plani.h"

Dialogbacha::Dialogbacha(QWidget *parent,int k,QString id) :
    QDialog(parent),
    ui(new Ui::Dialogbacha)
{
    ui->setupUi(this);
    matriel c;
    plani ce;
    ui->setupUi(this);
    if(k==0){
ui->tableView->setModel(c.afficher());
    }
    if(k==1){

        ui->tableView->setModel(c.trier_matriel());
        }
    if(k==2){
         ui->tableView->setModel(c.afficherchercher(id));
}
if(k==3){
 ui->tableView->setModel(ce.afficher());
}
if(k==4){

    ui->tableView->setModel(ce.trier_plani());
    }
if(k==5){
     ui->tableView->setModel(ce.afficherchercher(id));
}
}

Dialogbacha::~Dialogbacha()
{
    delete ui;
}
