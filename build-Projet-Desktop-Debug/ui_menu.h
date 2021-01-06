/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QLabel *label;
    QCheckBox *cb_amelie;
    QCheckBox *cb_fadi;
    QPushButton *pb_Demarrer;
    QLabel *i_amelie;
    QLabel *i_fadi;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(509, 446);
        QFont font;
        font.setPointSize(16);
        font.setItalic(true);
        Menu->setFont(font);
        Menu->setModal(true);
        label = new QLabel(Menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 20, 121, 31));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label->setFont(font1);
        cb_amelie = new QCheckBox(Menu);
        cb_amelie->setObjectName(QString::fromUtf8("cb_amelie"));
        cb_amelie->setGeometry(QRect(60, 310, 91, 21));
        cb_fadi = new QCheckBox(Menu);
        cb_fadi->setObjectName(QString::fromUtf8("cb_fadi"));
        cb_fadi->setGeometry(QRect(360, 310, 87, 21));
        pb_Demarrer = new QPushButton(Menu);
        pb_Demarrer->setObjectName(QString::fromUtf8("pb_Demarrer"));
        pb_Demarrer->setGeometry(QRect(200, 390, 101, 31));
        i_amelie = new QLabel(Menu);
        i_amelie->setObjectName(QString::fromUtf8("i_amelie"));
        i_amelie->setGeometry(QRect(30, 90, 161, 201));
        i_amelie->setPixmap(QPixmap(QString::fromUtf8("../amelie_intro.jpeg")));
        i_amelie->setScaledContents(true);
        i_fadi = new QLabel(Menu);
        i_fadi->setObjectName(QString::fromUtf8("i_fadi"));
        i_fadi->setGeometry(QRect(310, 90, 161, 201));
        i_fadi->setPixmap(QPixmap(QString::fromUtf8("../fadi_intro.jpeg")));
        i_fadi->setScaledContents(true);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Menu", nullptr));
        label->setText(QApplication::translate("Menu", "Bienvenue", nullptr));
        cb_amelie->setText(QApplication::translate("Menu", "Am\303\251lie", nullptr));
        cb_fadi->setText(QApplication::translate("Menu", "Fadi", nullptr));
        pb_Demarrer->setText(QApplication::translate("Menu", "D\303\251marrer", nullptr));
        i_amelie->setText(QString());
        i_fadi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
