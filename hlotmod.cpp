#include "hlotmod.h"
#include "ui_hlotmod.h"
#include <QSqlDatabase>
#include "huser.h"

#include <QSqlQuery>
#include <QSqlQueryModel>

HlotMod::HlotMod(HUser* p_user,QSqlDatabase p_db, int p_id,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HlotMod)
{
    ui->setupUi(this);
    db=p_db;
    user=p_user;
    lotid=p_id;

    getComposition();

}

HlotMod::~HlotMod()
{
    delete ui;
}

void HlotMod::getComposition()
{
    QSqlQuery q(db);
    mod=new QSqlQueryModel();
    QString sql="select operazioni.IDlotto,lotdef.lot,prodotti.descrizione,operazioni.quantità from composizione_lot,operazioni,lotdef,prodotti where operazioni.IDlotto=lotdef.ID and prodotti.ID=lotdef.prodotto and composizione_lot.ID_lotto=:lotid";
    q.prepare(sql);
    q.bindValue(":lotid",lotid);
    q.exec();
    mod->setQuery(q);

    ui->tvLotComp->setModel(mod);

}
