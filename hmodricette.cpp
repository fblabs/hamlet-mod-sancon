#include "hmodricette.h"
#include "ui_hmodricette.h"
#include "huser.h"

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
// #include <QDebug>
#include <QSqlError>
#include <QInputDialog>
#include "hprint.h"
#include <QCompleter>
#include "hassociazioni.h"
#include "huser.h"
#include <QMenu>
#include "hrecipeaddrow.h"
#include "hclientiassociati.h"
#include <QShortcut>
#include <QDebug>
#include "hrecipesforclient.h"
#include "hrecipesforingredient.h"

HModRicette::HModRicette(HUser *pusr,QSqlDatabase pdb,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HModRicette)
{
    ui->setupUi(this);
    db=pdb;
    user=pusr;

    ui->pushButton->setEnabled(user->get_ricette_u()>0);
    ui->pushButton_6->setEnabled(user->get_ricette_u()>0);
    ui->pbAddRow->setEnabled(user->get_ricette_u()>0);
    ui->pbDeleteRow->setEnabled(user->get_ricette_u()>0);
    ui->pushButton_3->setEnabled(user->get_ricette_u()>0);
    ui->pbduplica->setEnabled(user->get_ricette_u()>0);




    /*  update=user->getCanUpdate();
    if (!update)
    {
        ui->pushButton->setEnabled(false);
        ui->pbAddRow->setEnabled(false);
        ui->pbDeleteRow->setEnabled(false);
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_3->setEnabled(false);
        ui->pbduplica->setEnabled(false);

   }
   else{
        ui->pushButton->setEnabled(true);
        ui->pbAddRow->setEnabled(true);
        ui->pbDeleteRow->setEnabled(true);
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_3->setEnabled(true);
        ui->pbduplica->setEnabled(true);

    }*/

    getRicette();

    tric=new QSqlTableModel(0,db);
    tric->setTable("prodotti");
    tric->setFilter("tipo=2");
    tric->setSort(1,Qt::AscendingOrder);
    tric->select();

    ui->cbRicette->setModel(qmric);
    ui->cbRicette->setModelColumn(1);


    ui->cbRicette->setCurrentIndex(0);

    connect(ui->cbRicette,SIGNAL(currentIndexChanged(int)),this,SLOT(loadRicetta()));


    //  ui->cbRicette->findData()
    connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(showContextMenu(QPoint)));

    loadRicetta();

    ui->tableView->resizeColumnsToContents();
    // ui->tableView->horizontalHeader()->resizeSections(QHeaderView::Stretch);



    ui->checkBox->setVisible(false);
    QShortcut *shortcut =new QShortcut(QKeySequence("F5"),this);
    connect(shortcut,SIGNAL(activated()),this,SLOT(showAssociatedCustomers()));

}



void HModRicette::showContextMenu(const QPoint &pos)
{
    QPoint globalPos =mapToGlobal(pos);
    QMenu *menu=new QMenu(0);
    QAction *addIngredient=menu->addAction("Aggiungi Ingrediente");
    QAction *removeIngredient=menu->addAction("Rimuovi Ingrediente");
    QAction *mostraAssociazioni=menu->addAction("Associata a...");



    connect(addIngredient,SIGNAL(triggered(bool)),this,SLOT(showaddRow()));
    connect(removeIngredient,SIGNAL(triggered(bool)),this,SLOT(removeItem()));
    connect(mostraAssociazioni,SIGNAL(triggered(bool)),this,SLOT(showAssociatedCustomers()));


    menu->popup(globalPos);
}

HModRicette::~HModRicette()
{
    delete ui;
}

void HModRicette::showaddRow()
{
    int idricetta=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();
    HRecipeAddRow *f=new HRecipeAddRow(idricetta,db);

    f->show();
    connect(f,SIGNAL(rowadded(QList<QStandardItem*>)),this,SLOT(addRiga( QList<QStandardItem*>)));
}

void HModRicette::showAssociatedCustomers()
{
    int id =ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();
    HClientiAssociati *f=new HClientiAssociati(0,id,db);
    f->show();
}

