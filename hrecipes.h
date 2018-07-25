#ifndef HRECIPES_H
#define HRECIPES_H

#include <QWidget>
#include <QSqlRelationalTableModel>
#include <QDataWidgetMapper>
#include <QStandardItem>
#include <QStandardItemModel>


namespace Ui {
class HRecipes;
}

class HRecipes : public QWidget
{
    Q_OBJECT

    bool canupdate;

public:
    explicit HRecipes(QWidget *parent = 0);
    ~HRecipes();
    void setConnectionName(QString conn, bool upd);
private slots:
    void on_lineEdit_textChanged(const QString &arg1);
    void caricaRicetta();
    int getMaxID();
    void updateDataRecipe();
    void updateNote();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    int setDB();
    void onConnectionNameSet();


    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();




    void on_pushButton_7_clicked();

    void on_tvRecipe_clicked(const QModelIndex &index);

    void on_pbNote_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::HRecipes *ui;
    QSqlDatabase db;
    QSqlRelationalTableModel* tmProdotti;
    QSqlRelationalTableModel* tmRecipe;
    QSqlRelationalTableModel* tmRecipeRows;
    QSqlQueryModel *model;
    QDataWidgetMapper* mapper;
    QString sIDProdotto;
    QString sIdRicetta;
    int maxID;
    QString sConnection;
    QStandardItemModel *mod;
    int mode;
    int idProdottoMaster;
    float getTotalQuantity();


    void setUI(bool pbtn, bool pbtn2, bool pbtn3, bool pbtn4, bool btx);
    QList<QStandardItem*> recipeRowNew(int IDRicetta, int Riga, int idPrd,QString pro, float iquantita, int bprod);

    void setupForm();

    int idNuovaRicetta;
    int iNuovaRiga;

};

#endif // HRECIPES_H
