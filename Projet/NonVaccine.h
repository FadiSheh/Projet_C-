#ifndef NONVACCINE_H
#define NONVACCINE_H

#include "personnage.h"
#include<iostream>
#include<cstdlib>
#include <string>
#include <random>


class NonVaccine : public Personnage {

    private:

        static std::default_random_engine _generator;
        static std::uniform_int_distribution<int> _distribution;

    public:
        //constructeurs - destructeurs
        NonVaccine() : Personnage(){
            immunite = false;
            nom = "NonVaccine";
        }

        NonVaccine(std::string lieu) : Personnage(lieu){
            immunite = false;
            nom = "NonVaccine";
        }

        NonVaccine(int aouf, int diffi) : Personnage(aouf,diffi){
            immunite = false;
        }

        std::string toString() const{
            std::string s = "Le Personnage n'est pas vacciné. ";
            s += "Il n'est pas immunisé. Son physique : " + std::to_string(getPhy());
            s += " Son mental : " + std::to_string(getMent());
            s+= " Son argent : " + std::to_string(getMonnaie());
            return s;
        }
};

#endif // NONVACCINE_H
