#ifndef MENU_H
#define MENU_H

#include <QDialog>

namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

    int choix_perso;
    int choix_diff;

private slots:


    void on_cb_amelie_clicked(bool checked);

    void on_cb_fadi_clicked(bool checked);

    void on_pb_Demarrer_clicked();

    void on_cb_facile_clicked(bool checked);

    void on_cb_difficile_clicked(bool checked);

private:
    Ui::Menu *ui;

};

#endif // MENU_H
