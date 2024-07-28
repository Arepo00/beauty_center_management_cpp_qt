#include "userlogin.h"
#include "ui_userlogin.h"

userlogin::userlogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userlogin)
{
    ui->setupUi(this);
    ptruserhome=new userhome;
    ptrfacture=new facture;
}

userlogin::~userlogin()
{
    delete ui;
    delete ptruserhome;
    delete ptrfacture;
}

void userlogin::on_connecter_clicked()
{
    ptruserhome->show();
    ptrfacture->show();
}