void HModRicette::on_pushButton_2_clicked()
{
    if (QMessageBox::question(this,QApplication::applicationName(),"Chiudere?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        this->close();
    }
}




void HModRicette::getRicette()
{
    QCompleter *comp=new QCompleter();
    qmric=new  QSqlQueryModel();
    QSqlQuery q(db);
    q.exec("SELECT ricette.ID,prodotti.descrizione from prodotti,ricette WHERE prodotti.ID=ricette.ID_prodotto ORDER BY prodotti.descrizione ASC");
    qmric->setQuery(q);

    ui->cbRicette->setModel(qmric);
    ui->cbRicette->setModelColumn(1);
    comp->setModel(qmric);
    comp->setCompletionColumn(1);
    comp->setCompletionMode(QCompleter::PopupCompletion);
    comp->setCaseSensitivity(Qt::CaseInsensitive);
    ui->cbRicette->setCompleter(comp);
    // // qDebug()<<q.lastQuery()<<q.lastError().text();

}

void HModRicette::creatNewRecipe()
{
    bool b;
    bool ok;
    //nuova ricetta
    QString text=QInputDialog::getText(this,"Nuova Ricetta","Inserire il nome\nVerrà creato un nuovo prodotto",QLineEdit::Normal,"",&ok);
    text=text.toUpper();



    if(ok)
    {
        db.transaction();

        QString sql="INSERT INTO `prodotti`(`descrizione`,`tipo`,`allergenico`)VALUES(:descrizione,2,0)";
        QSqlQuery q(db);
        q.prepare(sql);
        q.bindValue(":descrizione",QVariant(text));

        b=q.exec();
        if(!b)
        {
            db.rollback();
            //// qDebug()<<q.lastError().text();
            QMessageBox::warning(this,QApplication::applicationName(),"ERRORE CREANDO IL PRODOTTO!!!",QMessageBox::Ok);

            return;
        }
        //// qDebug()<<q.lastError().text();

        int idnuovoprodotto=q.lastInsertId().toInt();

        sql="INSERT INTO ricette (ID_prodotto,note) VALUES (:id,'')";
        q.prepare(sql);
        q.bindValue(":id",QVariant(idnuovoprodotto));

        b=q.exec();
        if(b)
        {
            db.commit();
            getRicette();
            int ix =ui->cbRicette->findText(ui->cbRicette->currentText());
            ui->cbRicette->setCurrentIndex(ix);
            QMessageBox::information(this,QApplication::applicationName(),"RICETTA CREATA",QMessageBox::Ok);
        }
        else
        {
            QMessageBox::warning(this,QApplication::applicationName(),"ERRORE CREANDO LA RICETTA!",QMessageBox::Ok);
            //// qDebug()<<q.lastError().text();
            db.rollback();
            return;
        }



        QMessageBox::information(this,QApplication::applicationName(),"RICETTA CREATA",QMessageBox::Ok);
        return ;


    }
    else
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Operazione annullata",QMessageBox::Ok);
    }

    getRicette();

    int r = ui->cbRicette->findText(text);
    ui->cbRicette->setCurrentIndex(r);




}

void HModRicette::addRiga(QList<QStandardItem*>list)
{
    QStandardItemModel* model = static_cast<QStandardItemModel*>(ui->tableView->model());

    model->appendRow(list);

    // loadRicetta();



}

