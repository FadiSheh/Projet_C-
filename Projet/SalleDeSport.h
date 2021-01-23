#ifndef SALLEDESPORT_H
#define SALLEDESPORT_H



#include<iostream>
#include<cstdlib>
#include <string>

#include "Loisir.h"

class SalleDeSport : public Loisir{
private:

public:
    //la donnée du lieu est le nbre de machines touchées par le personnage
    SalleDeSport(std::string name) : Loisir(name) {
        frequentationMax = 60; //de la salle de cinéma
        fContamination = 80;
        affluence = 30;
        nbMax = 3; //nombre de films visualisés
    }

    void impact(Personnage &perso) const{
        //plus le nb de machine est élevé, plus cela a impact négatif
        //plus de risque de contamination
        //cependant positif pour le physique, booste les défenses immunitaires
        int possible =perso.setMonnaie(-1*perso.getDonneeLieu());
        if (possible){

        int impactPhy;
        impactPhy = (perso.getDonneeLieu())%10 + affluence%10*fContamination%10 - 4;

        perso.setPhysique(-impactPhy);

        //plus le nb de machines est élevé, plus cela a un impact positif
        int impactMent = (perso.getDonneeLieu())%10 * 2;
        perso.setMental(impactMent);


       } else { QMessageBox messageBox;
            messageBox.critical(0,"Manque de crédits","Trop de monde dans la salle!");
            messageBox.setFixedSize(500,200);}

    }

};


#endif // SALLEDESPORT_H
