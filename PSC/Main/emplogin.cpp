#include "emplogin.h"
#include "ui_emplogin.h"

emplogin::emplogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::emplogin)
{
    ui->setupUi(this);
    ptremphome=new emphome;
}

emplogin::~emplogin()
{
    delete ui;
    delete ptremphome;
}

void emplogin::on_connecter_clicked()
{
    ptremphome->show();
}
