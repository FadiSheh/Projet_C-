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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_jeu
{
public:
    QProgressBar *bar_mentale;
    QProgressBar *bar_physique;
    QSlider *horizontalSlider;
    QLabel *label;
    QListWidget *l_action;
    QListWidget *l_deplacer;
    QPushButton *Action;
    QListWidget *l_physique;
    QListWidget *l_mental;

    void setupUi(QDialog *jeu)
    {
        if (jeu->objectName().isEmpty())
            jeu->setObjectName(QString::fromUtf8("jeu"));
        jeu->resize(776, 502);
        bar_mentale = new QProgressBar(jeu);
        bar_mentale->setObjectName(QString::fromUtf8("bar_mentale"));
        bar_mentale->setGeometry(QRect(450, 430, 231, 23));
        bar_mentale->setValue(24);
        bar_physique = new QProgressBar(jeu);
        bar_physique->setObjectName(QString::fromUtf8("bar_physique"));
        bar_physique->setGeometry(QRect(450, 390, 231, 23));
        bar_physique->setValue(24);
        horizontalSlider = new QSlider(jeu);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(480, 290, 160, 17));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(jeu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(47, 95, 321, 301));
        l_action = new QListWidget(jeu);
        l_action->setObjectName(QString::fromUtf8("l_action"));
        l_action->setGeometry(QRect(390, 90, 171, 121));
        l_deplacer = new QListWidget(jeu);
        l_deplacer->setObjectName(QString::fromUtf8("l_deplacer"));
        l_deplacer->setGeometry(QRect(570, 90, 171, 121));
        Action = new QPushButton(jeu);
        Action->setObjectName(QString::fromUtf8("Action"));
        Action->setGeometry(QRect(530, 230, 90, 28));
        l_physique = new QListWidget(jeu);
        l_physique->setObjectName(QString::fromUtf8("l_physique"));
        l_physique->setGeometry(QRect(570, 90, 171, 121));
        l_mental = new QListWidget(jeu);
        l_mental->setObjectName(QString::fromUtf8("l_mental"));
        l_mental->setGeometry(QRect(570, 90, 171, 121));

        retranslateUi(jeu);
        QObject::connect(horizontalSlider, SIGNAL(sliderMoved(int)), bar_mentale, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(jeu);
    } // setupUi

    void retranslateUi(QDialog *jeu)
    {
        jeu->setWindowTitle(QApplication::translate("jeu", "The World Of Tomorrow", nullptr));
        label->setText(QString());
        Action->setText(QApplication::translate("jeu", "Action", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jeu: public Ui_jeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JEU_H
