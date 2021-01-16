/********************************************************************************
** Form generated from reading UI file 'jeu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JEU_H
#define UI_JEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_jeu
{
public:
    QProgressBar *bar_mentale;
    QProgressBar *bar_physique;
    QLabel *label;
    QLabel *label_nom;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QListWidget *l_principale;
    QListWidget *l_transports;
    QListWidget *l_principale_3;

    void setupUi(QDialog *jeu)
    {
        if (jeu->objectName().isEmpty())
            jeu->setObjectName(QString::fromUtf8("jeu"));
        jeu->resize(776, 502);
        jeu->setMinimumSize(QSize(776, 502));
        jeu->setMaximumSize(QSize(776, 502));
        bar_mentale = new QProgressBar(jeu);
        bar_mentale->setObjectName(QString::fromUtf8("bar_mentale"));
        bar_mentale->setGeometry(QRect(450, 430, 231, 23));
        bar_mentale->setValue(24);
        bar_physique = new QProgressBar(jeu);
        bar_physique->setObjectName(QString::fromUtf8("bar_physique"));
        bar_physique->setGeometry(QRect(450, 390, 231, 23));
        bar_physique->setValue(24);
        label = new QLabel(jeu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(47, 95, 321, 301));
        label_nom = new QLabel(jeu);
        label_nom->setObjectName(QString::fromUtf8("label_nom"));
        label_nom->setGeometry(QRect(90, 30, 111, 21));
        QFont font;
        font.setPointSize(12);
        label_nom->setFont(font);
        lcdNumber = new QLCDNumber(jeu);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(660, 20, 91, 31));
        lcdNumber->setFrameShape(QFrame::StyledPanel);
        label_2 = new QLabel(jeu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(617, 20, 31, 31));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../coin.png")));
        label_2->setScaledContents(true);
        l_principale = new QListWidget(jeu);
        l_principale->setObjectName(QString::fromUtf8("l_principale"));
        l_principale->setGeometry(QRect(390, 80, 171, 131));
        l_transports = new QListWidget(jeu);
        l_transports->setObjectName(QString::fromUtf8("l_transports"));
        l_transports->setGeometry(QRect(580, 80, 171, 131));
        l_principale_3 = new QListWidget(jeu);
        l_principale_3->setObjectName(QString::fromUtf8("l_principale_3"));
        l_principale_3->setGeometry(QRect(580, 80, 171, 131));

        retranslateUi(jeu);

        QMetaObject::connectSlotsByName(jeu);
    } // setupUi

    void retranslateUi(QDialog *jeu)
    {
        jeu->setWindowTitle(QApplication::translate("jeu", "The World Of Tomorrow", nullptr));
        label->setText(QString());
        label_nom->setText(QApplication::translate("jeu", "TextLabel", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class jeu: public Ui_jeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JEU_H
