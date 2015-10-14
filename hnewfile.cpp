#include "hnewfile.h"
#include "ui_hnewfile.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>

HNewFile::HNewFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HNewFile)
{
    ui->setupUi(this);
    UPDATE=0;
}

HNewFile::~HNewFile()
{
    delete ui;
}

void HNewFile::setConnectionName(QString conn)
{
    sConn=conn;

    db= QSqlDatabase::database(sConn);
}

void HNewFile::setParameters(QString idCliente, QString idProdotto)
{
  sClientId = idCliente;
  sProductId= idProdotto;
  getFile();
}

void HNewFile::getFile()
{
    QSqlQuery q(db);
    QSqlQuery z(db);

    z.exec("SELECT anagrafica.ragione_sociale, prodotti.descrizione FROM anagrafica,prodotti WHERE anagrafica.ID="+sClientId+" and prodotti.ID="+sProductId);

    QSqlRecord n=z.record();
    z.next();
    ui->lbNomeCliente->setText(n.value("ragione_sociale").toString());
    ui->lbNomeProdotto->setText(n.value("descrizione").toString());


    q.exec("SELECT olio,vaso,tappo,etichette,scatole,note FROM schede WHERE prodotto="+sProductId+" AND cliente=" + sClientId);
    q.next();
    QSqlRecord r=q.record();

    ui->leOlio->setText(r.value("olio").toString());
    ui->leVaso->setText(r.value("vaso").toString());
    ui->leTappo->setText(r.value("tappo").toString());
    ui->leEtichette->setText(r.value("etichette").toString());
    ui->leScatole->setText(r.value("scatole").toString());
    ui->ptNote->setPlainText(r.value("note").toString());

    UPDATE=q.size();

}

void HNewFile::on_pushButton_2_clicked()
{
    //elimina

    QSqlQuery q(db);

    if(QMessageBox::question(this,QApplication::applicationName(),"Eliminare la scheda selezionata?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {

       if(q.exec("DELETE FROM schede WHERE prodotto="+sProductId+" AND cliente=" + sClientId))
        {
           QMessageBox::information(this,QApplication::applicationName(),"Scheda eliminata",QMessageBox::Ok);
           this->close();
        }
        else
        {
           QMessageBox::information(this,QApplication::applicationName(),"Errore eliminando la scheda",QMessageBox::Ok);
        }

    }


}

void HNewFile::on_pbSave_clicked()
{
  QSqlQuery q(db);
  QString sQuery;
  QString olio,vaso,tappo,etichette,scatole,note;

  olio=ui->leOlio->text();
  vaso=ui->leVaso->text();
  tappo=ui->leTappo->text();
  etichette=ui->leEtichette->text();
  scatole=ui->leScatole->text();
  note=ui->ptNote->toPlainText();

  ui->leOlio->setReadOnly(true);
  ui->leVaso->setReadOnly(true);
  ui->leTappo->setReadOnly(true);
  ui->leEtichette->setReadOnly(true);
  ui->ptNote->setReadOnly(true);

//  QByteArray ba;
//  QFile f(fileName);
//  if(f.open(QIODevice::ReadOnly))
//  {
//  ba = f.readAll();
//  f.close();
//  }
 // ui->;

    if (UPDATE)
    {
      //  sQuery="UPDATE schede SET olio="+olio+", vaso='" +vaso + "', tappo='"+tappo+"'' etichette="+etichette+" ,scatole='" + scatole + "', note" + note+"WHERE cliente="+sClientId+" and prodotto="+sProductId;
         sQuery="UPDATE schede SET olio=:olio, vaso=:vaso,tappo=;tappo, etichette=:etichette,scatole=:scatole,note =:note, immagine=:immagine WHERE cliente=:ClientId and prodotto=:ProductId";

         q.prepare(sQuery);
         q.bindValue(":olio",QVariant(olio));
         q.bindValue(":vaso",QVariant(vaso));
         q.bindValue(":tappo",QVariant(tappo));
         q.bindValue(":etichette",QVariant(etichette));
         q.bindValue(":scatole",QVariant(scatole));
         q.bindValue(":note",QVariant(note));
         q.bindValue(":ClientId",QVariant(sClientId));
         q.bindValue(":ProductId",QVariant(sProductId));
         q.bindValue(":immagine",QVariant())

    }
    else
    {
      //  sQuery="INSERT INTO schede(cliente,prodotto,olio,vaso,tappo,etichette,scatole,note) VALUES ('"+sClientId+"','"+ sProductId+"','"+ olio +"','"+vaso+"','"+tappo+"','" +etichette+"','" +scatole+"','" + note+"')";
        sQuery="INSERT INTO schede(cliente,prodotto,olio,vaso,tappo,etichette,scatole,note,immagine) VALUES (:ClientId,:ProductId, :olio, :vaso,:tappo,:etichette,:scatole,:note,:immagine";

                q.prepare(sQuery);
                q.bindValue(":olio",QVariant(olio));
                q.bindValue(":vaso",QVariant(vaso));
                q.bindValue(":tappo",QVariant(tappo));
                q.bindValue(":etichette",QVariant(etichette));
                q.bindValue(":scatole",QVariant(scatole));
                q.bindValue(":note",QVariant(note));
                q.bindValue(":immagine",QVariant())
                q.bindValue(":ClientId",QVariant(sClientId));
                q.bindValue(":ProductId",QVariant(sProductId));
    }



    if(q.exec())
    {
        QMessageBox::information(this,QApplication::applicationName(),"Scheda salvata",QMessageBox::Ok);

    }
    else
    {
        QMessageBox::information(this,QApplication::applicationName(),"Errore salvando la scheda\n"+ sQuery+"\n"+ q.lastError().text(),QMessageBox::Ok);
        qDebug()<<sQuery<<q.lastError().text();
    }
}

void HNewFile::on_pushButton_clicked()
{
    ui->leOlio->setReadOnly(false);
    ui->leVaso->setReadOnly(false);
    ui->leTappo->setReadOnly(false);
    ui->leEtichette->setReadOnly(false);
    ui->ptNote->setReadOnly(false);
}

void HNewFile::on_pbClose_clicked()
{
    this->close();
}
