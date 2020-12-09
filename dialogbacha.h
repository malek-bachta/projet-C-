#ifndef DIALOGBACHA_H
#define DIALOGBACHA_H

#include <QDialog>

namespace Ui {
class Dialogbacha;
}

class Dialogbacha : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogbacha(QWidget *parent = nullptr,int k=0,QString id="");
    ~Dialogbacha();

private:
    Ui::Dialogbacha *ui;
};

#endif // DIALOGBACHA_H
