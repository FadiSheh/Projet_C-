#include "jeu.h"
#include "ui_jeu.h"
#include <QPixmap>
#include <QString>
#include <stdlib.h>
#include <stdio.h>
#include "menu.h"
#include "lieux.h"
#include "metro.h"
#include "transports.h"

jeu::jeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jeu)
{

    Menu menu_;
    menu_.setModal(true);
    menu_.exec();

    ui->setupUi(this);
    ui->lcdNumber->display(menu_.choix_diff);


    //Initialisation Partie
    Personnage perso(menu_.choix_perso,menu_.choix_diff);  //Creation du personnage pour la partie

    ui->bar_mentale->setValue(perso.getMent());   //Remplissage des barres d'evolution avec les parametre initiaux du personnage
    ui->bar_physique->setValue(perso.getPhy());
    ui->label_nom->setText(perso.getNom());
    ui->lcdNumber->display(perso.getPieces());



    //Liste principale
    i_Transports= new QListWidgetItem("Transports");
    ui->l_principale->addItem(i_Transports);


    //Liste de transports

    ui->l_transports->addItem(i_Bus);
    ui->l_transports->addItem(i_Velo);
    ui->l_transports->addItem(i_Train);
    ui->l_transports->addItem(i_Marche);

    //transports().assisBus();

}

jeu::~jeu()
{
    delete ui;
}

void jeu::on_progressBar_valueChanged(int value)
{
    if (value < 50){

        QPixmap pix("/home/fadi/Documents/EISE4/C++/Projet/amelie_intro.jpeg");
        ui->label->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));

    } else { }
}




void jeu::on_l_principale_itemClicked(QListWidgetItem *item)
{
    if (item==i_Transports){ui->l_transports->show(); ui->l_principale_3->hide();}
}


void jeu::on_l_transports_itemDoubleClicked(QListWidgetItem *item)
{
   // if(item==i_Bus || item==i_Train){ui->bar_mentale->setValue(perso->)
}
