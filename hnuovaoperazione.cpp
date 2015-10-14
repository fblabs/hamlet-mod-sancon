#include "hnuovaoperazione.h"
#include "ui_hnuovaoperazione.h"
#include <QDebug>
#include <QSqlDatabase>
#include <QSqltableModel>
#include <QSqlRelationalTableModel>
#include <hreadonlymodelnew.h>
#include <QSqlRelationalDelegate>
#include <QSqlQuery>
#include <QDate>
#include <QMessageBox>
#include <QCompleter>

#include <QSqlError>

HnuovaOperazione::HnuovaOperazione(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HnuovaOperazione)
{
    ui->setupUi(this);
}

HnuovaOperazione::~HnuovaOperazione()
{
    delete ui;

}


void HnuovaOperazione::setConnectionName(QString conn,QString userID)
{
    sConn=conn;
    utente=userID;
    setupForm();

}

void HnuovaOperazione::setFilterProdotti()
{
    QString f ="tipo="+ ui->cbtipo->model()->index(ui->cbtipo->currentIndex(),0).data(0).toString();
    listaProdotti->setFilter(f);

}

void HnuovaOperazione::setupForm()
{

    db=QSqlDatabase::database(sConn);

    connect(ui->cbtipo,SIGNAL(currentIndexChanged(int)),this,SLOT(setFilterProdotti()));
    ui->cbtipo->setCurrentIndex(2);

    //lista lotti

    QSqlTableModel *lots=new QSqlTableModel(0,db);
    lots->setTable("lotdef");
    lots->select();
    QCompleter *com = new QCompleter(lots);
    com->setCompletionColumn(1);
    com->setCaseSensitivity(Qt::CaseInsensitive);
    com->setCompletionMode(QCompleter::PopupCompletion);
    ui->leLotto->setCompleter(com);

    //lista anagrafica

    ui->deScadenza->setDate(QDate::currentDate().addYears(2));

    listaFornitori=new QSqlTableModel(0,db);
    listaProdotti=new QSqlTableModel(0,db);
    listaTipologie=new QSqlTableModel(0,db);
    listaUnitaDiMisura=new QSqlTableModel(0,db);
    listaTipilot=new QSqlTableModel(0,db);


    listaFornitori->setTable("anagrafica");
    listaFornitori->setFilter("fornitore=1");
    listaFornitori->setSort(1,Qt::AscendingOrder);

    listaProdotti->setTable("prodotti");
    listaProdotti->setSort(1,Qt::AscendingOrder);
    listaTipologie->setTable("tipi_prodotto");
    listaTipologie->setSort(1,Qt::AscendingOrder);
    listaUnitaDiMisura->setTable("unita_di_misura");
    listaUnitaDiMisura->setSort(1,Qt::AscendingOrder);
    listaTipilot->setTable("tipi_lot");
    listaTipilot->setSort(1,Qt::AscendingOrder);

    listaFornitori->select();
    listaProdotti->select();
    listaTipologie->select();
    listaUnitaDiMisura->select();
    listaTipilot->select();


    ui->cbtipo->setModel(listaTipologie);
    ui->cbtipo->setModelColumn(1);

    ui->cbAnagrafica->setModel(listaFornitori);
    ui->cbAnagrafica->setModelColumn(1);

    ui->lvProdotti->setModel(listaProdotti);
    ui->lvProdotti->setModelColumn(1);

    ui->cbTipoLot->setModel(listaTipilot);
    ui->cbTipoLot->setModelColumn(1);



    ui->cbUM->setModel(listaUnitaDiMisura);
    ui->cbUM->setModelColumn(1);

    tbm = new HReadOnlyModelNew(this, db);
    tbm->setTable("operazioni");

    tbm->setEditStrategy(QSqlRelationalTableModel::OnFieldChange);


    tbm->setRelation(1,QSqlRelation("lotdef","ID","lot"));
    tbm->setRelation(3,QSqlRelation("utenti","ID","username"));
    tbm->setRelation(4,QSqlRelation("prodotti","ID","descrizione"));
    tbm->setRelation(5,QSqlRelation("azioni","ID","descrizione"));
    tbm->setRelation(7,QSqlRelation("unita_di_misura","ID","descrizione"));






    //QString filt=QDate::currentDate().toString("yyyy-MM-dd");

    //tbm->setFilter("operazioni.data='"+filt+"'");

// //qDebug()<<filt;

    tbm->setSort(0,Qt::DescendingOrder);
    tbm->setFilter("operazioni.data > date_add(curdate(),INTERVAl -1 day)");

    ui->tableView->setModel(tbm);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(tbm));
    ui->tableView->setColumnHidden(0,true);

    tbm->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    tbm->setHeaderData(1,Qt::Horizontal,QObject::tr("Lotto"));// 1 lotdef.lot
    tbm->setHeaderData(2,Qt::Horizontal,QObject::tr("Data"));
    tbm->setHeaderData(3,Qt::Horizontal,QObject::tr("Operatore"));//3 utenti.ID
    tbm->setHeaderData(4,Qt::Horizontal,QObject::tr("Prodotto"));//4 prodotti.ID
    tbm->setHeaderData(5,Qt::Horizontal,QObject::tr("Azione"));//5 azioni.ID
    tbm->setHeaderData(6,Qt::Horizontal,QObject::tr("Quantità"));
    tbm->setHeaderData(7,Qt::Horizontal,QObject::tr("Unità di misura"));
    tbm->setHeaderData(8,Qt::Horizontal,QObject::tr("Note"));

    tbm->select();

    //qDebug()<<tbm->query().lastError();

    setUiforCarico();

    connect(ui->lvProdotti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this, SLOT(setProdottoText()));




    //qDebug()<<"setupForm utente:"<<utente;

}

