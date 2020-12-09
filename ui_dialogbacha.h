/********************************************************************************
** Form generated from reading UI file 'dialogbacha.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBACHA_H
#define UI_DIALOGBACHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Dialogbacha
{
public:
    QDialogButtonBox *buttonBox;
    QTableView *tableView;

    void setupUi(QDialog *Dialogbacha)
    {
        if (Dialogbacha->objectName().isEmpty())
            Dialogbacha->setObjectName(QStringLiteral("Dialogbacha"));
        Dialogbacha->resize(666, 435);
        buttonBox = new QDialogButtonBox(Dialogbacha);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(310, 390, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableView = new QTableView(Dialogbacha);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 10, 631, 381));

        retranslateUi(Dialogbacha);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialogbacha, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialogbacha, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialogbacha);
    } // setupUi

    void retranslateUi(QDialog *Dialogbacha)
    {
        Dialogbacha->setWindowTitle(QApplication::translate("Dialogbacha", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialogbacha: public Ui_Dialogbacha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBACHA_H
