#ifndef EMPLOGIN_H
#define EMPLOGIN_H

#include <QWidget>
#include "emphome.h"

namespace Ui {
class emplogin;
}

class emplogin : public QWidget
{
    Q_OBJECT

public:
    explicit emplogin(QWidget *parent = nullptr);
    ~emplogin();

private slots:
    void on_connecter_clicked();

private:
    Ui::emplogin *ui;
    emphome *ptremphome;
};

#endif // EMPLOGIN_H
