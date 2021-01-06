#include <QApplication>
#include <QPushButton>
#include "menu.h"



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Menu fenetre_menu;
    fenetre_menu.show();




    return app.exec();
}
