#include "menu.h"
#include "ui_menu.h"
#include <QApplication>
#include <QMessageBox>

Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

    //Initialisation interface graphique

    //On fixe la couleur des frames
    QPalette pal = palette();
    pal.setColor(QPalette::Background,QColor(56,56,56));
    ui->niveau_diff->setAutoFillBackground(true);
    ui->niveau_diff->setPalette(pal);
    ui->niveau_diff->update();

    ui->frame_1->setAutoFillBackground(true);
    ui->frame_1->setPalette(pal);
    ui->frame_1->update();

    ui->frame_2->setAutoFillBackground(true);
    ui->frame_2->setPalette(pal);
    ui->frame_2->update();



}

Menu::~Menu()
{
    delete ui;
}



void Menu::on_cb_amelie_clicked(bool checked)   //Si Amélie est checked, il faut uncheck Fadi
{
    ui->cb_fadi->setChecked(!checked);
}


void Menu::on_cb_fadi_clicked(bool checked)     //Si Fadi est checked, il faut uncheck Amélie
{
     ui->cb_amelie->setChecked(!checked);
}


void Menu::on_cb_facile_clicked(bool checked)
{
    ui->cb_difficile->setChecked(!checked);
}

void Menu::on_cb_difficile_clicked(bool checked)
{
    ui->cb_facile->setChecked(!checked);
}


void Menu::on_pb_Demarrer_clicked()      //Click sur demarrer avec choix perso (1) Fadi (0) Amélie et niveau de difficulté (1) Hard (0) easy
{
    bool niveau = ui->cb_facile->isChecked()|| ui->cb_difficile->isChecked();
    bool perso = ui->cb_fadi->isChecked()|| ui->cb_amelie->isChecked();

    this->choix_diff = int(ui->cb_facile->isChecked());
    this->choix_perso = int(ui->cb_fadi->isChecked());

    if(perso && niveau){

        hide();}

    //Avertissement d'erreur, menu incomplet
     else if(!niveau){QMessageBox::warning(this,"Erreur","Veuillez choisir un niveau");} else { QMessageBox::warning(this,"Erreur","Veuillez choisir un personnage");


    }
}
