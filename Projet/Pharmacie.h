#ifndef PHARMACIE_H
#define PHARMACIE_H

#include<iostream>
#include<cstdlib>
#include <string>
#include <random>

#include "Course.h"

class Pharmacie : public Course{
private:

public:
    Pharmacie(std::string name) : Course(name) {
        //on peut acheter moins d'articles à la pharmacie
        nbArticlesMax = 5;
        frequentationMax = 30;
        fContamination = 80;
        affluence = 20;
    }

    void impact(Personnage &perso) const{

        int possible =  perso.setMonnaie(-1*(perso.getDonneeLieu()));
        if (possible){
        //plus il y a d'articles de touchés, plus c'est négatif
        int impactPhy = (perso.getDonneeLieu()) + affluence%10*fContamination%10;
        perso.setPhysique(-impactPhy);

        int impactMent = (perso.getDonneeLieu())%10 + 3;
        perso.setMental(-impactMent);

        }

        else { QMessageBox messageBox;
            messageBox.critical(0,"Manque crédits","Les stocks sont vides!");
            messageBox.setFixedSize(500,200);}
    }
};


#endif // PHARMACIE_H
