#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "userlogin.h"
#include "emplogin.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_utilisateur_clicked();

    void on_employer_clicked();

private:
    Ui::MainWindow *ui;
    userlogin *ptruserlogin;
    emplogin *ptremplogin;
};

#endif // MAINWINDOW_H
