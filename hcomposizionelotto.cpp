#include "hcomposizionelotto.h"
#include "ui_hcomposizionelotto.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>

HComposizioneLotto::HComposizioneLotto(QWidget *parent, QSqlDatabase pdb, int idLotto, QString descrizione) :
    QWidget(parent),
    ui(new Ui::HComposizioneLotto)
{

    ui->setupUi(this);
    ui->pushButton_2->setVisible(false);
    db=pdb;
    id=idLotto;
    desc=descrizione;
    ui->leDesc->setText(descrizione);
    getLotComposition();



}

HComposizioneLotto::~HComposizioneLotto()
{
    delete ui;
}

void HComposizioneLotto::getLotComposition()
{
    QSqlQuery q(db);
    QString sql;
    mod=new QSqlQueryModel();
    sql="select lotdef.ID,operazioni.data,lotdef.lot,prodotti.descrizione,anagrafica.ragione_sociale, operazioni.quantita,unita_di_misura.descrizione as 'Unità di misura',lotdef.giacenza as 'Giacenza' from operazioni,prodotti,lotdef,anagrafica,unita_di_misura where prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and anagrafica.ID=lotdef.anagrafica and unita_di_misura.ID=operazioni.um and operazioni.ID in (SELECT operazione from composizione_lot where ID_lotto=:lotid)";

    q.prepare(sql);
    q.bindValue(":lotid",QVariant(id));
    q.exec();


    mod->setQuery(q);

    if(mod->rowCount()>0)
    {
    ui->tableView->setModel(mod);

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );
    ui->tableView->setColumnHidden(0,true);
    }
    else
    {
        ui->tableView->setEnabled(false);


        setAttribute(Qt::WA_DeleteOnClose);

        close();


    }


}





void HComposizioneLotto::on_tableView_doubleClicked(const QModelIndex &index)
{
    int idlot=mod->index(ui->tableView->selectionModel()->currentIndex().row(),0).data(0).toInt();
    QModelIndex ixlot=mod->index(ui->tableView->selectionModel()->currentIndex().row(),2);
    QModelIndex ixpro=mod->index(ui->tableView->selectionModel()->currentIndex().row(),3);

    QString desc=ixlot.data(0).toString()+" - "+ixpro.data(0).toString();

    HComposizioneLotto *f=new HComposizioneLotto(0,db,idlot,desc);
    f->show();
}

void HComposizioneLotto::on_pushButton_3_clicked()
{
    close();
}
