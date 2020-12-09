#ifndef MATRIEL_H
#define MATRIEL_H
#include "QString"
#include "QSqlQuery"
#include "QSqlQueryModel"

class matriel
{
public:
    matriel();
matriel(QString id,QString etat,QString type,QString quantite,QString nom);
    QString getid();
        QString getnom();
        QString getcin();
        QString getprenom();
        bool ajouter();
        QSqlQueryModel * afficher();
        bool supprimer(QString id);
    bool modifier(QString id,QString colonne,QString nouv);
    QSqlQueryModel * trier_matriel();
    QSqlQueryModel * afficherchercher(QString id);
    QSqlQuery chercher_matriel(QString idd);
        private:
        QString type;
        QString quantite;
         QString nom;
        QString id;
        QString etat;
        };


#endif // MATRIEL_H
