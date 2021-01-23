#include "jeu.h"
#include "ui_jeu.h"
#include <QPixmap>
#include <QString>
#include <stdlib.h>
#include <stdio.h>
#include "menu.h"
//#include "personnage.h"

#include "Vaccine.h"
#include "NonVaccine.h"
#include <QInputDialog>
int valeur_bar_mental;
int valeur_fenetre;
#include <algorithm>

using namespace std;

jeu::jeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jeu)
{
    //

    music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds.mp3"));
    music->play();
    music->setVolume(30);

    //Fenetre Menu
    Menu menu_;
    menu_.setModal(true);
    menu_.exec();

    ui->setupUi(this);


    //Initialisation paramètres partie

    this->setChoix_Diff(menu_.choix_diff);
    this->setChoix_Perso(menu_.choix_perso);

    NonVaccine persotest(menu_.choix_perso,menu_.choix_diff);
    perso = persotest;

    bus = new Bus("Bus");
    metro = new Metro("Metro");
    pharmacie = new Pharmacie("Pharmacie");
    supermarche = new Supermarche("Supermarche");
    entreprise = new Entreprise("Entreprise");
    universite = new Universite("Universite");
    bar = new Bar("Bar");
    cinema = new Cinema("Cinema");
    salledesport = new SalleDeSport("SalleDeSport");

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


//Lorsque selection item liste principale
void jeu::on_l_principale_itemClicked(QListWidgetItem *item){
    updateListePrincipale2(item); //affichage liste items en question
    while(ui->l_principale_3->count()>0){ui->l_principale_3->takeItem(0);} //Vider la 3eme liste
}


//MAJ de l'image en fonction de la valeur rendue par la barre de progression
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

//Listing des lieux dans la liste principale 1
void jeu::listingLieux(){

    ui->l_principale->addItem(i_Transports);
    ui->l_principale->addItem(i_Loisirs);
    ui->l_principale->addItem(i_Travail);
    ui->l_principale->addItem(i_Courses);

};

//initialisation des listes//création de chaque item pour les listes
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



 i_Distance_Bus = new QListWidgetItem("Parcourir Distance");
 i_Distance_Metro = new QListWidgetItem("Parcourir Distance");
 i_Entreprise_Duree = new QListWidgetItem("Durée Au Travail");
 i_Universite_Duree = new QListWidgetItem("Durée du TD");
 i_Cinema_Films = new QListWidgetItem("Regarde un film");
 i_Bar_Bieres = new QListWidgetItem("Boire une bière");
 i_SalleDeSport_Machines = new QListWidgetItem("Utiliser une Machine");
 i_Pharmacie_Articles = new QListWidgetItem("Achat Produits");
 i_Supermarche_Articles= new QListWidgetItem("Achat Nourriture");

 i_LavageMains = new QListWidgetItem("Lavage Mains");
 i_gelHydroAlcoolique = new QListWidgetItem("Gel HydroAlcoolique");

 item_actuel= new QListWidgetItem();


};


//MAJ de la liste des sous lieux autorisés
void jeu::updateListePrincipale2(QListWidgetItem *item){

    while(ui->l_principale_2->count()>0){ui->l_principale_2->takeItem(0);}  //Vider l'affichage de la liste

    //En fontion de l'item selectionnés, afficher sur la troisième liste les items correspondants au lieu
    if(item==i_Transports){
        if(verifLieu("Bus")){ui->l_principale_2->addItem(i_Bus);}
        if(verifLieu("Metro")){ ui->l_principale_2->addItem(i_Metro);}
        }

    if(item==i_Loisirs){
       if(verifLieu("Cinema")){ ui->l_principale_2->addItem(i_Cinema);}
       if(verifLieu("Bar")){ ui->l_principale_2->addItem(i_Bar);}
       if(verifLieu("SalleDeSport")){ ui->l_principale_2->addItem(i_SalleDeSport);}
       }

    if(item==i_Courses){
       if(verifLieu("Pharmacie")){ ui->l_principale_2->addItem(i_Pharmacie);}
       if(verifLieu("Supermarche")){ui->l_principale_2->addItem(i_Supermarche);}
       }

    if(item==i_Travail){
       if(verifLieu("Entreprise")){ ui->l_principale_2->addItem(i_Entreprise);}
       if(verifLieu("Universite")){ ui->l_principale_2->addItem(i_Universite);}
       }




};

//Mise a jour des actions en fonction du sous lieu chosis
void jeu::updateListePrincipale3(QListWidgetItem * item){

    while(ui->l_principale_3->count()>0){ui->l_principale_3->takeItem(0);}

    if(item==i_Bus){
        music->setMedia(QUrl("qrc:/bus-door-open-01.mp3"));
        music->play();
        music->setVolume(30);
        ui->l_principale_3->addItem(i_Distance_Bus);}

    if(item==i_Metro){
        ui->l_principale_3->addItem(i_Distance_Metro);
      }

    if(item==i_Cinema){
        ui->l_principale_3->addItem(i_Cinema_Films);}

    if(item==i_Bar){
        ui->l_principale_3->addItem(i_Bar_Bieres);}

    if(item==i_SalleDeSport){
        ui->l_principale_3->addItem(i_SalleDeSport_Machines);}

    if(item==i_Pharmacie){
        ui->l_principale_3->addItem(i_Pharmacie_Articles);}

    if(item==i_Supermarche){
        ui->l_principale_3->addItem(i_Supermarche_Articles);}

    if(item==i_Entreprise){
        ui->l_principale_3->addItem(i_Entreprise_Duree);}

    if(item==i_Universite){
        ui->l_principale_3->addItem(i_Universite_Duree);}

    ui->l_principale_3->addItem(i_LavageMains);
    ui->l_principale_3->addItem(i_gelHydroAlcoolique);

}

