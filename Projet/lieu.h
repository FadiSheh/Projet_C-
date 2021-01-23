#ifndef LIEU_H
#define LIEU_H
#include<iostream>
#include<cstdlib>
#include <string>
//#include <vector>
//#include <map>
#include <QDialog>
#include <QMessageBox>
#include "personnage.h"

class Lieu{

protected:
    int frequentationMax; //frequentation Max du lieu, dit si oui ou non le perso peut y alle
    int fContamination; //facteur de contamination
    int affluence; //si ya bcp de monde ou pas dans le courant //pourrait être une liste de personnages
    std::string nom;
    //std::map<std::string, int> mapPerso; //Personnage présents dans le lieu

    public:

    Lieu(std::string name){
        nom = name;
        affluence = 1; //les lieux sont tous initalement tous remplis d'une personne
    }

    int getFreqMax() const{
        return frequentationMax;
    }

    int getFContamination() const{
        return fContamination;
    }

    int getAffluence() const{
        return affluence;
    }

    std::string getNom() const{
        return nom;
    }

    void setAffluence(int newAffluence){
        affluence = newAffluence;
    }

    //voir en fonction du type de personnage
    virtual void impact(Personnage &perso) const=0;
};
#endif // LIEU_H
