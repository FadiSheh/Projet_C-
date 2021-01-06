#include "jeu.h"
#include "ui_jeu.h"
#include <QPixmap>
#include <QString>
#include <stdlib.h>
#include <stdio.h>


jeu::jeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jeu)
{
    ui->setupUi(this);

    //Etape 1 => recuperer si le eprsonnage choisi c'est Amélie ou Fadi.





    Personnage perso(true,20,40);  //Creation du personnage pour la partie
    ui->bar_mentale->setValue(perso.getMent());   //Remplissage des barres d'evolution avec les parametre initiaux du personnage
    ui->bar_physique->setValue(perso.getPhy());





    i_deplacer = new QListWidgetItem("Se déplacer");
    i_physique = new QListWidgetItem("Soin Physique");
    i_mental = new QListWidgetItem("Soin mental");

    ui->l_action->addItem(i_deplacer);
    ui->l_action->addItem(i_physique);
    ui->l_action->addItem(i_mental);


    ui->l_action->show();
    ui->l_deplacer->hide();
    ui->l_mental->hide();
    ui->l_physique->hide();


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



void jeu::on_l_action_itemClicked(QListWidgetItem *item)
{
    if (item==i_deplacer){ui->l_deplacer->show();ui->l_mental->hide();
        ui->l_physique->hide();}

    if (item==i_physique){ui->l_deplacer->hide();ui->l_mental->hide();
        ui->l_physique->show();}

    if (item==i_mental){ui->l_deplacer->hide();ui->l_mental->show();
        ui->l_physique->hide();}

}

