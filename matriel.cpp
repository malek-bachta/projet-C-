#include "matriel.h"
#include "QString"
#include<QDebug>

matriel::matriel()
{
}



matriel::matriel(QString id,QString etat,QString type,QString quantite,QString nom)
{
this->id=id;
this->nom=nom;
this->etat=etat;
this->type=type;

this->quantite=quantite;


  }



bool matriel::ajouter(){
  QSqlQuery query;

  if(query.prepare("INSERT INTO matriel(id,etat,type,quantite,nom)" "VALUES ( :id, :etat, :type, :quantite, :nom)"))
      qDebug()<< "ronaldo";
                           query.bindValue(":id",id);
                           query.bindValue(":etat",etat);
                           query.bindValue(":type",type);

                           query.bindValue(":quantite",quantite);
                           query.bindValue(":nom",nom);

                   return query.exec();
           }
bool matriel::supprimer(QString id){
    QSqlQuery query;
    query.prepare("DELETE FROM matriel where ID= :id");
            query.bindValue(":id",id);
    return query.exec();

}
QSqlQueryModel  * matriel:: afficher(){
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * from matriel");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("quantite"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("type"));
return model;


}
bool matriel::modifier(QString id,QString colonne,QString nouv){

    QSqlQuery query;

if(colonne =="nom"){
        query.prepare("update matriel set nom=?  where id =?");
        query.addBindValue(nouv);
query.addBindValue(id);
}
if(colonne =="etat"){
        query.prepare("update matriel set etat=?  where id =?");
        query.addBindValue(nouv);
query.addBindValue(id);
}
if(colonne =="type"){
        query.prepare("update matriel set type=?  where id =?");
        query.addBindValue(nouv);
query.addBindValue(id);
}
if(colonne =="quantite"){
        query.prepare("update matriel set quantite=?  where id =?");
        query.addBindValue(nouv);
query.addBindValue(id);
}
qDebug()<<colonne<<nouv<<id;
return query.exec();

}

QSqlQueryModel * matriel::trier_matriel()

{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("SELECT * from matriel ORDER BY NOM ASC");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("etat"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("quantite"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("type"));
return model;

}

QSqlQuery matriel::chercher_matriel(QString idd){
    QSqlQuery q;
q.prepare("select * from matriel where ID=?");
q.addBindValue(idd);
    return q;
}

QSqlQueryModel * matriel::afficherchercher(QString id){
    qDebug()<<id;


    QSqlQuery q;
    q.prepare("select * from matriel where ID=?");
    q.addBindValue(id);
q.exec();
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery(q);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("quantite"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("type"));
    return model;

}


