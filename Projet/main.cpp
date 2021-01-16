#include <QApplication>
#include <QPushButton>
#include "jeu.h"



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    jeu fenetre_menu;
    fenetre_menu.show();




    return app.exec();
}
