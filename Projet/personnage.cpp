#include "personnage.h"

Personnage::Personnage(int _AouF,int _niveau)
{
    if (_niveau==1 ){
        pieces=100;
        immunise=true;
    } else {

        pieces = 500;
        immunise = false;
    }

    AouF = _AouF;

    if (AouF==1){
        nom="Fadi";
        physique = 60;
        mentale=30;

    }else{

        nom="Amélie";
        physique = 30;
        mentale= 60;
    }

}


Personnage::Personnage(){
immunise = rand()%100;
physique= rand()%100;
mentale = rand()%100;
nom = "Custom";
};

Personnage::~Personnage(){


};

void Personnage::lavageMains(){



}

void Personnage::gelHydrauAlcoolique(){

}

void Personnage::desinfecterAchat(){

}
void Personnage::porterMasque(){

}
