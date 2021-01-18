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

    //Liste principale
    QListWidgetItem *i_Loisirs, *i_Travail, *i_Transports,*i_Courses;
    //Liste courses (lol)
    QListWidgetItem *i_Pharmacie, *i_Supermarche;
    //Liste Loisirs
    QListWidgetItem *i_Cinema, *i_Bar,*i_SalleDeSport;
    //Liste Transports
    QListWidgetItem *i_Bus, *i_Metro;
   //Liste Courses
    QListWidgetItem *i_Entreprise,*i_Universite;



public:
    explicit jeu(QWidget *parent = nullptr);

    int getChoix_Perso(){return choix_perso;}
    int getChoix_Diff(){return choix_diff;}

    void setChoix_Perso(int val){choix_perso = val;}
    void setChoix_Diff(int val){choix_diff = val;}
    void updateListePrincipale2(QListWidgetItem * item);
    void listingLieux();
    void initList();

    ~jeu();


private slots:

    void on_l_principale_itemClicked(QListWidgetItem *item);

    void on_bar_physique_valueChanged(int value);

    void on_bar_mentale_valueChanged(int value);


    void on_pb_action_clicked();

private:

    Ui::jeu *ui;
    Vaccine perso;
    int choix_perso ;
    int choix_diff ;

};


#endif // JEU_H