void HnuovaOperazione::setUiforCarico()
{
    ui->label->setVisible(true);
    ui->cbAnagrafica->setVisible(true);
    ui->lvProdotti->setVisible(true);
    ui->cbtipo->setVisible(true);
    ui->cbUM->setVisible(true);
    ui->label_2->setVisible(true);
    ui->cbtipo->setVisible(true);
    ui->label_10->setVisible(false);
    ui->leLotto->setVisible(false);
    ui->label_5->setVisible(true);
    ui->cbUM->setVisible(true);
    ui->label_7->setVisible(true);
    ui->cbScadenza->setVisible(true);
    ui->deScadenza->setVisible(true);
    ui->cbScadenza->setChecked(false);
    ui->label_8->setVisible(false);
    ui->leEAN->setVisible(false);
    ui->label_9->setVisible(true);
    ui->leNewLot->setVisible(true);
    ui->label_6->setVisible(true);
    ui->leLotfornitore->setVisible(true);
    ui->label_8->setVisible(false);
    ui->leEAN->setVisible(false);
    ui->cbTipoLot->setVisible(true);
    ui->label_12->setVisible(true);
    ui->label_11->setVisible(true);
    ui->leProdottoCreato->setVisible(true);
    ui->leProdotti->setVisible(true);

    ui->cbtipo->setCurrentIndex(2);
}

void HnuovaOperazione::setUiForScarico()
{
    ui->label->setVisible(false);
    ui->cbAnagrafica->setVisible(false);
    ui->lvProdotti->setVisible(false);
    ui->cbtipo->setVisible(false);
    ui->cbUM->setVisible(true);
    ui->label_2->setVisible(false);
    ui->cbtipo->setVisible(false);
    ui->label_10->setVisible(true);
    ui->leLotto->setVisible(true);
    ui->label_5->setVisible(false);
    ui->cbUM->setVisible(false);
    ui->label_7->setVisible(false);
    ui->deScadenza->setVisible(false);
    ui->label_8->setVisible(false);
    ui->leEAN->setVisible(false);
    ui->label_9->setVisible(false);
    ui->leNewLot->setVisible(false);
    ui->label_6->setVisible(false);
    ui->leLotfornitore->setVisible(false);
    ui->label_8->setVisible(false);
    ui->leEAN->setVisible(false);
    ui->label_4->setVisible(true);
    ui->tNote->setVisible(true);
    ui->cbTipoLot->setVisible(false);
    ui->label_12->setVisible(false);
    ui->leProdotti->setVisible(false);
    ui->label_11->setVisible(false);
    ui->leProdottoCreato->setVisible(false);

    ui->cbtipo->setCurrentIndex(2);
    ui->cbScadenza->setVisible(false);
}

void HnuovaOperazione::setProdottoText()
{
    QString prodotto;
    prodotto=ui->lvProdotti->model()->index(ui->lvProdotti->currentIndex().row(),1).data(0).toString();

    ui->leProdottoCreato->setText(prodotto);
}

void HnuovaOperazione::on_pushButton_4_clicked()
{

    this->close();
}

