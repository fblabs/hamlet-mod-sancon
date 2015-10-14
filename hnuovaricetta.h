#ifndef HNUOVARICETTA_H
#define HNUOVARICETTA_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QCompleter>
#include <QList>
#include <QStandardItem>
#include <QStandardItemModel>

namespace Ui {
class HNuovaRicetta;
}

class HNuovaRicetta : public QWidget
{
    Q_OBJECT

public:
    explicit HNuovaRicetta(QWidget *parent = 0);
    ~HNuovaRicetta();
    void init(QString conn);

private:
    Ui::HNuovaRicetta *ui;

    QSqlDatabase db;
    QString sConn;
    QSqlTableModel *tmprodotti;
    QSqlTableModel *tmCbProdotti;
    QStandardItemModel *tmRecipe;
    QCompleter *comp;
private slots:
    void addRecipeRow();
    int creaNuovoProdotto(QString nome);
   // int creaNuovaRicetta();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_5_clicked();
  //  void on_checkBox_toggled(bool checked);
    void getListProducts();
    void setRecipeName();
    void creaRicetta();
   // void creaRicettaProdottoEsistente();
    void on_pushButton_4_clicked();
    void on_rbNew_toggled(bool checked);
    void on_pushButton_3_clicked();
    void on_pushButton_8_clicked();
    void on_rbExisting_toggled(bool checked);
};

#endif // HNUOVARICETTA_H
