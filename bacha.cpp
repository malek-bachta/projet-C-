#include "bacha.h"
#include "ui_bacha.h"
#include "matriel.h"
#include <QMessageBox>
#include "dialogkha.h"
#include "dialogbacha.h"
#include "plani.h"


bacha::bacha(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bacha)
{
    ui->setupUi(this);
}

bacha::~bacha()
{
    delete ui;
}
void bacha::on_ajouter_clicked()
{
   QString id=ui->lineid->text();
   QString etat=ui->lineetat->text();
   QString quantite=ui->linequant->text();
   QString nom=ui->linenom->text();
   QString type=ui->linetype->text();
   matriel e(id,etat,type,quantite,nom);
            bool test=e.ajouter();
    if(test){
        QMessageBox::information(this, "ajouter", "ajout effectuer ");

       }
    else
        QMessageBox::information(this, "ajouter", "echec ");
}

void bacha::on_supprimer_clicked()
{
    matriel e;
    QString id=ui->linesup->text();
    bool test=e.supprimer(id);
            if(test){
                QMessageBox::information(this, "modifier", "sup effectuer ");

               }
            else
                QMessageBox::information(this, "modifier", "echec ");
}

void bacha::on_modifier_clicked()
{
    matriel e;
QString colonne=ui->comboBox->currentText();
QString nouv=ui->linemod->text();
QString id=ui->lineidm->text();
bool test=e.modifier(id,colonne,nouv);
        if(test){
            QMessageBox::information(this, "modifier", "modification effectuer ");

           }
        else
            QMessageBox::information(this, "modifier", "echec ");
}

void bacha::on_ajouter2_clicked()
{
    QString id =ui->lineid2->text();
    QString nom =ui->linenom2->text();
    QString prenom =ui->linepre2->text();
QString cin=ui->linecin2->text();
QString heure=ui->dateTimeEdit->text();
    plani e(id,nom,prenom,cin,heure);
            bool test=e.ajouter();
    if(test){
        QMessageBox::information(this, "ajouter", "ajout effectuer ");

       }
    else
        QMessageBox::information(this, "ajouter", "echec ");
}

void bacha::on_supprimer2_clicked()
{
    plani e;
    QString id=ui->linesup2->text();
    bool test=e.supprimer(id);
            if(test){
                QMessageBox::information(this, "modifier", "sup effectuer ");

               }
            else
                QMessageBox::information(this, "modifier", "echec ");
}

void bacha::on_modifier2_clicked()
{
    plani e;
QString colonne=ui->comboBox->currentText();
QString nouv=ui->linemod2->text();
QString id=ui->lineidm2->text();
bool test=e.modifier(id,colonne,nouv);
        if(test){
            QMessageBox::information(this, "modifier", "modification effectuer ");

           }
        else
            QMessageBox::information(this, "modifier", "echec ");
}
void bacha::on_affiche_clicked()
{
Dialogbacha d;
d.exec();
}

void bacha::on_trier_clicked()
{
    Dialogbacha d(nullptr,1);
    d.exec();
}

void bacha::on_chercher_clicked()
{
    Dialogbacha d(nullptr,2,ui->linesup->text());
    d.exec();
}

void bacha::on_affiche2_clicked()
{
    Dialogbacha d(nullptr,3);
    d.exec();
}

void bacha::on_trier2_clicked()
{
    Dialogbacha d(nullptr,4);
    d.exec();
}

void bacha::on_chercher2_clicked()
{ Dialogbacha d(nullptr,5,ui->linesup2->text());
    d.exec();

}



