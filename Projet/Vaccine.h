#ifndef VACCINE_H
#define VACCINE_H

#include<iostream>
#include<cstdlib>
#include <string>
#include <random>
#include "personnage.h"

class Vaccine : public Personnage {

    /*private:
        static std::default_random_engine _generator;
        static std::uniform_int_distribution<int> _distribution;*/

        /*bool immunite;
        double physique;
        double mental;
        double contamine;
        double contaminant;
        int jours;*/
        /*std::string lieux;*/

    public:
        //constructeurs - destructeurs
        Vaccine(std::string lieu) : Personnage(lieu) {
            immunite = true;
            //ajout du lieu autorisé en plus
            lieuxAutorises.push_back("Cinema");
        }
        Vaccine(double physi, double ment) : Personnage(physi, ment){
            immunite = true;
            lieuxAutorises.push_back("Cinema");
        }
};


#endif // VACCINE_H
