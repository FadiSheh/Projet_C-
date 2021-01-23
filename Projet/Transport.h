#ifndef TRANSPORT_H
#define TRANSPORT_H

#include<iostream>
#include<cstdlib>
#include <string>

#include "lieu.h"

class Transport : public Lieu{
private:
    static std::default_random_engine _generator;
    static std::uniform_int_distribution<int> _distribution;

protected:
    //int temps; //temps passé dedans
    int distanceMax; //distance max qu'on peut parcourir avec

public:
    Transport(std::string name) : Lieu(name) {
        distanceMax = (int)(rand()%15);
    }

    int getDistanceMax(){
        return distanceMax;
    }

};


#endif // TRANSPORT_H
