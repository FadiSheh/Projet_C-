#ifndef LOISIR_H
#define LOISIR_H

#include<cstdlib>
#include <string>

#include "lieu.h"

class Loisir : public Lieu{
private:
    static std::default_random_engine _generator;
    static std::uniform_int_distribution<int> _distribution;

protected:
    int nbMax; //nombre max de conso dans le lieu de loisirs

public:
    Loisir(std::string name) : Lieu(name) {
        nbMax = (int)(rand()%15);
    }

    int getNbMax() const{
        return nbMax;
    }
};

#endif // LOISIR_H
