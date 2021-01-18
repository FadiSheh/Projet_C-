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
        Vaccine() : Personnage() {
            immunite = true;
        }
        Vaccine(int aouf, int diffi) : Personnage(aouf, diffi){
            immunite = true;
        }

        std::string toString() const{
                    std::string s = "Le Personnage n'est pas vacciné. ";
                    s += "Il n'est pas immunisé. Son physique : " + std::to_string(getPhy());
                    s += " Son mental : " + std::to_string(getMent());
                    s+= " Son argent : " + std::to_string(getMonnaie());
                    return s;
                }
};


#endif // VACCINE_H
