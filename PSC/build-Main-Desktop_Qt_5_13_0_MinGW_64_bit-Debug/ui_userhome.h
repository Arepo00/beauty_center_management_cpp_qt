/********************************************************************************
** Form generated from reading UI file 'userhome.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERHOME_H
#define UI_USERHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userhome
{
public:
    QPushButton *read;
    QPushButton *supprimer;
    QPushButton *ajouter;
    QPushButton *exit;

    void setupUi(QWidget *userhome)
    {
        if (userhome->objectName().isEmpty())
            userhome->setObjectName(QString::fromUtf8("userhome"));
        userhome->resize(400, 300);
        read = new QPushButton(userhome);
        read->setObjectName(QString::fromUtf8("read"));
        read->setGeometry(QRect(170, 50, 80, 16));
        supprimer = new QPushButton(userhome);
        supprimer->setObjectName(QString::fromUtf8("supprimer"));
        supprimer->setGeometry(QRect(170, 120, 80, 16));
        ajouter = new QPushButton(userhome);
        ajouter->setObjectName(QString::fromUtf8("ajouter"));
        ajouter->setGeometry(QRect(170, 200, 80, 16));
        exit = new QPushButton(userhome);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(170, 240, 80, 16));

        retranslateUi(userhome);

        QMetaObject::connectSlotsByName(userhome);
    } // setupUi

    void retranslateUi(QWidget *userhome)
    {
        userhome->setWindowTitle(QCoreApplication::translate("userhome", "Form", nullptr));
        read->setText(QCoreApplication::translate("userhome", "read", nullptr));
        supprimer->setText(QCoreApplication::translate("userhome", "supprimer", nullptr));
        ajouter->setText(QCoreApplication::translate("userhome", "ajouter", nullptr));
        exit->setText(QCoreApplication::translate("userhome", "exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userhome: public Ui_userhome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERHOME_H
