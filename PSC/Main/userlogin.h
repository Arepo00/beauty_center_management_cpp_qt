#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <QWidget>
#include "userhome.h"
#include "facture.h"

namespace Ui {
class userlogin;
}

class userlogin : public QWidget
{
    Q_OBJECT

public:
    explicit userlogin(QWidget *parent = nullptr);
    ~userlogin();

private slots:
    void on_connecter_clicked();

private:
    Ui::userlogin *ui;
    userhome *ptruserhome;
    facture *ptrfacture;
};

#endif // USERLOGIN_H
