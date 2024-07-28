#include "userhome.h"
#include "ui_userhome.h"

userhome::userhome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userhome)
{
    ui->setupUi(this);
}

userhome::~userhome()
{
    delete ui;
}
