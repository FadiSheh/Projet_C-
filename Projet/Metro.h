#ifndef METRO_H
#define METRO_H


#include<iostream>
#include<cstdlib>
#include <string>

#include "Transport.h"

class Metro : public Transport {
private:

public:
    Metro(std::string name) : Transport(name) {
        frequentationMax = 90;
        fContamination = 80;
        affluence = 50;
        distanceMax = 40;
    }

    void impact(Personnage &perso) const{
        int possible =   perso.setMonnaie(-5);

        if (possible){
        //plus la distance et l'affluence st élevées, plus cela a impact négatif
        //plus de risque de contamination
        //si la distance max est atteinte, ça compte double
        int impactPhy;
        if(perso.getDonneeLieu() == distanceMax){
            impactPhy = 2*(perso.getDonneeLieu())%10 + affluence%10*fContamination%10;
        }
        else{
            impactPhy = (perso.getDonneeLieu())%10 + affluence%10*fContamination%10;
        }
        perso.setPhysique(-impactPhy);

        //plus la distance est élevée, plus cela a un impact négatif
        //plus de risque d'être énervé
        int impactMent = (perso.getDonneeLieu())%10 + 5;
        perso.setMental(-impactMent);

        }

        else { QMessageBox messageBox;
            messageBox.critical(0,"Manque crédits","Panne de signalisation!");
            messageBox.setFixedSize(500,200);}

    }
};
#endif // METRO_H
