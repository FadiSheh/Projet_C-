#ifndef JEU_H
#define JEU_H

#include <QDialog>
#include <QString>
#include <QListWidgetItem>
#include "menu.h"
#include"personnage.h"

namespace Ui {
class jeu;
}

class jeu : public QDialog
{


    Q_OBJECT

    int bouton_clicke;
    QListWidgetItem *i_deplacer, *i_physique, *i_mental; //Menu action
    //QListWidgetItem *d_travail, *d_plage, *d_cinema, *d_bar; //Menu deplacer
    QListWidgetItem *m_inviter, *m_lire, *m_jouer,*m_psychologue; //Menu action mental
    QListWidgetItem *p_musculation, *p_jogging, *gel_hydroalcoolique, *p_vaccin; //Menu action physique
    int cashouille;


public:
    explicit jeu(QWidget *parent = nullptr);
    ~jeu();


private slots:
    void on_progressBar_valueChanged(int value);

    void on_Action_clicked();

    void on_l_action_itemClicked(QListWidgetItem *item);

    void on_l_deplacer_itemClicked(QListWidgetItem *item);

private:

    Ui::jeu *ui;



};


#endif // JEU_H