bool HnuovaOperazione::saveNewLot(QString nl)
{
    bool b;
    QSqlQuery q(db);
    QString sql="INSERT INTO lotdef(lot,prodotto,data,giacenza,um,scadenza,anagrafica,lot_fornitore,tipo,attivo,note) values (:lot,:prodotto,:data,:giacenza,:um,:scadenza,:anagrafica,:lot_fornitore,:tipo,:attivo,:note)";
    QString data,scadenza,lotforn;
    int idprod;
    int tipo;
    double giacenza;
    int anagrafica;
    int attivo=1;
    QString note=ui->tNote->toPlainText();


    idprod=ui->lvProdotti->model()->index(ui->lvProdotti->currentIndex().row(),0).data(0).toInt();

    data=QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");

    tipo=ui->cbTipoLot->model()->index(ui->cbTipoLot->currentIndex(),0).data(0).toInt();
    giacenza=ui->leQuantita->text().toDouble();

    if(ui->cbScadenza->isChecked())
    {
       scadenza="";
    }
    else
    {
       scadenza=ui->deScadenza->date().toString("yyyy-MM-dd HH:mm:ss");
    }

    anagrafica=ui->cbAnagrafica->model()->index(ui->cbAnagrafica->currentIndex(),0).data(0).toInt();
    lotforn=ui->leLotfornitore->text();

    q.prepare(sql);
    q.bindValue(":lot",QVariant(nl));
    q.bindValue(":prodotto",QVariant(idprod));
    q.bindValue(":data",QVariant(data));
    q.bindValue(":giacenza",QVariant(giacenza));
    q.bindValue(":um",QVariant(ui->cbUM->model()->index(ui->cbUM->currentIndex(),0).data(0)));
    q.bindValue(":scadenza",QVariant(scadenza));
    q.bindValue(":anagrafica",QVariant(anagrafica));
    q.bindValue(":lot_fornitore",QVariant(lotforn));
    q.bindValue(":tipo",QVariant(tipo));
    q.bindValue(":attivo",QVariant(attivo));
    q.bindValue(":note",QVariant(note));

    b=q.exec();

    if (b)
    {

        ui->leNewLot->setText(nl);
    }
    else
    {

     //   QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando il nuovo lotto\n"+q.lastError().text()+"\n"+q.lastQuery(),QMessageBox::Ok);
        ui->leNewLot->setText("Errore!!\n"+q.lastError().text());

    }
    return b;
}

bool HnuovaOperazione::saveOperation(bool isCarico)
{
    bool b;
    db.transaction();

    if(isCarico)
    {
        b=saveOperationCarico();

    }
    else
    {
        b=saveOperationScarico();
    }

    if(b)
    {
        db.commit();


    }
    else
    {
        db.rollback();
    }


   return b;

}


bool HnuovaOperazione::saveOperationScarico()
{
    QSqlQuery q(db);
    bool b;

    QString lot=ui->leLotto->text();

    int idlot;
    QSqlQuery l(db);
    QString sql="SELECT ID from lotdef where lot=:lot";
    l.prepare(sql);
    l.bindValue(":lot",QVariant(lot));
    l.exec();
    l.first();
    idlot=l.value(0).toInt();

    QString data=QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");

    QStringList prodottolist =ui->leLotto->text().split("-");

    int prodotto=prodottolist.at(1).toInt();
    int azione=2;
    double quantita=ui->leQuantita->text().toDouble();
    int UM=ui->cbUM->model()->index(ui->cbUM->currentIndex(),0).data(0).toInt();
    QString note="";

    QString query="INSERT INTO operazioni(IDlotto,data,utente,IDprodotto,azione,quantita,um,note) VALUES (:lot,:data,:utente,:prodotto,:azione,:quantita,:um,:note)";

    q.prepare(query);
    q.bindValue(":lot",QVariant(idlot));
    q.bindValue(":data",QVariant(data));
    q.bindValue(":utente",QVariant(utente));
    q.bindValue(":prodotto",QVariant(prodotto));
    q.bindValue(":azione",QVariant(azione));
    q.bindValue(":quantita",QVariant(quantita));
    q.bindValue(":um",QVariant(UM));
    q.bindValue(":note",QVariant(note));


    b=q.exec();
    if (b)
    {

      tbm->select();


    }
    else
    {

        //qDebug()<<"saveOperationScarico: " +q.lastError().text()+q.lastQuery();
    }

    return b;
}


