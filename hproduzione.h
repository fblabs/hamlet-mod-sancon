#ifndef HPRODUZIONE_H
#define HPRODUZIONE_H

#include <QWidget>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QStandardItem>
#include <QList>
#include <QStandardItemModel>
#include <QSqlRelationalTableModel>
#include <QSqlQueryModel>
#include "huser.h"


#include "hprint.h"



namespace Ui {
class HProduzione;
}

enum AZIONI {
         CARICO=1,
         SCARICO=2,
         PRODUZIONE=3
         };

enum UNITA_DI_MISURA { KG=0, PZ=1, NA=2};


class HProduzione : public QWidget
{
    Q_OBJECT

public:
    explicit HProduzione(QWidget *parent = 0);
    ~HProduzione();
    void setUserId(int puserId);
    void setConnection(QString conn);
    void init(QString conn,int userid);



private:
    Ui::HProduzione *ui;

    // database

    QSqlDatabase db;

    // lvRicette
   // QSqlQueryModel *tmProdotti;
    QSqlRelationalTableModel *tmClienti;
    QSqlRelationalTableModel *tmProdotti;
    QSqlRelationalTableModel *tmRicette;
    QSqlRelationalTableModel *tmRigheRicette;
    QSqlRelationalTableModel *tmAssociazioni;
    QSqlRelationalTableModel *tmSubclienti;
    QStandardItemModel *ltm;
    QStandardItemModel *lastlotsm;
    QString sIdProdottoMaster; //il prodoto di cui vogliamo trovare la ricetta
    QString sPrd;
    QString sPrdDesc;
    QString SCurrentTableProduct;

    QString sLotToAdd;
    int userID;
    QString sLot;
    QString sConn;
    QString newLot;
    QString sProdMaster;
    QString sQuantiLots;
    QSqlQueryModel *qmRicette;
private slots:
   void getClients();
   void getRecipesForClient();
   void getRecipe();
   void howManyLastLotsModel();
   void setupForm();
   void recipeSelected();
   void caricaRicetta();
   void lastFiveLots();
   void productSelected();
   void lotSelected();
   int addNewOperation(QString idProd, QString Lot, QString note, double quantita, bool carico);
   void calculateWeights();
   bool addLot();
   int addLot(QString);
   void clientSelected();
   QString getNewLot(QString sCurProd);
   QList<QStandardItem*> createRecipeRow(QString sProd, QString sDescProdotto, QString sPeso);
   QList<QStandardItem*> lastFiveLotsList(QString sLot, QString sGiacenza);
   void on_pushButton_clicked();
   int getProdIDint(QString Lot);
   QString getProdId(QString lot);
   void addProductionRow();
   int saveProduction();

   //--nuovo flusso

//   QString aggiungiNuovoLotto(QString idprodotto);
// int aggiungiNuovaOperazione(QString  slotto, bool carico);


   void on_pushButton_4_clicked();
   void on_pushButton_5_clicked();
   void on_lineEdit_textChanged(const QString &arg1);
   void calcolaPesi();
   void on_pushButton_6_clicked();
   void on_pushButton_2_clicked();
   //void on_pushButton_7_clicked();
   void on_pushButton_3_clicked();
   void onConnectionNameSet();
   void on_lvRicette_clicked(const QModelIndex &index);
  // void on_lvLastlots_clicked(const QModelIndex &index);
   void on_leDaFare_returnPressed();
   void on_cbQuantiItem_currentIndexChanged(const QString &arg1);
   void on_cbUsaSublienti_toggled(bool checked);

};

#endif // HPRODUZIONE_H
