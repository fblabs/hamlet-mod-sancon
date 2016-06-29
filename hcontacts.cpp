#include "hcontacts.h"
#include "ui_hcontacts.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QMessageBox>
#include "hnewcontact.h"
#include <QSqlQuery>
#include <QDataWidgetMapper>

HContacts::HContacts(QWidget *parent,QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::HContacts)
{
    ui->setupUi(this);
    db = pdb;

    mod=new QSqlTableModel(0,db);
    mod->setTable("contatti");
    mod->setSort(1,Qt::AscendingOrder);
    mod->select();

    ui->lvMain->setModel(mod);

    ui->lvMain->setModelColumn(1);

    tipomod=new QStringListModel();
    QStringList list;
    list << "Importatori"<<"Grossisti"<<"Grande distribuzione"<<"negozi"<<"industria"<<"retail"<<"foodservice"<<"Altro";
    tipomod->setStringList(list);
    ui->cbTipo->setModel(tipomod);

    QStringListModel* etichettaModel=new QStringListModel();
    QStringList etichette;
    etichette<<"Privata"<<"del Produttore";
    etichettaModel->setStringList(etichette);

    ui->cbEtichetta->setModel(etichettaModel);

    QDataWidgetMapper *map=new QDataWidgetMapper();
    map->setModel(mod);
    map->addMapping(ui->leNome,1);
    map->addMapping(ui->leReferente,4);
    map->addMapping(ui->cbImport,7);
    map->addMapping(ui->teInterests,8);
    map->addMapping(ui->teProdotti,9);
    map->addMapping(ui->cbTipo,3,"currentText");
    map->addMapping(ui->cbEtichetta,5,"currentText");
    map->toFirst();

    connect(ui->lvMain->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),map,SLOT(setCurrentModelIndex(QModelIndex)));






}

HContacts::~HContacts()
{
    delete ui;
}

void HContacts::on_pushButton_4_clicked()
{
    if(QMessageBox::Ok == QMessageBox::question(this,QApplication::applicationName(),"Chiudere?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        close();
    }
}

void HContacts::on_pushButton_clicked()
{
    HNewContact *f = new HNewContact(0,db);
    f->show();
}

void HContacts::on_pushButton_5_clicked()
{
    if(mod->submitAll())
    {
        mod->select();
        QMessageBox::information(this,QApplication::applicationName(),"Contatto salvato",QMessageBox::Ok);
    }
}

void HContacts::on_pushButton_2_clicked()
{
    if (removeContact())
    {
        mod->select();
        QMessageBox::information(this,QApplication::applicationName(),"Contatto eliminato",QMessageBox::Ok);
    }
}

bool HContacts::removeContact()
{
    int id=mod->index(ui->lvMain->currentIndex().row(),0).data(0).toInt();
    QSqlQuery q(db);
    QString sql="DELETE FROM contatti WHERE ID=:id";
    q.prepare(sql);
    q.bindValue(":id",id);
    bool r=q.exec();

    return r;
}
