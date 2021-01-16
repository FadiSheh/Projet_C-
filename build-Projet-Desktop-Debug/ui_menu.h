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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QLabel *label;
    QCheckBox *cb_amelie;
    QPushButton *pb_Demarrer;
    QLabel *i_amelie;
    QLabel *i_fadi;
    QLabel *label_2;
    QFrame *niveau_diff;
    QCheckBox *cb_facile;
    QCheckBox *cb_difficile;
    QLabel *label_diff;
    QFrame *frame_1;
    QFrame *frame_2;
    QCheckBox *cb_fadi;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(653, 421);
        QFont font;
        font.setPointSize(16);
        font.setItalic(true);
        Menu->setFont(font);
        Menu->setModal(true);
        label = new QLabel(Menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 20, 191, 31));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(133, 133, 133, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette);
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        label->setFont(font1);
        label->setFrameShape(QFrame::StyledPanel);
        cb_amelie = new QCheckBox(Menu);
        cb_amelie->setObjectName(QString::fromUtf8("cb_amelie"));
        cb_amelie->setGeometry(QRect(90, 300, 101, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setItalic(false);
        cb_amelie->setFont(font2);
        cb_amelie->setMouseTracking(false);
        cb_amelie->setAutoFillBackground(true);
        cb_amelie->setTristate(false);
        pb_Demarrer = new QPushButton(Menu);
        pb_Demarrer->setObjectName(QString::fromUtf8("pb_Demarrer"));
        pb_Demarrer->setGeometry(QRect(270, 370, 121, 31));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        pb_Demarrer->setFont(font3);
        pb_Demarrer->setCursor(QCursor(Qt::CrossCursor));
        i_amelie = new QLabel(Menu);
        i_amelie->setObjectName(QString::fromUtf8("i_amelie"));
        i_amelie->setGeometry(QRect(60, 90, 161, 201));
        i_amelie->setFrameShape(QFrame::Box);
        i_amelie->setFrameShadow(QFrame::Raised);
        i_amelie->setPixmap(QPixmap(QString::fromUtf8("../amelie_intro.jpeg")));
        i_amelie->setScaledContents(true);
        i_fadi = new QLabel(Menu);
        i_fadi->setObjectName(QString::fromUtf8("i_fadi"));
        i_fadi->setGeometry(QRect(450, 90, 161, 201));
        i_fadi->setAutoFillBackground(false);
        i_fadi->setFrameShape(QFrame::Box);
        i_fadi->setFrameShadow(QFrame::Raised);
        i_fadi->setPixmap(QPixmap(QString::fromUtf8("../fadi_intro.jpeg")));
        i_fadi->setScaledContents(true);
        label_2 = new QLabel(Menu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 661, 421));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../fond_menu.jpg")));
        niveau_diff = new QFrame(Menu);
        niveau_diff->setObjectName(QString::fromUtf8("niveau_diff"));
        niveau_diff->setGeometry(QRect(260, 110, 151, 161));
        niveau_diff->setFrameShape(QFrame::Box);
        niveau_diff->setFrameShadow(QFrame::Sunken);
        cb_facile = new QCheckBox(niveau_diff);
        cb_facile->setObjectName(QString::fromUtf8("cb_facile"));
        cb_facile->setGeometry(QRect(30, 110, 91, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(0, 85, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        cb_facile->setPalette(palette1);
        QFont font4;
        font4.setItalic(false);
        cb_facile->setFont(font4);
        cb_facile->setMouseTracking(false);
        cb_facile->setAutoFillBackground(true);
        cb_difficile = new QCheckBox(niveau_diff);
        cb_difficile->setObjectName(QString::fromUtf8("cb_difficile"));
        cb_difficile->setGeometry(QRect(30, 50, 91, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        cb_difficile->setPalette(palette2);
        cb_difficile->setFont(font4);
        cb_difficile->setMouseTracking(false);
        cb_difficile->setAutoFillBackground(true);
        label_diff = new QLabel(niveau_diff);
        label_diff->setObjectName(QString::fromUtf8("label_diff"));
        label_diff->setGeometry(QRect(0, 0, 151, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_diff->setPalette(palette3);
        QFont font5;
        font5.setPointSize(18);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        label_diff->setFont(font5);
        label_diff->setFrameShape(QFrame::StyledPanel);
        frame_1 = new QFrame(Menu);
        frame_1->setObjectName(QString::fromUtf8("frame_1"));
        frame_1->setGeometry(QRect(49, 80, 181, 251));
        frame_1->setFrameShape(QFrame::StyledPanel);
        frame_1->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(Menu);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(440, 80, 181, 251));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        cb_fadi = new QCheckBox(frame_2);
        cb_fadi->setObjectName(QString::fromUtf8("cb_fadi"));
        cb_fadi->setGeometry(QRect(50, 220, 91, 31));
        cb_fadi->setMinimumSize(QSize(91, 31));
        cb_fadi->setMaximumSize(QSize(91, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        cb_fadi->setPalette(palette4);
        cb_fadi->setFont(font4);
        cb_fadi->setMouseTracking(false);
        cb_fadi->setAutoFillBackground(true);
        label_2->raise();
        label->raise();
        pb_Demarrer->raise();
        niveau_diff->raise();
        frame_1->raise();
        frame_2->raise();
        i_amelie->raise();
        i_fadi->raise();
        cb_amelie->raise();

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Menu", nullptr));
        label->setText(QApplication::translate("Menu", "BIENVENUE", nullptr));
        cb_amelie->setText(QApplication::translate("Menu", "Am\303\251lie", nullptr));
        pb_Demarrer->setText(QApplication::translate("Menu", "D\303\251marrer", nullptr));
        i_amelie->setText(QString());
        i_fadi->setText(QString());
        label_2->setText(QString());
        cb_facile->setText(QApplication::translate("Menu", "HARD", nullptr));
        cb_difficile->setText(QApplication::translate("Menu", "EASY", nullptr));
        label_diff->setText(QApplication::translate("Menu", "DIFFICULTY", nullptr));
        cb_fadi->setText(QApplication::translate("Menu", "Fadi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
