#ifndef BACHA_H
#define BACHA_H

#include <QDialog>

namespace Ui {
class bacha;
}

class bacha : public QDialog
{
    Q_OBJECT

public:
    explicit bacha(QWidget *parent = nullptr);
    ~bacha();

private slots:

    void on_ajouter_clicked();

    void on_supprimer_clicked();

    void on_modifier_clicked();

    void on_ajouter2_clicked();

    void on_supprimer2_clicked();

    void on_modifier2_clicked();
    void on_affiche_clicked();

    void on_trier_clicked();

    void on_chercher_clicked();

    void on_affiche2_clicked();

    void on_trier2_clicked();

    void on_chercher2_clicked();
private:
    Ui::bacha *ui;
};

#endif // BACHA_H
