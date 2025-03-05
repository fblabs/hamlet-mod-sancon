#ifndef HMODIFYROW_H
#define HMODIFYROW_H

#include <QWidget>
#include "huser.h"
#include <QSqlDatabase>
#include <QDate>
#include <QSqlTableModel>

namespace Ui {
class HModifyRow;
}

class HModifyRow : public QWidget
{
    Q_OBJECT

public:
    explicit HModifyRow(const int p_id=-1, const int p_idrow=-1, const int p_row=-1, HUser *p_user=0, QSqlDatabase p_db=QSqlDatabase(), QWidget* parent=0);
    ~HModifyRow();

private:
    Ui::HModifyRow *ui;
    int idp;
    int row;
    int idrow;
    HUser* user;
    QSqlDatabase db;
    QDate current_row_date;
    QSqlTableModel *rows_model=new QSqlTableModel(0,db);
private slots:
    void getClients();
    void getProducts();
   // void getTappi(); REMOVED
    void initSanityModel();
    void loadRow();
    void on_cbCliente_currentIndexChanged(int index);
    void on_pbClose_clicked();
    void on_pbSave_clicked();
    void calcTotale();
    void on_leTotal_returnPressed();
    void saveRow();
    void setPermissions(HUser *p_user=0);


    void on_pbSaveLots_clicked();

    void on_leQuant_returnPressed();

    void on_leVaso_returnPressed();
    bool eventFilter(QObject *target, QEvent *event);
    void on_cbPartenza_toggled(bool checked);

signals:
    void done();
};

#endif // HMODIFYROW_H
