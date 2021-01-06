/********************************************************************************
** Form generated from reading UI file 'welcomepage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEPAGE_H
#define UI_WELCOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcomePage
{
public:
    QFrame *frame_amelie;
    QLabel *label_amelie;
    QFrame *frame_fadi;
    QLabel *label_fadi;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_6;
    QPushButton *b_quitter;
    QPushButton *pushButton_fadi;
    QPushButton *pushButton_amelie;

    void setupUi(QDialog *welcomePage)
    {
        if (welcomePage->objectName().isEmpty())
            welcomePage->setObjectName(QString::fromUtf8("welcomePage"));
        welcomePage->resize(704, 401);
        welcomePage->setCursor(QCursor(Qt::CrossCursor));
        frame_amelie = new QFrame(welcomePage);
        frame_amelie->setObjectName(QString::fromUtf8("frame_amelie"));
        frame_amelie->setGeometry(QRect(80, 130, 141, 171));
        frame_amelie->setMouseTracking(false);
        frame_amelie->setAutoFillBackground(false);
        frame_amelie->setStyleSheet(QString::fromUtf8("QFrame#frame_amelie{border-color: rgb(22,0,0);border:2px}"));
        frame_amelie->setFrameShape(QFrame::StyledPanel);
        frame_amelie->setFrameShadow(QFrame::Raised);
        label_amelie = new QLabel(frame_amelie);
        label_amelie->setObjectName(QString::fromUtf8("label_amelie"));
        label_amelie->setGeometry(QRect(-3, 0, 151, 181));
        label_amelie->setMouseTracking(true);
        label_amelie->setStyleSheet(QString::fromUtf8(""));
        label_amelie->setFrameShape(QFrame::NoFrame);
        label_amelie->setPixmap(QPixmap(QString::fromUtf8("../amelie_intro.jpeg")));
        label_amelie->setScaledContents(true);
        frame_fadi = new QFrame(welcomePage);
        frame_fadi->setObjectName(QString::fromUtf8("frame_fadi"));
        frame_fadi->setGeometry(QRect(460, 130, 141, 171));
        frame_fadi->setMouseTracking(true);
        frame_fadi->setFrameShape(QFrame::StyledPanel);
        frame_fadi->setFrameShadow(QFrame::Raised);
        label_fadi = new QLabel(frame_fadi);
        label_fadi->setObjectName(QString::fromUtf8("label_fadi"));
        label_fadi->setGeometry(QRect(0, 0, 151, 171));
        label_fadi->setMouseTracking(true);
        label_fadi->setPixmap(QPixmap(QString::fromUtf8("../fadi_intro.jpeg")));
        label_fadi->setScaledContents(true);
        verticalLayoutWidget = new QWidget(welcomePage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(210, 10, 251, 82));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        label_6->setFont(font1);

        verticalLayout->addWidget(label_6);

        b_quitter = new QPushButton(welcomePage);
        b_quitter->setObjectName(QString::fromUtf8("b_quitter"));
        b_quitter->setGeometry(QRect(269, 337, 141, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        b_quitter->setFont(font2);
        pushButton_fadi = new QPushButton(welcomePage);
        pushButton_fadi->setObjectName(QString::fromUtf8("pushButton_fadi"));
        pushButton_fadi->setGeometry(QRect(490, 310, 90, 28));
        pushButton_amelie = new QPushButton(welcomePage);
        pushButton_amelie->setObjectName(QString::fromUtf8("pushButton_amelie"));
        pushButton_amelie->setGeometry(QRect(110, 310, 90, 28));

        retranslateUi(welcomePage);
        QObject::connect(b_quitter, SIGNAL(clicked()), welcomePage, SLOT(reject()));

        QMetaObject::connectSlotsByName(welcomePage);
    } // setupUi

    void retranslateUi(QDialog *welcomePage)
    {
        welcomePage->setWindowTitle(QApplication::translate("welcomePage", "The Worl Of Tomorrow", nullptr));
        label_amelie->setText(QString());
        label_fadi->setText(QString());
        label->setText(QApplication::translate("welcomePage", "  BIENVENUE", nullptr));
        label_6->setText(QApplication::translate("welcomePage", "Choix du Personnage", nullptr));
        b_quitter->setText(QApplication::translate("welcomePage", "Quitter", nullptr));
        pushButton_fadi->setText(QApplication::translate("welcomePage", "Fadi", nullptr));
        pushButton_amelie->setText(QApplication::translate("welcomePage", "Am\303\251lie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcomePage: public Ui_welcomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEPAGE_H
