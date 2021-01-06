/********************************************************************************
** Form generated from reading UI file 'bienvenue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIENVENUE_H
#define UI_BIENVENUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Bienvenue
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Bienvenue)
    {
        if (Bienvenue->objectName().isEmpty())
            Bienvenue->setObjectName(QString::fromUtf8("Bienvenue"));
        Bienvenue->resize(556, 364);
        pushButton = new QPushButton(Bienvenue);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 90, 321, 171));

        retranslateUi(Bienvenue);

        QMetaObject::connectSlotsByName(Bienvenue);
    } // setupUi

    void retranslateUi(QDialog *Bienvenue)
    {
        Bienvenue->setWindowTitle(QApplication::translate("Bienvenue", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Bienvenue", "PAGE SECONDAIRE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bienvenue: public Ui_Bienvenue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIENVENUE_H