bool HModRicette::duplicateRecipe()
{

    int ricettaorg=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();
    bool b=false;
    bool ok;
    //nuova ricetta
    //QString text=QInputDialog::getText(this,"Nuova Ricetta","Inserire il nome\nVerrà creata una nuova ricetta copiata da quella corrente",QLineEdit::Normal,"",&ok);
    //text=text.toUpper();

    QString text=QInputDialog::getText(this,"Nuova Ricetta","Inserire il nome\nVerrà creata una nuova ricetta copiata da quella corrente",QLineEdit::Normal,"",&ok);
    text=text.toUpper();

    if(ok)
    {
        db.transaction();


        //inserico un nuovo prodotto di cui creo la ricetta da quella corrente

        QString sql="INSERT INTO `prodotti`(`descrizione`,`tipo`,`allergenico`)VALUES(:descrizione,2,0)";
        QSqlQuery q(db);
        q.prepare(sql);
        q.bindValue(":descrizione",QVariant(text));

        b=q.exec();
        if(!b)
        {
            db.rollback();
            //// qDebug()<<q.lastError().text()<<q.lastQuery();
            QMessageBox::warning(this,QApplication::applicationName(),"ERRORE CREANDO IL PRODOTTO!:",QMessageBox::Ok);

            return b;
        }

        int idnuovoprodotto=q.lastInsertId().toInt();
        QString note=ui->tbnote->toPlainText();

        //inserico la nuova ricetta

        sql="INSERT INTO ricette (ID_prodotto,note) VALUES (:id,:note)";
        q.prepare(sql);
        q.bindValue(":id",QVariant(idnuovoprodotto));
        q.bindValue(":note",QVariant(note));
        b=q.exec();

        if(!b){
            QMessageBox::warning(this,QApplication::applicationName(),"ERRORE CREANDO LA RICETTA!",QMessageBox::Ok);
            db.rollback();
            return b;
        }

        int idnuovaricetta=q.lastInsertId().toInt();

        sql="INSERT INTO righe_ricette (ID_ricetta,ID_prodotto,quantita) SELECT :idnuovaricetta,ID_prodotto,quantita FROM righe_ricette WHERE ID_ricetta=:idricetta";
        q.prepare(sql);
        q.bindValue(":idricetta",QVariant(ricettaorg));
        q.bindValue(":idnuovaricetta",QVariant(idnuovaricetta));
        b=q.exec();

        if (b)
        {
            db.commit();
            QMessageBox::information(this,QApplication::applicationName(),"RICETTA DUPLICATA!",QMessageBox::Ok);
            ui->cbRicette->setModel(0);
            getRicette();
            int ix =ui->cbRicette->findText(text);
            ui->cbRicette->setCurrentIndex(ix);

        }
        else
        {
            db.rollback();
            //// qDebug()<<q.lastError().text()<<QString::number(idnuovaricetta);
            QMessageBox::warning(this,QApplication::applicationName(),"ERRORE DUPLICANDO LA RICETTA!",QMessageBox::Ok);
        }





        return b;

    }






    return b;



}


void HModRicette::loadRicetta()
{

    int idricetta=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();
    QSqlQuery q(db);
    QString sql = "SELECT righe_ricette.ID,righe_ricette.ID_Ricetta,righe_ricette.ID_prodotto,prodotti.descrizione AS 'Ingrediente',righe_ricette.quantita AS 'Quantità',righe_ricette.show_prod AS 'Mostra in produzione',prodotti.allergenico  FROM righe_ricette,prodotti WHERE prodotti.ID=righe_ricette.ID_prodotto and righe_ricette.ID_ricetta=:idricetta ORDER BY righe_ricette.quantita DESC";
    q.prepare(sql);
    q.bindValue(":idricetta",QVariant(idricetta));
    q.exec();

    writeRed=new QList<int>();


    QStandardItemModel *mod=new QStandardItemModel();
    int k=-1;
    while (q.next())
    {


        k++;


        QList<QStandardItem*>list;

        QStandardItem *idriga =new QStandardItem(q.value(0).toString());
        QStandardItem *idricetta =new QStandardItem(q.value(1).toString());
        QStandardItem *idprodotto =new QStandardItem(q.value(2).toString());
        QStandardItem *descrizione =new QStandardItem(q.value(3).toString());
        QStandardItem *quantita =new QStandardItem(QString::number(q.value(4).toDouble(),'f',4));
        QString sh=q.value(5).toString();
        QStandardItem *show = new QStandardItem(sh);

        int alle=q.value(6).toInt();


        writeRed->append(alle);


        if (alle==1)
        {
            descrizione->setForeground(Qt::red);
        }

        //   descrizione->setForeground(Qt::red);

        list.append(idriga);
        list.append(idricetta);
        list.append(idprodotto);
        list.append(descrizione);
        list.append(quantita);
        list.append(show);

        mod->appendRow(list);



    }

    ui->tableView->setModel(mod);


    mod->setHeaderData(3,Qt::Horizontal,"Ingrediente");
    mod->setHeaderData(4,Qt::Horizontal,"Quantità");
    mod->setHeaderData(5,Qt::Horizontal,"Mostra in Produzione");

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->horizontalHeader()->resizeSections(QHeaderView::Stretch);
    //


    connect(ui->tableView->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(findProduct()));

    //note

    QSqlQuery n(db);
    QString sql2;
    sql2="SELECT ricette.note from prodotti,ricette where prodotti.ID=ricette.ID_prodotto and ricette.ID=:idricetta";
    n.prepare(sql2);
    n.bindValue(":idricetta",QVariant(idricetta));
    n.exec();
    n.first();
    ui->tbnote->setText(n.value(0).toString());
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnHidden(1,true);
    ui->tableView->setColumnHidden(2,true);
    ui->tableView->setColumnHidden(5,true);
    ui->tableView->setColumnHidden(6,true);

    //  ui->tvRecipe->horizontalHeader()->resizeSections(QHeaderView::Stretch);

    //ui->tableView->horizontalHeader()->resizeSections(QHeaderView::Stretch);
    // ui->tableView->resizeColumnsToContents();
    calculateTotal();


}

