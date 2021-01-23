#ifndef SUPERMARCHE_H
#define SUPERMARCHE_H

#include<iostream>
#include<cstdlib>
#include <string>
#include <random>

#include "Course.h"

class Supermarche : public Course{
private:

    static std::default_random_engine _generator;
    static std::uniform_int_distribution<int> _distribution;

public:
    Supermarche(std::string name) : Course(name) {
        nbArticlesMax = 15;
        frequentationMax = 70;
        fContamination = 80;
        affluence = 20;
    }

    void impact(Personnage &perso) const{

        int possible =  perso.setMonnaie(-2*(perso.getDonneeLieu()));

        if (possible){
        //plus il y a d'articles de touchés, plus c'est négatif
        int impactPhy = (perso.getDonneeLieu()) + affluence%10*fContamination%10;
        perso.setPhysique(-impactPhy);

        int impactMent = (perso.getDonneeLieu())%10 + 7;
        perso.setMental(-impactMent);

        }

        else { QMessageBox messageBox;
            messageBox.critical(0,"Manque de crédits","Nourriture pourrie!");
            messageBox.setFixedSize(500,200);}

    }

};


#endif // SUPERMARCHE_H
