#ifndef EMPHOME_H
#define EMPHOME_H

#include <QWidget>

namespace Ui {
class emphome;
}

class emphome : public QWidget
{
    Q_OBJECT

public:
    explicit emphome(QWidget *parent = nullptr);
    ~emphome();

private:
    Ui::emphome *ui;
};

#endif // EMPHOME_H
