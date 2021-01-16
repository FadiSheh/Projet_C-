#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <QString>

class Personnage
{
public:
    Personnage();
    Personnage(int _AouF, int _niveau);
    ~Personnage();

QString getNom(){return nom;}

int getPhy() const{return physique;}

int getMent() const{return mentale;}

int getPieces() const {return pieces;}

void addPieces(int val){pieces += val;}

void addPhy(int val){physique += val;}
void addMent(int val){mentale +=val;}

double getContamine() const{return contamine;}

double getContaminant() const{ return contaminant;}




void lavageMains();
void gelHydrauAlcoolique();
void desinfecterAchat();
void porterMasque();




private:

    int AouF;
    bool immunise;
    float contamine;
    float contaminant;
    QString nom;
    int pieces;

protected:
    int physique;
    int mentale;

};

#endif // PERSONNAGE_H