bool HnuovaOperazione::saveOperationCarico()
{
  //ID=-1,lot=createID,data=now(),utente=user,IDprodotto=listaprodotti,azione=1,quantita,um,note
    bool b;

    int idprodotto=ui->lvProdotti->model()->index(ui->lvProdotti->currentIndex().row(),0).data(0).toInt();
    QString nuovolot;


    QSqlQuery q(db);
    QString query ="SELECT createID(:id)";
    q.prepare(query);
    q.bindValue(":id",QVariant(idprodotto));
    q.exec();
    q.first();
    nuovolot=q.value(0).toString();



    b=saveNewLot(nuovolot);



    if (!b)
    {
       QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando il lotto",QMessageBox::Ok);
       return false;

    }

    //qDebug()<<"lotto salvato";

//salvo l'operazione
    int idlotto=lastInsertID();
    QString data=QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    int prodotto=ui->lvProdotti->model()->index(ui->lvProdotti->currentIndex().row(),0).data(0).toInt();
    int azione=1;
    double quantita=ui->leQuantita->text().toDouble();
    int UM=ui->cbUM->model()->index(ui->cbUM->currentIndex(),0).data(0).toInt();
    QString note=ui->tNote->toPlainText();

   /* query="SELECT descrizione FROM prodotti WHERE ID=:id";
    q.prepare(query);
    q.bindValue(":id",QVariant(idprodotto));
    q.exec();
    q.first();
    */






    QString query2="INSERT INTO operazioni(IDlotto,data,utente,IDprodotto,azione,quantita,um,note) VALUES (:idlotto,:data,:utente,:prodotto,:azione,:quantita,:um,:note)";
    QSqlQuery op(db);



    op.prepare(query2);
    op.bindValue(":idlotto",QVariant(idlotto));
    op.bindValue(":data",QVariant(data));
    op.bindValue(":utente",QVariant(utente));
    op.bindValue(":prodotto",QVariant(prodotto));
    op.bindValue(":azione",QVariant(azione));
    op.bindValue(":quantita",QVariant(quantita));
    op.bindValue(":um",QVariant(UM));
    op.bindValue(":note",QVariant(note));

    b=op.exec();

qDebug()<<QString::number(quantita);

    if(b)
    {

        ui->leQuantita->setText("");
        ui->leLotfornitore->setText("");
        ui->tNote->clear();

    }

    return b;

}

int HnuovaOperazione::lastInsertID()
{
    QSqlQuery q(db);
    QString sql="SELECT last_insert_id();";
    q.prepare(sql);
    q.exec();

    q.first();

    return q.value(0).toInt();
}



QString HnuovaOperazione::getNewLot(QString prodotto)
{
    QString newLot;
    QSqlQuery nl(db);

    nl.exec("SELECT createID("+ prodotto +")");
    nl.next();
    newLot=nl.value(0).toString();
//qDebug()<<nl.lastQuery();
    return newLot;
}

void HnuovaOperazione::on_pushButton_clicked()
{
   bool b;
   db.transaction();

   b=saveOperation(ui->radioButton->isChecked());

   if (b)
   {
        tbm->select();
        emit trigger();
        QMessageBox::information(this,QApplication::applicationName(),"Operazione salvata",QMessageBox::Ok);
   }
   else
   {

       QMessageBox::warning(this,QApplication::applicationName(),"Errore!",QMessageBox::Ok);

   }





}


void HnuovaOperazione::on_radioButton_2_toggled(bool checked)
{
    if (checked)
    {
        setUiForScarico();
    }
}

void HnuovaOperazione::on_radioButton_toggled(bool checked)
{
    if(checked)
    {
        setUiforCarico();
    }
}


void HnuovaOperazione::on_cbScadenza_toggled(bool checked)
{
    ui->deScadenza->setVisible(!checked);
}


void HnuovaOperazione::on_leProdotti_textChanged(const QString &arg1)
{
    QString filter;
    filter="descrizione LIKE '%";
    filter.append(ui->leProdotti->text());
    filter.append("%'");
    listaProdotti->setFilter(filter);
   // qDebug()<<listaProdotti->lastError().text()<<filter;
}

void HnuovaOperazione::on_leLotto_textChanged(const QString &arg1)
{
    QString filter;
    filter="lot LIKE '%";
    filter.append(ui->leLotto->text());
    filter.append("%'");
    listaProdotti->setFilter(filter);
  //  qDebug()<<listaProdotti->lastError().text()<<filter;
}
