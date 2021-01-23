#ifndef TRAVAIL_H
#define TRAVAIL_H

#include<iostream>
#include<cstdlib>
#include <string>

#include "lieu.h"

class Travail : public Lieu{
private:
    static std::default_random_engine _generator;
    static std::uniform_int_distribution<int> _distribution;

protected:
    int tempsMax;

public:
    Travail(std::string name) : Lieu(name) {
    }

    int getTempsMax(){
        return tempsMax;
    }

};


#endif // TRAVAIL_H
