#include "personnage.h"

Personnage::Personnage(bool _vaccine, int _physique, int _mental)
{
    vaccine = _vaccine;
    physique= _physique;
    mental = _mental;

}

Personnage::~Personnage(){};

void Personnage::lavageMains(){

    this->mental+=10;

}

void Personnage::gelHydrauAlcoolique(){

}

void Personnage::desinfecterAchat(){

}
void Personnage::porterMasque(){

}
