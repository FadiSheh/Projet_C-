#include "jeu.h"
#include "ui_jeu.h"
#include <QPixmap>
#include <QString>
#include <stdlib.h>
#include <stdio.h>
#include "menu.h"
//#include "personnage.h"
#include <QMediaPlayer>
#include "vaccine.h"

int valeur_bar_mental;
int valeur_fenetre;

jeu::jeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jeu)
{
    //

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds.mp3"));
    music->play();
    music->setVolume(0);

    //Fenetre Menu
    Menu menu_;
    menu_.setModal(true);
    menu_.exec();

    ui->setupUi(this);


    //Initialisation paramètres partie

    this->setChoix_Diff(menu_.choix_diff);
    this->setChoix_Perso(menu_.choix_perso);

    Vaccine persotest(menu_.choix_perso,menu_.choix_diff);
    perso = persotest;


    ui->bar_mentale->setValue(perso.getMent());   //Remplissage des barres d'evolution avec les parametre initiaux du personnage
    ui->bar_physique->setValue(perso.getPhy());
    ui->label_nom->setText(QString::fromStdString(perso.getNom()));
    ui->lcdNumber->display(perso.getMonnaie());
    ui->bar_mentale->setValue(perso.getMent());   //Remplissage des barres d'evolution avec les parametre initiaux du personnage
    ui->bar_physique->setValue(perso.getPhy());



}

jeu::~jeu()
{
    delete ui;
}



void jeu::on_l_principale_itemClicked(QListWidgetItem *item)
{

    updateListePrincipale2(item);


}


void jeu::on_bar_physique_valueChanged(int value)
{
    int choix_perso = this->getChoix_Perso();
    QPixmap pix;

    if (value < 10 || valeur_bar_mental==0){   //PLS

        if (choix_perso==0){ pix.load(":/amelie_pls.jpg"); } else {pix.load(":/fadi_pls.jpg"); }
        }
    else if ( ((value >=10) && (value <65)) || (valeur_bar_mental==1)){ //STABLE
        if (choix_perso==0){ pix.load(":/amelie_stable.jpg"); } else {pix.load(":/fadi_stable.jpg"); }
    } else {                                                    //CONTENT
       if (choix_perso==0){ pix.load(":/amelie_content.jpg"); } else {pix.load(":/fadi_content.jpg"); }
    }

    ui->label->setPixmap(pix.scaled(300,300,Qt::KeepAspectRatio));
    ui->label->setAlignment (Qt::AlignCenter);

}



void jeu::on_bar_mentale_valueChanged(int value)
{
    if (value < 10){
        valeur_bar_mental=0;
    } else if ( value >=10 && value <65){
        valeur_bar_mental=1;
    } else { valeur_bar_mental=2;}


}

void jeu::listingLieux(){

    ui->l_principale->addItem(i_Transports);
    ui->l_principale->addItem(i_Loisirs);
    ui->l_principale->addItem(i_Travail);
    ui->l_principale->addItem(i_Courses);

};

void jeu::initList(){

 //Items principaux
 i_Transports= new QListWidgetItem("Transports");
 i_Loisirs= new QListWidgetItem("Loisirs");
 i_Travail= new QListWidgetItem("Travail");
 i_Courses= new QListWidgetItem("Courses");

 i_Pharmacie = new QListWidgetItem("Pharmacie");
 i_Supermarche = new QListWidgetItem("Supermarche");
 i_Cinema = new QListWidgetItem("Cinema");
 i_Bar = new QListWidgetItem("Bar");
 i_SalleDeSport = new QListWidgetItem("Salle De Sport");
 i_Bus = new QListWidgetItem("Bus");
 i_Metro = new QListWidgetItem("Metro");

 i_Entreprise = new QListWidgetItem("Entreprise");
 i_Universite = new QListWidgetItem("Université");




};

void jeu::updateListePrincipale2(QListWidgetItem *item){

    while(ui->l_principale_2->count()>0){ui->l_principale_2->takeItem(0);}

    if(item==i_Transports){
        ui->l_principale_2->addItem(i_Bus);
        ui->l_principale_2->addItem(i_Metro);}

    if(item==i_Loisirs){
        ui->l_principale_2->addItem(i_Cinema);
        ui->l_principale_2->addItem(i_Bar);
        ui->l_principale_2->addItem(i_SalleDeSport);}

    if(item==i_Courses){
        ui->l_principale_2->addItem(i_Pharmacie);
        ui->l_principale_2->addItem(i_Supermarche);}

    if(item==i_Travail){
        ui->l_principale_2->addItem(i_Entreprise);
        ui->l_principale_2->addItem(i_Universite);}


};



void jeu::on_pb_action_clicked()
{   perso.setMental(-2);
    ui->bar_mentale->setValue(perso.getMent());
    perso.setPhysique(-2);
    ui->bar_physique->setValue(perso.getPhy());
}
