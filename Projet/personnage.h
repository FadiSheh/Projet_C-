#ifndef PERSONNAGE_H
#define PERSONNAGE_H


class Personnage
{
public:
    Personnage(bool _vaccine, int _physique, int _mental);
    ~Personnage();


int getPhy() const{

    return physique;
}

int getMent() const{

    return mental;
}

double getContamine() const{

    return contamine;
}

double getContaminant() const{

    return contaminant;
}

bool getImmunite() const{

      return immunite;
}



void lavageMains();
void gelHydrauAlcoolique();
void desinfecterAchat();
void porterMasque();




private:

    bool immunite;
    bool vaccine;
    int physique;
    int mental;
    float contamine;
    float contaminant;
};

#endif // PERSONNAGE_H