void HModRicette::updateTotals()
{
    double dafare = ui->leTotal->text().toDouble();
    double sommarighe=0;
    double factor=0;
    double result=0;
    QStandardItemModel* model=static_cast<QStandardItemModel*>(ui->tableView->model());

    for (int x=0;x<model->rowCount();x++)
    {
        sommarighe += model->index(x,4).data(0).toDouble();

    }


    factor = dafare / sommarighe;

    for (int j=0;j<model->rowCount();j++)
    {
        QModelIndex i = model->index(j,4);
        result =i.data().toDouble()* factor;
        QString resulttoadd=QString::number(result,'f',2);
        model->setData(i,QVariant(resulttoadd));

    }

    ui->tableView->resizeColumnsToContents();


}

void HModRicette::findProduct()
{
    QModelIndex i= ui->tableView->selectionModel()->currentIndex();
    QString x=ui->tableView->model()->index(i.row(),3).data(0).toString();
    QString y=ui->tableView->model()->index(i.row(),4).data(0).toString();

    ui->checkBox->setChecked(ui->tableView->model()->index(i.row(),5).data(0).toBool());


}


void HModRicette::calculateTotal()
{
    double total=0.0;
    int rows=0;

    if (ui->tableView->model()==0) return;

    QStandardItemModel *mod=static_cast<QStandardItemModel*>(ui->tableView->model());

    rows=mod->rowCount();

    for (int i=0; i<rows;i++)
    {
        total+=mod->index(i,4).data(0).toDouble();
    }

    ui->leTotal->setText(QString::number(total,'f',2));


}

void HModRicette::removeItem()
{
    /*QSqlQuery q(db);
    QString sql="DELETE FROM `righe_ricette` WHERE ID=:idriga";
    q.prepare(sql);
   // q.bindValue(":idricetta",ui->tableView->model()->index(ui->tableView->currentIndex().row(),0).data(0));
  //  q.bindValue(":idprodotto",ui->tableView->model()->index(ui->tableView->currentIndex().row(),1).data(0));
    q.bindValue(":idriga",QVariant(ui->tableView->model()->index(ui->tableView->currentIndex().row(),0).data(0)));
    q.exec();
    qDebug()<<q.lastError()<<q.lastQuery()<<q.boundValue(0).toString()<<q.boundValue(1).toString();
    loadRicetta();*/

    QStandardItemModel *mod=static_cast<QStandardItemModel*>(ui->tableView->model());

    int row=ui->tableView->selectionModel()->currentIndex().row();

    mod->removeRow(row);



}

void HModRicette::save()
{
    QSqlQuery q(db);
    QString sql;

    int idriga=ui->tableView->model()->index(ui->tableView->currentIndex().row(),0).data(0).toInt();
    int idricetta=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();
    int rows=ui->tableView->model()->rowCount();

    db.transaction();
    //cancello la ricetta

    sql="delete from righe_ricette where ID_ricetta=:idricetta";
    q.prepare(sql);
    q.bindValue(":idricetta",QVariant(idricetta));
    bool b= q.exec();

    if(!b)return;

    //la ricreo modificata

    int idprod;
    double quant;
    int show;

    sql="insert into righe_ricette (ID_ricetta,ID_prodotto,quantita,show_prod) VALUES (:idricetta,:idprodotto,:quantita,:show)";
    //// qDebug()<<"save IDricetta:"<<QString::number(idricetta);

    for (int i=0; i< rows;i++)
    {

        idprod=ui->tableView->model()->index(i,2).data(0).toInt();
        quant=ui->tableView->model()->index(i,4).data(0).toDouble();
        show=ui->tableView->model()->index(i,5).data(0).toInt();



        q.prepare(sql);
        q.bindValue(":idricetta",QVariant(idricetta));
        q.bindValue(":idprodotto",QVariant(idprod));
        q.bindValue(":quantita",QVariant(quant));
        q.bindValue(":show",QVariant(show));
        b=q.exec();

        if(!b)
        {
            db.rollback();
            QMessageBox::warning(this,QApplication::applicationName(),"Si è verificato un errore (riga 554)",QMessageBox::Ok);
            return;
        }
        //// qDebug()<<"save(for)="<<q.lastError().text()<<QString::number(show);



    }

    db.commit();
    QMessageBox::information(this,QApplication::applicationName(),"Ricetta salvata",QMessageBox::Ok);




}

