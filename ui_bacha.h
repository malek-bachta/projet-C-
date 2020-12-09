/********************************************************************************
** Form generated from reading UI file 'bacha.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACHA_H
#define UI_BACHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bacha
{
public:
    QTabWidget *tab1;
    QWidget *mat;
    QLabel *label_3;
    QFrame *lo;
    QLabel *label_10;
    QLineEdit *linenom;
    QLineEdit *lineetat;
    QLineEdit *linetype;
    QLineEdit *linequant;
    QPushButton *ajouter;
    QLabel *label_27;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLineEdit *lineid;
    QFrame *frame_3;
    QLineEdit *linesup;
    QPushButton *chercher;
    QPushButton *supprimer;
    QFrame *frame;
    QLineEdit *linemod;
    QPushButton *modifier;
    QComboBox *comboBox;
    QLabel *label_4;
    QLineEdit *lineidm;
    QFrame *frame_5;
    QFrame *frame_6;
    QPushButton *affiche;
    QPushButton *trier;
    QWidget *pla;
    QLabel *label;
    QLabel *label_2;
    QFrame *lo_2;
    QLabel *label_9;
    QLineEdit *linenom2;
    QLineEdit *linepre2;
    QLineEdit *linecin2;
    QPushButton *ajouter2;
    QLabel *label_33;
    QLabel *label_23;
    QLabel *label_22;
    QLabel *label_21;
    QLineEdit *lineid2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_6;
    QFrame *frame_2;
    QLineEdit *linesup2;
    QPushButton *chercher2;
    QPushButton *supprimer2;
    QFrame *frame_4;
    QLineEdit *linemod2;
    QPushButton *modifier2;
    QComboBox *comboBox_2;
    QLabel *label_5;
    QLineEdit *lineidm2;
    QFrame *frame_7;
    QPushButton *affiche2;
    QPushButton *trier2;

    void setupUi(QDialog *bacha)
    {
        if (bacha->objectName().isEmpty())
            bacha->setObjectName(QStringLiteral("bacha"));
        bacha->resize(775, 436);
        tab1 = new QTabWidget(bacha);
        tab1->setObjectName(QStringLiteral("tab1"));
        tab1->setGeometry(QRect(20, 10, 721, 431));
        mat = new QWidget();
        mat->setObjectName(QStringLiteral("mat"));
        label_3 = new QLabel(mat);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 10, 291, 20));
        lo = new QFrame(mat);
        lo->setObjectName(QStringLiteral("lo"));
        lo->setGeometry(QRect(0, 30, 281, 281));
        lo->setFrameShape(QFrame::StyledPanel);
        lo->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(lo);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 10, 47, 13));
        linenom = new QLineEdit(lo);
        linenom->setObjectName(QStringLiteral("linenom"));
        linenom->setGeometry(QRect(140, 30, 113, 20));
        lineetat = new QLineEdit(lo);
        lineetat->setObjectName(QStringLiteral("lineetat"));
        lineetat->setGeometry(QRect(140, 60, 113, 20));
        linetype = new QLineEdit(lo);
        linetype->setObjectName(QStringLiteral("linetype"));
        linetype->setGeometry(QRect(140, 90, 113, 20));
        linequant = new QLineEdit(lo);
        linequant->setObjectName(QStringLiteral("linequant"));
        linequant->setGeometry(QRect(140, 120, 113, 20));
        ajouter = new QPushButton(lo);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(110, 250, 75, 23));
        label_27 = new QLabel(lo);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(50, 160, 47, 13));
        label_29 = new QLabel(lo);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(50, 120, 47, 13));
        label_30 = new QLabel(lo);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(40, 90, 47, 13));
        label_31 = new QLabel(lo);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(40, 60, 47, 13));
        label_32 = new QLabel(lo);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(40, 30, 47, 13));
        lineid = new QLineEdit(lo);
        lineid->setObjectName(QStringLiteral("lineid"));
        lineid->setGeometry(QRect(140, 160, 113, 21));
        frame_3 = new QFrame(mat);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(290, 30, 151, 261));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        linesup = new QLineEdit(frame_3);
        linesup->setObjectName(QStringLiteral("linesup"));
        linesup->setGeometry(QRect(10, 100, 113, 20));
        chercher = new QPushButton(frame_3);
        chercher->setObjectName(QStringLiteral("chercher"));
        chercher->setGeometry(QRect(30, 150, 75, 23));
        supprimer = new QPushButton(frame_3);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(30, 190, 75, 23));
        frame = new QFrame(mat);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(450, 40, 181, 251));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        linemod = new QLineEdit(frame);
        linemod->setObjectName(QStringLiteral("linemod"));
        linemod->setGeometry(QRect(82, 110, 81, 20));
        modifier = new QPushButton(frame);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(34, 180, 121, 23));
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 110, 62, 22));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 80, 47, 14));
        lineidm = new QLineEdit(frame);
        lineidm->setObjectName(QStringLiteral("lineidm"));
        lineidm->setGeometry(QRect(70, 80, 101, 20));
        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(0, 240, 120, 80));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_6 = new QFrame(mat);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(390, 310, 241, 41));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        affiche = new QPushButton(frame_6);
        affiche->setObjectName(QStringLiteral("affiche"));
        affiche->setGeometry(QRect(150, 10, 75, 23));
        trier = new QPushButton(frame_6);
        trier->setObjectName(QStringLiteral("trier"));
        trier->setGeometry(QRect(60, 10, 75, 23));
        tab1->addTab(mat, QString());
        pla = new QWidget();
        pla->setObjectName(QStringLiteral("pla"));
        label = new QLabel(pla);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 10, 91, 21));
        label_2 = new QLabel(pla);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 10, 341, 20));
        lo_2 = new QFrame(pla);
        lo_2->setObjectName(QStringLiteral("lo_2"));
        lo_2->setGeometry(QRect(20, 40, 281, 281));
        lo_2->setFrameShape(QFrame::StyledPanel);
        lo_2->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(lo_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 10, 47, 13));
        linenom2 = new QLineEdit(lo_2);
        linenom2->setObjectName(QStringLiteral("linenom2"));
        linenom2->setGeometry(QRect(140, 30, 113, 20));
        linepre2 = new QLineEdit(lo_2);
        linepre2->setObjectName(QStringLiteral("linepre2"));
        linepre2->setGeometry(QRect(140, 60, 113, 20));
        linecin2 = new QLineEdit(lo_2);
        linecin2->setObjectName(QStringLiteral("linecin2"));
        linecin2->setGeometry(QRect(140, 90, 113, 20));
        ajouter2 = new QPushButton(lo_2);
        ajouter2->setObjectName(QStringLiteral("ajouter2"));
        ajouter2->setGeometry(QRect(110, 250, 75, 23));
        label_33 = new QLabel(lo_2);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(60, 220, 47, 13));
        label_23 = new QLabel(lo_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(40, 90, 47, 13));
        label_22 = new QLabel(lo_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(40, 60, 47, 13));
        label_21 = new QLabel(lo_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(40, 30, 47, 13));
        lineid2 = new QLineEdit(lo_2);
        lineid2->setObjectName(QStringLiteral("lineid2"));
        lineid2->setGeometry(QRect(130, 220, 113, 21));
        dateTimeEdit = new QDateTimeEdit(lo_2);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(70, 130, 194, 22));
        label_6 = new QLabel(lo_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 130, 47, 14));
        frame_2 = new QFrame(pla);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(320, 50, 151, 261));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        linesup2 = new QLineEdit(frame_2);
        linesup2->setObjectName(QStringLiteral("linesup2"));
        linesup2->setGeometry(QRect(10, 100, 113, 20));
        chercher2 = new QPushButton(frame_2);
        chercher2->setObjectName(QStringLiteral("chercher2"));
        chercher2->setGeometry(QRect(30, 150, 75, 23));
        supprimer2 = new QPushButton(frame_2);
        supprimer2->setObjectName(QStringLiteral("supprimer2"));
        supprimer2->setGeometry(QRect(30, 190, 75, 23));
        frame_4 = new QFrame(pla);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(480, 50, 181, 251));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        linemod2 = new QLineEdit(frame_4);
        linemod2->setObjectName(QStringLiteral("linemod2"));
        linemod2->setGeometry(QRect(82, 110, 81, 20));
        modifier2 = new QPushButton(frame_4);
        modifier2->setObjectName(QStringLiteral("modifier2"));
        modifier2->setGeometry(QRect(34, 180, 121, 23));
        comboBox_2 = new QComboBox(frame_4);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 110, 62, 22));
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 80, 47, 14));
        lineidm2 = new QLineEdit(frame_4);
        lineidm2->setObjectName(QStringLiteral("lineidm2"));
        lineidm2->setGeometry(QRect(70, 80, 101, 20));
        frame_7 = new QFrame(pla);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(410, 310, 251, 41));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        affiche2 = new QPushButton(frame_7);
        affiche2->setObjectName(QStringLiteral("affiche2"));
        affiche2->setGeometry(QRect(160, 10, 75, 23));
        trier2 = new QPushButton(frame_7);
        trier2->setObjectName(QStringLiteral("trier2"));
        trier2->setGeometry(QRect(70, 10, 75, 23));
        tab1->addTab(pla, QString());

        retranslateUi(bacha);

        tab1->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(bacha);
    } // setupUi

    void retranslateUi(QDialog *bacha)
    {
        bacha->setWindowTitle(QApplication::translate("bacha", "Dialog", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        tab1->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_3->setText(QApplication::translate("bacha", "GESTION MATERIELS", Q_NULLPTR));
        label_10->setText(QApplication::translate("bacha", "AJOUTER", Q_NULLPTR));
        ajouter->setText(QApplication::translate("bacha", "ajouter", Q_NULLPTR));
        label_27->setText(QApplication::translate("bacha", "I D", Q_NULLPTR));
        label_29->setText(QApplication::translate("bacha", "quantite", Q_NULLPTR));
        label_30->setText(QApplication::translate("bacha", "type", Q_NULLPTR));
        label_31->setText(QApplication::translate("bacha", "etat", Q_NULLPTR));
        label_32->setText(QApplication::translate("bacha", "nom", Q_NULLPTR));
        chercher->setText(QApplication::translate("bacha", "chercher", Q_NULLPTR));
        supprimer->setText(QApplication::translate("bacha", "supprimer", Q_NULLPTR));
        modifier->setText(QApplication::translate("bacha", "modifier", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("bacha", "age", Q_NULLPTR)
         << QApplication::translate("bacha", "nom", Q_NULLPTR)
         << QApplication::translate("bacha", "prenom", Q_NULLPTR)
         << QApplication::translate("bacha", "salaire", Q_NULLPTR)
         << QApplication::translate("bacha", "poste", Q_NULLPTR)
         << QApplication::translate("bacha", "cin", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("bacha", "       ID:", Q_NULLPTR));
        affiche->setText(QApplication::translate("bacha", "afficher", Q_NULLPTR));
        trier->setText(QApplication::translate("bacha", "trier", Q_NULLPTR));
        tab1->setTabText(tab1->indexOf(mat), QApplication::translate("bacha", "materiels", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("bacha", "GESTION PLANIFICATION", Q_NULLPTR));
        label_9->setText(QApplication::translate("bacha", "AJOUTER", Q_NULLPTR));
        ajouter2->setText(QApplication::translate("bacha", "ajouter", Q_NULLPTR));
        label_33->setText(QApplication::translate("bacha", "I D", Q_NULLPTR));
        label_23->setText(QApplication::translate("bacha", "cin", Q_NULLPTR));
        label_22->setText(QApplication::translate("bacha", "prenom", Q_NULLPTR));
        label_21->setText(QApplication::translate("bacha", "nom", Q_NULLPTR));
        label_6->setText(QApplication::translate("bacha", "heure", Q_NULLPTR));
        chercher2->setText(QApplication::translate("bacha", "chercher", Q_NULLPTR));
        supprimer2->setText(QApplication::translate("bacha", "supprimer", Q_NULLPTR));
        modifier2->setText(QApplication::translate("bacha", "modifier", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("bacha", "age", Q_NULLPTR)
         << QApplication::translate("bacha", "nom", Q_NULLPTR)
         << QApplication::translate("bacha", "prenom", Q_NULLPTR)
         << QApplication::translate("bacha", "salaire", Q_NULLPTR)
         << QApplication::translate("bacha", "poste", Q_NULLPTR)
         << QApplication::translate("bacha", "cin", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("bacha", "       ID:", Q_NULLPTR));
        affiche2->setText(QApplication::translate("bacha", "afficher", Q_NULLPTR));
        trier2->setText(QApplication::translate("bacha", "trier", Q_NULLPTR));
        tab1->setTabText(tab1->indexOf(pla), QApplication::translate("bacha", "planification", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bacha: public Ui_bacha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACHA_H
