#ifndef BUS_H
#define BUS_H

#include<iostream>
#include<cstdlib>
#include <string>

#include "Transport.h"

class Bus : public Transport {
private:

public:
    Bus(std::string name) : Transport(name) {
        frequentationMax = 30;
        fContamination = 80;
        affluence = 90;
        distanceMax = 30;
    }

    void impact(Personnage &perso) const{

        int possible =   perso.setMonnaie(-2);

        if (possible){
        int impactPhy = (perso.getDonneeLieu())%10 + affluence%10*fContamination%10;
        perso.setPhysique(-impactPhy);

        int impactMent = (perso.getDonneeLieu())%10 + 3;
        perso.setMental(-impactMent);
        }

        else { QMessageBox messageBox;
            messageBox.critical(0,"Manque crédits","Panne de Bus!");
            messageBox.setFixedSize(500,200);}

    }
};


#endif // BUS_H
