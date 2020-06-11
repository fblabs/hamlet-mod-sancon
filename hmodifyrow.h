#ifndef HMODIFYROW_H
#define HMODIFYROW_H

#include <QWidget>
#include "huser.h"
#include <QSqlDatabase>

namespace Ui {
class HModifyRow;
}

class HModifyRow : public QWidget
{
    Q_OBJECT

public:
    explicit HModifyRow(int p_id=-1, int p_row=-1, HUser *p_user=0, QSqlDatabase p_db=QSqlDatabase(),QWidget* parent=0);
    ~HModifyRow();

private:
    Ui::HModifyRow *ui;
    int idp;
    int row;
    HUser* user;
    QSqlDatabase db;
private slots:
    void getClients();
    void getProducts();
   // void getTappi(); REMOVED
    void initSanityModel();
    void loadRow();
    void on_cbCliente_currentIndexChanged(int index);
    void on_pbClose_clicked();
    void on_pbSave_clicked();
    double calcTotale();
    void on_leTotal_returnPressed();
    void saveRow();


signals:
    done();
};

#endif // HMODIFYROW_H
