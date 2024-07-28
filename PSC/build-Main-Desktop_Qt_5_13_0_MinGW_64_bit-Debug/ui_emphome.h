/********************************************************************************
** Form generated from reading UI file 'emphome.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPHOME_H
#define UI_EMPHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_emphome
{
public:
    QPushButton *consultation;
    QPushButton *ajouterservice;
    QPushButton *calendrier;
    QPushButton *ajouteremp;

    void setupUi(QWidget *emphome)
    {
        if (emphome->objectName().isEmpty())
            emphome->setObjectName(QString::fromUtf8("emphome"));
        emphome->resize(400, 300);
        consultation = new QPushButton(emphome);
        consultation->setObjectName(QString::fromUtf8("consultation"));
        consultation->setGeometry(QRect(19, 30, 361, 20));
        ajouterservice = new QPushButton(emphome);
        ajouterservice->setObjectName(QString::fromUtf8("ajouterservice"));
        ajouterservice->setGeometry(QRect(20, 60, 361, 20));
        calendrier = new QPushButton(emphome);
        calendrier->setObjectName(QString::fromUtf8("calendrier"));
        calendrier->setGeometry(QRect(20, 120, 361, 20));
        ajouteremp = new QPushButton(emphome);
        ajouteremp->setObjectName(QString::fromUtf8("ajouteremp"));
        ajouteremp->setGeometry(QRect(20, 170, 361, 20));

        retranslateUi(emphome);

        QMetaObject::connectSlotsByName(emphome);
    } // setupUi

    void retranslateUi(QWidget *emphome)
    {
        emphome->setWindowTitle(QCoreApplication::translate("emphome", "Form", nullptr));
        consultation->setText(QCoreApplication::translate("emphome", "consultation stock", nullptr));
        ajouterservice->setText(QCoreApplication::translate("emphome", "ajouter service", nullptr));
        calendrier->setText(QCoreApplication::translate("emphome", "calendrier des reservation", nullptr));
        ajouteremp->setText(QCoreApplication::translate("emphome", "ajouter employer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class emphome: public Ui_emphome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPHOME_H
