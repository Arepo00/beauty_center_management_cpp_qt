/********************************************************************************
** Form generated from reading UI file 'emplogin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOGIN_H
#define UI_EMPLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_emplogin
{
public:
    QLineEdit *lineEdit;
    QPushButton *connecter;
    QLabel *label;

    void setupUi(QWidget *emplogin)
    {
        if (emplogin->objectName().isEmpty())
            emplogin->setObjectName(QString::fromUtf8("emplogin"));
        emplogin->resize(400, 300);
        lineEdit = new QLineEdit(emplogin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(92, 120, 221, 20));
        connecter = new QPushButton(emplogin);
        connecter->setObjectName(QString::fromUtf8("connecter"));
        connecter->setGeometry(QRect(160, 160, 80, 16));
        label = new QLabel(emplogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 90, 35, 10));

        retranslateUi(emplogin);

        QMetaObject::connectSlotsByName(emplogin);
    } // setupUi

    void retranslateUi(QWidget *emplogin)
    {
        emplogin->setWindowTitle(QCoreApplication::translate("emplogin", "Form", nullptr));
        connecter->setText(QCoreApplication::translate("emplogin", "connecter", nullptr));
        label->setText(QCoreApplication::translate("emplogin", "code :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class emplogin: public Ui_emplogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOGIN_H