//lorsqu'on clique sur le bouton action on execute l'action selectionnée

void jeu::on_pb_action_clicked()
{
    QString question;
    int maxValue;
    int valReturned;

    if (item_actuel == i_LavageMains){
        perso.lavageMains();
    }

    if (item_actuel == i_gelHydroAlcoolique){
        perso.gelHydroAlcoolique();
    }

    //ui->l_principale_2->addItem(i_gelHydroAlcoolique);

        if(item_actuel==i_Distance_Bus){

            question= "Quelle distance veux-tu parcourir en Bus?";
            maxValue = bus->getDistanceMax();

            valReturned = QInputDialog::getInt(this,"Entrez valeur",question,0,1,maxValue,1);

            if (valReturned != 0){
                perso.setDonneeLieu(valReturned);
                bus->impact(perso);}

            }

        if(item_actuel==i_Distance_Metro){

            question= "Quelle distance veuxttu parcourir en Métro ?";
            maxValue = metro->getDistanceMax();

            valReturned = QInputDialog::getInt(this,"Entrez valeur",question,0,1,maxValue,1);

            if (valReturned != 0){
                perso.setDonneeLieu(valReturned);
                metro->impact(perso);}

            }

        if(item_actuel==i_Pharmacie_Articles){

            question= "Combien de produits veux-tu acheter ?";
            maxValue = pharmacie->getNbArticlesMax();

            valReturned = QInputDialog::getInt(this,"Entrez valeur",question,0,1,maxValue,1);

            if (valReturned != 0){
                perso.setDonneeLieu(valReturned);
                pharmacie->impact(perso);}

            }

        if(item_actuel==i_Supermarche_Articles){

            question= "Quelle quantité de nourriture veux-tu acheter ?";
            maxValue = supermarche->getNbArticlesMax();

            valReturned = QInputDialog::getInt(this,"Entrez valeur",question,0,1,maxValue,1);

            if (valReturned != 0){
                perso.setDonneeLieu(valReturned);
                supermarche->impact(perso);}

            }


        if(item_actuel==i_Entreprise_Duree){

            question= "Combien de temps au travail ?";
            maxValue = entreprise->getTempsMax();

            valReturned = QInputDialog::getInt(this,"Entrez valeur",question,0,1,maxValue,1);

            if (valReturned != 0){
                perso.setDonneeLieu(valReturned);
                entreprise->impact(perso);}
        }

        if(item_actuel==i_Universite_Duree){
            question= "Quelle est la durée de ton TD ?";
            maxValue = universite->getTempsMax();

            valReturned = QInputDialog::getInt(this,"Entrez valeur",question,0,1,maxValue,1);

            if (valReturned != 0){
                perso.setDonneeLieu(valReturned);
                universite->impact(perso);}
        }

        if(item_actuel==i_Cinema_Films){
            question= "Combien de films veux-tu regarder ?";
            maxValue = cinema->getNbMax();

            valReturned = QInputDialog::getInt(this,"Entrez valeur",question,0,1,maxValue,1);

            if (valReturned != 0){
                perso.setDonneeLieu(valReturned);
                cinema->impact(perso);}
        }

        if(item_actuel==i_SalleDeSport_Machines){
            question= "Combien de machines veux-tu utiliser?";
            maxValue = salledesport->getNbMax();

            valReturned = QInputDialog::getInt(this,"Entrez valeur",question,0,1,maxValue,1);

            if (valReturned != 0){
                perso.setDonneeLieu(valReturned);
                salledesport->impact(perso);}
        }

        if(item_actuel==i_Bar_Bieres){
            question= "Combien de bières veux-tu boire?";
            maxValue = bar->getNbMax();

            valReturned = QInputDialog::getInt(this,"Entrez valeur",question,0,1,maxValue,1);

            if (valReturned != 0){
                perso.setDonneeLieu(valReturned);
                bar->impact(perso);}
        }

        ui->lcdNumber->display(perso.getMonnaie());
        ui->bar_mentale->setValue(perso.getMent());
        ui->bar_physique->setValue(perso.getPhy());
    }


void jeu::on_l_principale_2_itemClicked(QListWidgetItem *item){updateListePrincipale3(item);}

void jeu::on_l_principale_3_itemClicked(QListWidgetItem *item){this->item_actuel = item;}




//Permet de verifier si un lieu est autorisé par le personnage
int jeu::verifLieu(QString nom_lieu){

      QVector<QString>autor = perso.getLieuxAutorises();

      if (std::find(autor.begin(), autor.end(), nom_lieu) != autor.end())
      {
        return 1; //Si c'est autorisé
      }

     return 0; //Si ce n'est pas autorisé
};

