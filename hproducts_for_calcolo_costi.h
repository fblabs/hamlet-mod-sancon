#ifndef HPRODUCTS_FOR_CALCOLO_COSTI_H
#define HPRODUCTS_FOR_CALCOLO_COSTI_H

#include <QWidget>
#include <QSqlDatabase>
#include "huser.h"

enum TYPES{

    MATERIALI=1,
    PRODOTTI=2,
    CONTENITORI=3,
    CAPSULE=4,
    VASI=5
};

namespace Ui {
class HProducts_for_calcolo_costi;
}

class HProducts_for_calcolo_costi : public QWidget
{
    Q_OBJECT

public:
    explicit HProducts_for_calcolo_costi(int p_selectTypology=-1,HUser *p_user=nullptr,QSqlDatabase p_db=QSqlDatabase(), QWidget *parent = nullptr);
    ~HProducts_for_calcolo_costi();

private:
    Ui::HProducts_for_calcolo_costi *ui;
    QSqlDatabase db;
    HUser *user;
    int select_tipology;

private slots:

    void get_tipologie(int select_tipology=-1);
    void on_cbTipologie_currentIndexChanged(int index);
    void on_pbClose_clicked();
    void on_chkGeneric_toggled(bool checked);
    void on_pbAdd_clicked();

signals:
    void sg_data();
    void sg_item_added(QString item, QString costo);
};

#endif // HPRODUCTS_FOR_CALCOLO_COSTI_H
