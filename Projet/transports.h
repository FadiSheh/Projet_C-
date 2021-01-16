#ifndef TRANSPORTS_H
#define TRANSPORTS_H
#include "lieux.h"

class transports:public lieux
{
public:
    transports();
    int tenirBarreBus();
    int tenirBarreMetro();
    int assisBus();
    int assisMetro();
};

#endif // TRANSPORTS_H
