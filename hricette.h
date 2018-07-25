#ifndef HRICETTE_H
#define HRICETTE_H

#include <QWidget>
#include <QtGui>
#include <QString>
#include <QSql>
#include<QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRelationalTableModel>
#include <QDataWidgetMapper>

namespace Ui {
class HRicette;
}

class HRicette : public QWidget
{
    Q_OBJECT

public:
    explicit HRicette(QWidget *parent = 0);
    ~HRicette();
    int SetDB();
    QSqlDatabase db;

private slots:
    void setupForm();
    void addRecipe();
    void caricaRicetta();
   // int  getMaxID();


private:
    Ui::HRicette *ui;


    QSqlRelationalTableModel* ricmodel;
    QItemSelectionModel* rselm;

    QSqlRelationalTableModel* nomodel;
    QItemSelectionModel* nselm;

    QSqlRelationalTableModel* rrmodel;
    QItemSelectionModel* rrselm;

    QSqlRelationalTableModel* promodel;
    QItemSelectionModel* proselm;

    QDataWidgetMapper *rrmpr;
    QDataWidgetMapper *rcmpr;


};

#endif // HRICETTE_H
