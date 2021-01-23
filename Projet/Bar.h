#ifndef BAR_H
#define BAR_H

#include<iostream>
#include<cstdlib>
#include <string>

#include "Loisir.h"

class Bar : public Loisir{
private:

public:
    //la donnée du lieu pour le bar est le nombre de bières qui va être bu
    Bar(std::string name) : Loisir(name) {
        frequentationMax = 6; //de la table
        fContamination = 80;
        affluence = 2;
        nbMax = 4; //nombre de bières max
    }

    void impact(Personnage &perso) const{

        int possible =       perso.setMonnaie(-3*perso.getDonneeLieu());

        if (possible){
        //plus le nb de bière est élevé, plus cela a impact négatif
        //plus de risque de contamination
        //si le nb max de biere est atteint, ça compte double
        int impactPhy;
        if(perso.getDonneeLieu() == nbMax){
            impactPhy = 2*(perso.getDonneeLieu())%10 + affluence%10*fContamination%10;
        }
        else{
            impactPhy = (perso.getDonneeLieu())%10 + affluence%10*fContamination%10;
        }
        perso.setPhysique(-impactPhy);

        //plus le nb de biere est élevé, plus cela a un impact positif
        int impactMent = (perso.getDonneeLieu())%10 * 5;
        perso.setMental(impactMent);

        }

        else { QMessageBox messageBox;
            messageBox.critical(0,"Manque crédits","L'abus d'alcool est dangereux pour la santé!");
            messageBox.setFixedSize(500,200);}

    }

};
#endif // BAR_H
