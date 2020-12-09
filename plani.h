#ifndef PLANI_H
#define PLANI_H
#include "QString"
#include "QSqlQuery"
#include "QSqlQueryModel"
class plani
{

public:
    plani();
    plani(QString id,QString nom,QString prenom,QString cin,QString heure);
    QString getid();
        QString getnom();
        QString getcin();
        QString getprenom();
         QString getheure();


        void setid(QString id);
        void setnom(QString nom);


        bool ajouter();
        QSqlQueryModel * afficher();
        bool supprimer(QString id);
    bool modifier(QString id,QString colonne,QString nouv);
    QSqlQueryModel * trier_plani();
    QSqlQueryModel * afficherchercher(QString id);
    QSqlQuery chercher_plani(QString idd);
        private:
        QString id;
        QString nom;
        QString prenom;
        QString heure ;
        QString cin;



};

#endif // PLANI_H
