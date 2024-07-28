#ifndef USERHOME_H
#define USERHOME_H

#include <QWidget>

namespace Ui {
class userhome;
}

class userhome : public QWidget
{
    Q_OBJECT

public:
    explicit userhome(QWidget *parent = nullptr);
    ~userhome();

private:
    Ui::userhome *ui;
};

#endif // USERHOME_H
