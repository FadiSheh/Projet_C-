#include "menu.h"
#include "ui_menu.h"
#include "jeu.h"
#include <QApplication>
#include <QMessageBox>

Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

}

Menu::~Menu()
{
    delete ui;
}



void Menu::on_cb_amelie_clicked(bool checked)
{
    ui->cb_fadi->setChecked(!checked);
}


void Menu::on_cb_fadi_clicked(bool checked)
{
     ui->cb_amelie->setChecked(!checked);
}


void Menu::on_pb_Demarrer_clicked()
{
    if(ui->cb_fadi->isChecked()==true || ui->cb_amelie->isChecked()==true){

        jeu partie;
        partie.setModal(true);
        partie.exec();
        hide();

    } else { QMessageBox::warning(this,"Erreur","Veuillez choisir un personnage");


    }
}
