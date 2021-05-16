#ifndef HWORKPROGRAM_H
#define HWORKPROGRAM_H

#include <QWidget>
#include "huser.h"
#include <QSqlDatabase>
#include "hworkprogressmodel.h"
#include <QDate>
#include <QHeaderView>

namespace Ui {
class HWorkProgram;
}

class HWorkProgram : public QWidget
{
    Q_OBJECT

public:
    explicit HWorkProgram(HUser *p_user=0,QSqlDatabase p_db=QSqlDatabase(),QWidget *parent=0);
    ~HWorkProgram();

private slots:
    void on_pbAdd_clicked();
    bool createSheet(int p_line, QDate p_date);
    void getSheets();

    void on_tvStorico_clicked(const QModelIndex &index);
    void on_pbNewSheet_clicked();
    void refreshSheet();
    void updateSheet(int newrow, int oldrow);
    void setHeaders();
    void print(bool pdf=true);


    void on_pbSave_clicked();

    void on_pbClose_clicked();

    void on_cbshowrows_toggled(bool checked);

    void on_pbRemove_clicked();

    void on_tvGeneral_doubleClicked(const QModelIndex &index);

    void on_pbModify_clicked();

    void showModRow();

    void on_deDal_dateChanged(const QDate &date);

    void on_pbPrint_clicked();

    void on_checkBox_toggled(bool checked);

    void deleteSheet();

    void on_pbDeleteSheet_clicked();

    void on_pbSearch_clicked();

    void search();

    void on_pbReset_clicked();







private:
    Ui::HWorkProgram *ui;
    HUser* user;
    QSqlDatabase db;
    int id;
    HWorkProgressModel *wpmod;




};

#endif // HWORKPROGRAM_H
