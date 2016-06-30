#include "hnewcontact.h"
#include "ui_hnewcontact.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QStringListModel>
#include <QSqlError>

HNewContact::HNewContact(QWidget *parent, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::HNewContact)
{
    ui->setupUi(this);
    db=pdb;

    QStringListModel *tipomod=new QStringListModel();
    QStringList list;
    list << "Importatori"<<"Grossisti"<<"Grande distribuzione"<<"negozi"<<"industria"<<"retail"<<"foodservice"<<"Altro";

    QSqlQuery ti(db);
    QString tiql="SELECT DISTINCT tipo from contatti order by tipo asc";
    ti.exec(tiql);
  // ti.first();
  // list<<ti.value(0).toString();
    while(ti.next())
    {
        QString value=ti.value(0).toString();
        if (!list.contains(value))
        {
            list<<value;
        }
    }

    tipomod->setStringList(list);
    tipomod->sort(0,Qt::AscendingOrder);

    QStringListModel* etichettaModel=new QStringListModel();
    QStringList etichette;

    etichette<<"Privata"<<"del Produttore";
    QSqlQuery et(db);
    QString etql="SELECT DISTINCT etichetta from contatti order by etichetta asc";
    et.exec(etql);
    //et.first();
   // etichette<<et.value(0).toString();
    while(et.next())
    {
        QString etval=et.value(0).toString();
        if (!etichette.contains(etval))
        {
        etichette<<etval;
        }
    }

    etichettaModel->setStringList(etichette);
    etichettaModel->sort(0,Qt::AscendingOrder);


    ui->cbTipo->setModel(tipomod);
    ui->cbEtichetta->setModel(etichettaModel);
}

HNewContact::~HNewContact()
{
    delete ui;
}

void HNewContact::on_pushButton_clicked()
{
   bool b=saveNewContact();
   if(!b)
   {
       QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando il nuovo contatto:\n"+db.lastError().text(),QMessageBox::Ok|QMessageBox::Cancel);
   }
   else
   {
       QMessageBox::information(this,QApplication::applicationName(),"Nuovo contatto salvato",QMessageBox::Ok);
       emit newContactSaved();
       ui->pushButton->setEnabled(false);
   }

}

bool HNewContact::saveNewContact()
{
    // Salva contatto
    QSqlQuery q(db);
    QString sql;
    bool b=false;

    sql="INSERT INTO contatti(nome,area,tipo,referente,etichetta,prodotti,import,interesse,assaggi,foto)VALUES(:nome,:area,:tipo,:referente,:etichetta,:prodotti,:import,:interesse,:assaggi,:foto)";
    q.prepare(sql);

    q.bindValue(":nome",ui->leNome->text());
    q.bindValue(":area",ui->leArea->text());
    q.bindValue(":tipo",ui->cbTipo->currentText());
    q.bindValue(":referente",ui->leReferente->text());
    q.bindValue(":etichetta",ui->cbEtichetta->currentText());
    q.bindValue(":prodotti",ui->teAssaggi->toPlainText());
    q.bindValue(":import",ui->cbImport->isChecked()?1:0);
    q.bindValue(":interesse",ui->teInterests->toPlainText());
    q.bindValue(":assaggi",ui->teAssaggi->toPlainText());
    q.bindValue(":foto",ui->cbFoto->isChecked()?1:0);

    b=q.exec();



    return b;

}

void HNewContact::on_pushButton_2_clicked()
{
    close();
}
