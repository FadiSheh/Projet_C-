#include <QApplication>
#include <QPushButton>
#include "jeu.h"



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    jeu fenetre_menu;
    fenetre_menu.show();
    fenetre_menu.initList();
    fenetre_menu.listingLieux();
    return app.exec();
}
