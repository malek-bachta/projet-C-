#include "plani.h"
#include "QString"
#include<QDebug>
plani::plani()
{

}
plani::plani(QString id,QString nom,QString prenom,QString cin,QString heure)
{this->id=id;
 this->nom=nom;
 this->prenom=prenom;
 this->cin=cin;


 this->heure=heure;

  }



bool plani::ajouter(){
  QSqlQuery query;


  query.prepare("INSERT INTO planification(nom,prenom,id,cin,heure)" "VALUES ( :nom, :prenom, :id, :cin, :heure)");
                           query.bindValue(":nom",nom);
                           query.bindValue(":prenom",prenom);
                           query.bindValue(":id",id);

                           query.bindValue(":cin",cin);
                           query.bindValue(":heure",heure);


                   return query.exec();
           }
bool plani::supprimer(QString id){
    QSqlQuery query;
    query.prepare("DELETE FROM planification where ID= :id");
            query.bindValue(":id",id);
    return query.exec();

}
QSqlQueryModel  * plani:: afficher(){
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * from planification");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("heure"));

return model;


}
bool plani::modifier(QString id,QString colonne,QString nouv){

    QSqlQuery query;


if(colonne=="nom"){
        query.prepare("update planification set nom=?  where cin =?");
        query.addBindValue(nouv);
query.addBindValue(id);
}
if(colonne=="prenom"){
        query.prepare("update planification set nom=?  where cin =?");
        query.addBindValue(nouv);
query.addBindValue(id);
}
if(colonne=="cin"){
        query.prepare("update planification set nom=?  where cin =?");
        query.addBindValue(nouv);
query.addBindValue(id);
}
qDebug()<<colonne<<nouv<<id;
return query.exec();

}

QSqlQueryModel * plani::trier_plani()
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("SELECT * from planification ORDER BY NOM ASC");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("cin"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("heure"));
return model;
}

QSqlQuery plani::chercher_plani(QString idd){
    QSqlQuery q;
q.prepare("select * from planification where ID=?");
q.addBindValue(idd);
    return q;
}

QSqlQueryModel * plani::afficherchercher(QString id){
    qDebug()<<id;


    QSqlQuery q;
    q.prepare("select * from planification where ID=?");
    q.addBindValue(id);
q.exec();
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery(q);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("heure"));
    return model;

}
