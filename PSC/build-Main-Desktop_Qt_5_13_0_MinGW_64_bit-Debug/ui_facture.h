/********************************************************************************
** Form generated from reading UI file 'facture.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTURE_H
#define UI_FACTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_facture
{
public:

    void setupUi(QWidget *facture)
    {
        if (facture->objectName().isEmpty())
            facture->setObjectName(QString::fromUtf8("facture"));
        facture->resize(400, 300);

        retranslateUi(facture);

        QMetaObject::connectSlotsByName(facture);
    } // setupUi

    void retranslateUi(QWidget *facture)
    {
        facture->setWindowTitle(QCoreApplication::translate("facture", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class facture: public Ui_facture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTURE_H
