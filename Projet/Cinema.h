#ifndef CINEMA_H
#define CINEMA_H

#include<iostream>
#include<cstdlib>
#include <string>

#include "Loisir.h"

class Cinema : public Loisir{
private:

public:
    //la donnée du lieu pour le cinéma est le nbre de film que le personnage veut voir
    Cinema(std::string name) : Loisir(name) {
        frequentationMax = 60; //de la salle de cinéma
        fContamination = 80;
        affluence = 30;
        nbMax = 3; //nombre de films visualisés
    }

    void impact(Personnage &perso) const{


        int possible =   perso.setMonnaie(-5*perso.getDonneeLieu());

        if (possible){


        //plus le nb de film est élevé, plus cela a impact négatif
        //plus de risque de contamination
        int impactPhy;
        impactPhy = (perso.getDonneeLieu())%10 + affluence%10*fContamination%10;

        perso.setPhysique(-impactPhy);

        //plus le nb de film est élevé, plus cela a un impact positif
        int impactMent = (perso.getDonneeLieu())%10 * 4;
        perso.setMental(impactMent);

         }else { QMessageBox messageBox;
                    messageBox.critical(0,"Manque crédits","Tu as déjà vu tous les films!");
                    messageBox.setFixedSize(500,200);}


    }

};

#endif // CINEMA_H