void HModRicette::printRecipe()
{
    //stampa Ricetta

    HPrint *f=new HPrint(0);

    f->toggleImageUI(false);


    f->append("=============================================\n");

    f->append(ui->cbRicette->currentText(),true);

    f->append("\n=============================================\n",false);



    int righe = ui->tableView->model()->rowCount();
    int colonne=ui->tableView->model()->columnCount();

    f->cursorToEnd();
    f->append("\nNOTE:\n",true);
    f->append(ui->tbnote->toPlainText(),false);
    f->append("\n\n");


    f->cursorToEnd();

    QTextTable* table=f->addTable(righe,colonne-4,QTextTableFormat());

    QTextCharFormat format;

    for (int i=0;i<righe;i++)
    {
        // f->append(ui->tvRecipe->model()->index(i,1).data(Qt::DisplayRole).toString() + " - " + ui->tvRecipe->model()->index(i,2).data(Qt::DisplayRole).toString(),false);

        if(writeRed->at(i)>0)
        {
            f->writeTableContentRed(table,i,0,format,ui->tableView->model()->index(i,3).data(0).toString());
            f->writeTableContentRed(table,i,1,format,QString::number(ui->tableView->model()->index(i,4).data(0).toDouble(),'f',2));
        }
        else
        {
            f->writeTableContent(table,i,0,QTextCharFormat(),ui->tableView->model()->index(i,3).data(0).toString());
            f->writeTableContent(table,i,1,QTextCharFormat(),QString::number(ui->tableView->model()->index(i,4).data(0).toDouble(),'f',2));
        }



    }
    f->append("\n\nQuantità: " + ui->leTotal->text(),false);


    f->show();

    //f->append(ui->tbnote->toPlainText(),false);
}

void HModRicette::saveNote()
{
    int idricetta=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();

    QSqlQuery q(db);
    QString sql="UPDATE ricette SET note=:note WHERE ID=:id";

    QString note=ui->tbnote->toPlainText();

    q.prepare(sql);
    q.bindValue (":note",QVariant(note));
    q.bindValue(":id",QVariant(idricetta));
    if(q.exec())
    {

    }
    else
    {
        //// qDebug()<<q.lastError().text()<<q.lastQuery()<<QString::number(idricetta)<<note;
    }




}

void HModRicette::on_pbAddRow_clicked()
{
    int idr=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();
    HRecipeAddRow *f=new HRecipeAddRow(idr,db);
    connect(f,SIGNAL(rowadded(QList<QStandardItem*>)),this,SLOT(addRiga( QList<QStandardItem*>)));
    f->show();
}

void HModRicette::on_pbDeleteRow_clicked()
{
    if(QMessageBox::question(this,QApplication::applicationName(), "Rimuovere ingrediente selezionato?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        removeItem();
    }
}

void HModRicette::on_pushButton_3_clicked()
{
    creatNewRecipe();
}

void HModRicette::on_pushButton_clicked()
{

    save();
    saveNote();

    loadRicetta();
    calculateTotal();
}

void HModRicette::on_pushButton_5_clicked()
{

    printRecipe();

}

void HModRicette::on_pushButton_4_clicked()
{
    HAssociazioni* f = new HAssociazioni(user,db);
    f->show();
}

void HModRicette::on_pbduplica_clicked()
{
    duplicateRecipe();
}



void HModRicette::on_leTotal_returnPressed()
{
    updateTotals();

}

void HModRicette::on_leTotal_textChanged(const QString &arg1)
{
    if (ui->leTotal->text().length()>5)
    {
        loadRicetta();
        calculateTotal();
    }
}

void HModRicette::on_pushButton_6_clicked()
{
    loadRicetta();
}



void HModRicette::on_pbC4R_clicked()
{
    int idricetta=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();
    qDebug()<<"idricetta:"<<idricetta;

    HRecipesForClient *f=new HRecipesForClient(db,idricetta);
    f->show();
}







void HModRicette::on_pbRicingredient_clicked()
{
    HRecipesForIngredient* f=new HRecipesForIngredient(user,db);

    f->show();

}

