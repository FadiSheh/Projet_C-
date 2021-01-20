#ifndef JEU_H
#define JEU_H

#include <QDialog>
#include <QString>
#include <QListWidgetItem>
#include "menu.h"
#include <QVector>
#include "vaccine.h"

namespace Ui {
class jeu;
}

class jeu : public QDialog
{


    Q_OBJECT

     //Variable globale pour connaitre l'item
    QListWidgetItem * item_actuel;
    //Liste principale
    QListWidgetItem *i_Loisirs, *i_Travail, *i_Transports,*i_Courses;
    //Liste courses (lol)
    QListWidgetItem *i_Pharmacie, *i_Supermarche;
    //Liste Loisirs
    QListWidgetItem *i_Cinema, *i_Bar,*i_SalleDeSport;
    //Liste Transports
    QListWidgetItem *i_Bus, *i_Metro;
   //Liste Travail
    QListWidgetItem *i_Entreprise,*i_Universite;

    //Actions différentes lieux
    //Transports
     QListWidgetItem *i_Distance_Bus,*i_Distance_Metro;
     //Travail
     QListWidgetItem *i_Entreprise_Duree,*i_Universite_Duree;
     //Loisirs
     QListWidgetItem *i_Cinema_Films,*i_Bar_Bieres, *i_SalleDeSport_Machines;
     //Courses
     QListWidgetItem *i_Pharmacie_Articles,*i_Supermarche_Articles;

public:
    explicit jeu(QWidget *parent = nullptr);

    int getChoix_Perso(){return choix_perso;}
    int getChoix_Diff(){return choix_diff;}

    void setChoix_Perso(int val){choix_perso = val;}
    void setChoix_Diff(int val){choix_diff = val;}
    void updateListePrincipale2(QListWidgetItem * item);
    void updateListePrincipale3(QListWidgetItem * item);
    void listingLieux();
    void initList();

    ~jeu();


private slots:

    void on_l_principale_itemClicked(QListWidgetItem *item);

    void on_bar_physique_valueChanged(int value);

    void on_bar_mentale_valueChanged(int value);


    void on_pb_action_clicked();

    void on_l_principale_2_itemClicked(QListWidgetItem *item);


    void on_l_principale_3_itemClicked(QListWidgetItem *item);

private:

    Ui::jeu *ui;
    Vaccine perso;
    int choix_perso ;
    int choix_diff ;

};


#endif // JEU_H
