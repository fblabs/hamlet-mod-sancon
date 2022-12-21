#ifndef HBIODETAILS_H
#define HBIODETAILS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include "huser.h"


namespace Ui {
class HBioDetails;
}

class HBioDetails : public QWidget
{
    Q_OBJECT

public:
    explicit HBioDetails(int idlotto=-1, QSqlDatabase pdb=QSqlDatabase(),HUser *user=nullptr,QWidget *parent = nullptr);
    ~HBioDetails();

private:
    Ui::HBioDetails *ui;
    QSqlDatabase db;
    int ACTION;
    int idlotto;
    QSqlQueryModel *mod;

 private slots:
    void getLotData();
    void on_pbClose_clicked();
    void on_pbSave_clicked();
    bool save_data();
    void print();


    void on_pbPrint_clicked();

signals:
    void add_saved();

};

#endif // HBIODETAILS_H
