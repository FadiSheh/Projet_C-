#ifndef JEU_H
#define JEU_H

#include <QDialog>
#include <QString>
#include <QListWidgetItem>
#include "menu.h"
#include"personnage.h"
#include "vaccine.h"

namespace Ui {
class jeu;
}

class jeu : public QDialog
{


    Q_OBJECT

    int bouton_clicke;
    QListWidgetItem *i_Plage, *i_Travail, *i_Transports;

    QListWidgetItem *i_Marche = new QListWidgetItem("Marcher");
    QListWidgetItem *i_Bus = new QListWidgetItem("Bus");
    QListWidgetItem *i_Train = new QListWidgetItem("Train");
    QListWidgetItem *i_Velo = new QListWidgetItem("Vélo");



public:
    explicit jeu(QWidget *parent = nullptr);
    ~jeu();


private slots:
    void on_progressBar_valueChanged(int value);

    void on_l_principale_itemClicked(QListWidgetItem *item);

    void on_l_transports_itemDoubleClicked(QListWidgetItem *item);

private:

    Ui::jeu *ui;






};


#endif // JEU_H
