#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptruserlogin = new userlogin;
    ptremplogin = new emplogin;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptruserlogin;
    delete ptremplogin;
}

void MainWindow::on_utilisateur_clicked()
{
    ptruserlogin->show();
}

void MainWindow::on_employer_clicked()
{
    ptremplogin->show();
}
