#ifndef ENTREPRISE_H
#define ENTREPRISE_H

#include<iostream>
#include<cstdlib>
#include <string>

#include "Travail.h"

class Entreprise : public Travail{

protected:

public:
    Entreprise(std::string name) : Travail(name) {
        //changer paramètres
        frequentationMax = 130;
        fContamination = 80;
        affluence = 50;
        tempsMax = 10;
    }

    void impact(Personnage &perso) const{
        //plus la durée sur le site et l'affluence st élevées, plus cela a impact négatif
        //plus de risque de contamination
        //si la durée max sur le site est atteinte, ça compte double
        int impactPhy;
        if(perso.getDonneeLieu() == tempsMax){
            impactPhy = 2*(perso.getDonneeLieu())%10 + affluence%10*fContamination%10;
        }
        else{
            impactPhy = (perso.getDonneeLieu())%10 + affluence%10*fContamination%10;
        }
        perso.setPhysique(-impactPhy);

        //plus la distance est élevée, plus cela a un impact négatif
        //d'un autre cote, bien de voir des gens : impact positif
        int impactMent = (perso.getDonneeLieu())%10 - 4;
        perso.setMental(-impactMent);

        //rapporte de l'argent
        perso.setMonnaie(perso.getDonneeLieu()*3);
    }
};

#endif // ENTREPRISE_H
