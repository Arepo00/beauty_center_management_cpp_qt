/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userlogin
{
public:
    QPushButton *connecter;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *userlogin)
    {
        if (userlogin->objectName().isEmpty())
            userlogin->setObjectName(QString::fromUtf8("userlogin"));
        userlogin->resize(400, 300);
        connecter = new QPushButton(userlogin);
        connecter->setObjectName(QString::fromUtf8("connecter"));
        connecter->setGeometry(QRect(160, 270, 80, 16));
        lineEdit = new QLineEdit(userlogin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 30, 113, 20));
        lineEdit_2 = new QLineEdit(userlogin);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 90, 113, 20));
        lineEdit_3 = new QLineEdit(userlogin);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 130, 113, 20));
        lineEdit_4 = new QLineEdit(userlogin);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(140, 180, 113, 20));

        retranslateUi(userlogin);

        QMetaObject::connectSlotsByName(userlogin);
    } // setupUi

    void retranslateUi(QWidget *userlogin)
    {
        userlogin->setWindowTitle(QCoreApplication::translate("userlogin", "Form", nullptr));
        connecter->setText(QCoreApplication::translate("userlogin", "Connecter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userlogin: public Ui_userlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
