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

private slots:


    void on_cb_amelie_clicked(bool checked);

    void on_cb_fadi_clicked(bool checked);

    void on_pb_Demarrer_clicked();

private:
    Ui::Menu *ui;

};

#endif // MENU_H
