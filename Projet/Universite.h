#ifndef UNIVERSITE_H
#define UNIVERSITE_H

#include<iostream>
#include<cstdlib>
#include <string>

#include "Travail.h"

class Universite : public Travail{
private:

public:
    Universite(std::string name) : Travail(name) {
        //changer paramètres
        frequentationMax = 230;
        fContamination = 80;
        affluence = 90;
        tempsMax = 8;
    }

    void impact(Personnage &perso) const{
        //plus la durée sur le site et l'affluence st élevées, plus cela a impact négatif
        //plus de risque de contamination
        //si la durée max sur le site est atteinte, ça compte double
        int possible =   perso.setMonnaie(-1*perso.getDonneeLieu()); //pause café

        if (possible){

        int impactPhy;
        if(perso.getDonneeLieu() == tempsMax){
            impactPhy = 2*(perso.getDonneeLieu())%10 + affluence%10*fContamination%10;
        }
        else{
            impactPhy = (perso.getDonneeLieu())%10 + affluence%10*fContamination%10;
        }
        perso.setPhysique(-impactPhy);

        //plus la durée est élevée, plus cela a un impact négatif
        //d'un autre cote, bien de voir des gens : impact positif
        int impactMent = (perso.getDonneeLieu())%10 - 10;
        perso.setMental(-impactMent);

        }

        else { QMessageBox messageBox;
            messageBox.critical(0,"Manque crédits","Il faut prendre une pause!");
            messageBox.setFixedSize(500,200);}

    }
};


#endif // UNIVERSITE_H
