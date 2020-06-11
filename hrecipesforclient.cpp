#include "hrecipesforclient.h"
#include "ui_hrecipesforclient.h"
#include <QSqlQueryModel>
#include <QSqlQuery>

#include <QSqlError>
#include <QDebug>
#include "hprint.h"


HRecipesForClient::HRecipesForClient(QSqlDatabase pdb, int idRecipe, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HRecipesForClient)
{
    ui->setupUi(this);

   // ui->pbPrint->setVisible(false);
    db=pdb;


    if(idRecipe<0) // se nn viene passato l'id della ricetta in argomento
    {
        getRecipes();

    }
    else
    {
        ui->cbRecipes->setVisible(false);
        getClientsForRecipe(idRecipe);
    }

}

HRecipesForClient::~HRecipesForClient()
{
    delete ui;
}

void HRecipesForClient::on_pbClose_clicked()
{
    close();
}

void HRecipesForClient::on_cbRecipes_currentIndexChanged(int index)
{
    int idricetta;

    idricetta=modrecipes->index(ui->cbRecipes->currentIndex(),0).data(0).toInt();
    qDebug()<<idricetta;
    getClientsForRecipe(idricetta);

}

void HRecipesForClient:: getClientsForRecipe(int idrecipe)
{


    modClients=new QSqlQueryModel();
    QSqlQuery q(db);
  //  QString sql= "SELECT anagrafica.ragione_sociale from anagrafica,ricette,associazioni WHERE anagrafica.ID=associazioni.ID_cliente  AND associazioni.ID_ricetta=ricette.ID AND ricette.ID=:idricetta";
    //QString sql="SELECT anagrafica.ragione_sociale from anagrafica,associazioni, ricette,prodotti where anagrafica.ID=associazioni.ID_cliente and ricette.ID=associazioni.ID_ricetta AND prodotti.ID=ricette.ID_prodotto and ricette.ID_prodotto=:idricetta";
    QString sql="SELECT anagrafica.ragione_sociale as 'CLIENTI ASSOCIATI' from anagrafica,associazioni where anagrafica.ID = associazioni.ID_cliente and associazioni.ID_ricetta=:idricetta";
    q.prepare(sql);
    q.bindValue(":idricetta",idrecipe);

    if(!q.exec())
    {
        return;
    }
    else
    {
        modClients->setQuery(q);
        ui->tvClients->setModel(modClients);
        ui->tvClients->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    }
}

void HRecipesForClient::getRecipes()
{
    QSqlQuery q(db);
    QString sql;

    sql="SELECT ricette.ID,prodotti.descrizione FROM prodotti,ricette WHERE prodotti.ID = ricette.ID_prodotto ORDER BY prodotti.descrizione ASC";
    q.prepare(sql);
    if(q.exec())
    {
        modrecipes=new QSqlQueryModel();
        modrecipes->setQuery(q);
    }

    ui->cbRecipes->setModel(modrecipes);
    ui->cbRecipes->setModelColumn(1);
}

void HRecipesForClient::print()
{
    HPrint *f =new HPrint();

    int rows=ui->tvClients->model()->rowCount();




    f->append("RICETTA: "+ ui->cbRecipes->currentText(),false);
    f->append("CLIENTI:");
    f->append("");
    f->toggleImageUI(false);
    f->showMaximized();
    QTextTable *tb=f->addTable(rows,1,QTextTableFormat());
    QString txt;

   int r,c;
   c=0;


    f->showMaximized();

    for (r=0;r<rows;r++)
    {

            txt=ui->tvClients->model()->index(r,c).data(0).toString();
            f->writeTableContent(tb,r,0,QTextCharFormat(),txt);
            QApplication::processEvents();

    }

    QApplication::processEvents();
}

void HRecipesForClient::on_pbPrint_clicked()
{
    print();
}
