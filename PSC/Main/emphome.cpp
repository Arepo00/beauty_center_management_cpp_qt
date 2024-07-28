#include "emphome.h"
#include "ui_emphome.h"

emphome::emphome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::emphome)
{
    ui->setupUi(this);
}

emphome::~emphome()
{
    delete ui;
}
