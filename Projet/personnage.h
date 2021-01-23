#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <QRandomGenerator>
#include <stdio.h>
#include <stdlib.h>
#include <QVector>
#include <QMessageBox>

using namespace std;

class Personnage {

    private:

        static std::default_random_engine _generator;
        static std::uniform_int_distribution<int> _distribution;

    protected:
        int monnaie;
        bool immunite;
        int physique;
        int mental;
        int contamine;
        int contaminant;
        int donneelieu; //est soit une donnee de temps, de distance, de nombre d'artcicles
        int AouF; //0 : A ; 1 : F
        int difficulte; //0 : facile ; 1 : difficle
        string nom;
        QVector<QString> lieuxAutorises;
        QString lieuActuel;



    public:
        //constructeurs - destructeurs

        Personnage(){
            contamine = (int)(rand()%100);
            contaminant = (int)(rand()%100);
            physique = (int)(rand()%100);
            mental = (int)(rand()%100);
            donneelieu = 1;
            nom = "Jean-Pierre";
            monnaie = 99;
        };


        Personnage(std::string lieu){

                    contamine = (int)(rand()%100);
                    contaminant = (int)(rand()%100);
                    physique = (int)(rand()%100);
                    mental = (int)(rand()%100);
                    donneelieu = 1;
                    lieuActuel = QString::fromStdString(lieu);
                    //lieux autorises a tous
                    lieuxAutorises.push_back("Metro");
                    lieuxAutorises.push_back("Bus");
                    lieuxAutorises.push_back("Maison");
                    lieuxAutorises.push_back("Entreprise");
                    lieuxAutorises.push_back("Universite");
                    lieuxAutorises.push_back("Bar");
                    lieuxAutorises.push_back("SalleDeSport");
                };

        Personnage(int aouf, int diffi){ //valeurs entre 36 et 65 pour physique et mental
            AouF = aouf;
            difficulte = diffi;

            contamine = (int)(rand()%100);
            contaminant = (int)(rand()%100);
            donneelieu = 1; //initialement la donnee est initialisée à 1, pour les tests du main

            if(AouF == 0){
                physique = 36;
                mental = 65;
                nom = "Amélie";

            }
            else{
                physique = 36;
                mental = 65;
                nom = "Fadi";
            }

            if(difficulte == 0){
                //niveau facile
                monnaie = 20;
            }
            else{
                monnaie = 20;
            }


            lieuxAutorises.push_back("Metro");
            lieuxAutorises.push_back("Bus");
            lieuxAutorises.push_back("Pharmacie");
            lieuxAutorises.push_back("Supermarche");
            lieuxAutorises.push_back("Universite");
            lieuxAutorises.push_back("Entreprise");
            lieuxAutorises.push_back("SalleDeSport");
            lieuxAutorises.push_back("Cinema");
            lieuxAutorises.push_back("Bar");
        };

        virtual ~Personnage(){}; //virtual

        //accesseurs - modificateurs
        string getNom(){return nom;}

        int getPhy() const{
            return physique;
        }
        int getMent() const{
            return mental;
        }
        int getContamine() const{
            return contamine;
        }
        int getContaminant() const{
            return contaminant;
        }
        bool getImmunite() const{
            return immunite;
        }
        int getDonneeLieu() const{
            //std::cout << "la donnee du lieu est égale à : " << donneelieu << std::endl;
            return donneelieu;
        }
        int getMonnaie() const{
            return monnaie;
        }
        int setMonnaie(int mon){
            int temp = monnaie + mon;

            if (temp < 0){ return 0;} //si pas assez d'argent renvoie 0

            else {monnaie = monnaie + mon;}

            return 1;

        }
        void setDonneeLieu(int donnee){
            donneelieu = donnee;
        }
        void setMental(signed int new_ment){
            mental = mental + new_ment;
            if (mental<0){mental=0;}
            if (mental>100){mental=100;}
        }
        void setPhysique(signed int new_physi){
            physique = physique + new_physi;
            if (physique<0){physique=0;}
            if (physique>100){physique=100;}
        }

        QVector<QString> getLieuxAutorises(){ return lieuxAutorises;}

        virtual std::string toString() const = 0;
        //virtual void contamination() const = 0;

        //actions pareil pour tous les personnages
        void lavageMains(){

            if (this->setMonnaie(-2)){setPhysique(4);} else { QMessageBox messageBox;
                messageBox.critical(0,"Erreur","Pas assez de crédits!");
                messageBox.setFixedSize(500,200);}

        }

        void gelHydroAlcoolique(){
            if (this->setMonnaie(-1)){setPhysique(2);} else { QMessageBox messageBox;
                messageBox.critical(0,"Erreur","Pas assez de crédits!");
                messageBox.setFixedSize(500,200);}
        }



};
#endif // PERSONNAGE_H
