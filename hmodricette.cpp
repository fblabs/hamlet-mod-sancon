#include "hmodricette.h"
#include "ui_hmodricette.h"
#include "huser.h"

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
//nclude <QDebug>
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
#include "hrecipesforclient.h"
#include "hrecipesforingredient.h"
#include "hnew_recipe_main.h"
#include "hpdfprint.h"
#include <QStyledItemDelegate>

#include <QFileDialog>
#include <QBuffer>

class AlignPicCenterDelegate : public QStyledItemDelegate{
public:
    using QStyledItemDelegate::QStyledItemDelegate;
protected:
    void initStyleOption(QStyleOptionViewItem *option, const QModelIndex &index) const override {
        QStyledItemDelegate::initStyleOption(option,index);
        option->decorationAlignment = Qt::AlignCenter;
    }
};

HModRicette::HModRicette(HUser *pusr,QSqlDatabase pdb,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HModRicette)
{
    ui->setupUi(this);
    db=pdb;
    user=pusr;
    current_id=-1;

    ui->pushButton->setEnabled(user->get_ricette_u()>0);
    ui->pushButton_6->setEnabled(user->get_ricette_u()>0);
    ui->pbAddRow->setEnabled(user->get_ricette_u()>0);
    ui->pbDeleteRow->setEnabled(user->get_ricette_u()>0);
    ui->pushButton_3->setEnabled(user->get_ricette_u()>0);
    ui->pbduplica->setEnabled(user->get_ricette_u()>0);
    ui->pb_save_images->setVisible(false);
    ui->pb_addImage->setVisible(false);
    ui->tvImages->setVisible(false);

    getRicette();



    ui->cbRicette->setModel(qmric);
    ui->cbRicette->setModelColumn(1);




    //  ui->cbRicette->findData()

    connect(ui->tableView,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(showContextMenu(QPoint)));
    connect(ui->tvImages,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(showContextMenuImg(QPoint)));





    ui->tableView->resizeColumnsToContents();

    QPalette p = ui->tableView->palette();
    p.setBrush(p.Inactive, p.Highlight, p.brush(p.Highlight));
    ui->tableView->setPalette(p);
    // ui->tableView->horizontalHeader()->resizeSections(QHeaderView::Stretch);



    ui->checkBox->setVisible(false);
    QShortcut *shortcut =new QShortcut(QKeySequence("F5"),this);
    connect(shortcut,SIGNAL(activated()),this,SLOT(showAssociatedCustomers()));
    connect(this,SIGNAL(go_calc()),this,SLOT(calculateTotal()));
    connect(ui->cbRicette,SIGNAL(currentIndexChanged(int)),this,SLOT(loadRicetta()));

    ui->cbRicette->setCurrentIndex(-1);
    //ui->cbRicette->setCurrentIndex(0);



    ui->cbRicette->setFocus();



}



void HModRicette::showContextMenu(const QPoint &pos)
{
    QPoint globalPos =ui->tableView->mapToGlobal(pos);
    QMenu *menu=new QMenu(0);
    QAction *addIngredient=menu->addAction("Aggiungi Ingrediente");
    QAction *removeIngredient=menu->addAction("Rimuovi Ingrediente");
    QAction *mostraAssociazioni=menu->addAction("Associata a...");



    connect(addIngredient,SIGNAL(triggered(bool)),this,SLOT(showaddRow()));
    connect(removeIngredient,SIGNAL(triggered(bool)),this,SLOT(removeItem()));
    connect(mostraAssociazioni,SIGNAL(triggered(bool)),this,SLOT(showAssociatedCustomers()));


    menu->popup(globalPos);
}

void HModRicette::showContextMenuImg(const QPoint &pos)
{
    QPoint globalPos =ui->tvImages->mapToGlobal(pos);
    QMenu *menu=new QMenu(0);
    QAction *addImage=menu->addAction("Aggiungi Immagine...");
    QAction *removeImage=menu->addAction("Rimuovi Immagine...");



    connect(addImage,SIGNAL(triggered(bool)),this,SLOT(chooseImage()));
    connect(removeImage,SIGNAL(triggered(bool)),this,SLOT(removeImage_ns()));



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

void HModRicette::loadImages(const int p_id)
{
    QSqlQueryModel* mod=new QSqlQueryModel();
    QStandardItemModel *imod=new QStandardItemModel();
    QSqlQuery q(db);
    QString sql="SELECT ID,ID_ricetta,immagine FROM recipe_images WHERE ID_ricetta=:id";

    //StyledItemAlignPicCenterDelegate *dlg=new AlignPicCenterDelegate();

    // ui->tvImages->setItemDelegate(dlg);

    q.prepare(sql);
    q.bindValue(":id",p_id);
    q.exec();
    mod->setQuery(q);

    for(int n=0;n<mod->rowCount();++n)
    {
        QString imgUrl=QString();

        imgUrl=mod->index(n,2).data().toString();


        QImage img(imgUrl);
        QPixmap px=QPixmap::fromImage(img);
        px=px.scaled(ui->tvImages->rect().width()/2,ui->tvImages->rect().height()/3,Qt::KeepAspectRatio);



        QStandardItem* it_img=new QStandardItem();
        it_img->setData(QVariant(px),Qt::DecorationRole);
        it_img->setTextAlignment(Qt::AlignCenter);
        QStandardItem *it_path=new QStandardItem();
        it_path->setText(imgUrl);


        QList<QStandardItem*> row;
        row<<it_img<<it_path;
        imod->appendRow(row);

    }



    ui->tvImages->setModel(imod);
    ui->tvImages->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tvImages->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tvImages->setColumnHidden(1,true);
    ui->tvImages->horizontalHeader()->setStretchLastSection(true);
    imod->rowCount()<1? ui->tvImages->setVisible(false):ui->tvImages->setVisible(true);







}

void HModRicette::chooseImage()
{
    QString imagepath = QFileDialog::getOpenFileName(this,"Apri Immagine", QDir::currentPath(),"Immagini (*.png *.jpg);;Tutti i file (*.*)",0,QFileDialog::DontUseNativeDialog);
    QImage image;
    image.load(imagepath);


    QByteArray bytes;
    QBuffer buffer(&bytes);
    buffer.open(QIODevice::WriteOnly);
    image.save(&buffer,"PNG");




    QImage img(imagepath);
    QPixmap px=QPixmap::fromImage(img);
    px=px.scaled(ui->tvImages->rect().width()-5,ui->tvImages->rect().height()/3,Qt::KeepAspectRatio);


    QStandardItem* it_img=new QStandardItem();
    it_img->setData(QVariant(px),Qt::DecorationRole);
    it_img->setTextAlignment(Qt::AlignCenter);
    QStandardItem *it_path=new QStandardItem();
    it_path->setText(imagepath);
    QList<QStandardItem*> row;
    row<<it_img<<it_path;;

    QStandardItemModel* imod=static_cast<QStandardItemModel*>(ui->tvImages->model());
    imod->appendRow(row);
    ui->tvImages->setColumnHidden(1,true);

}

void HModRicette::removeImage_ns()
{
    QStandardItemModel* imod=static_cast<QStandardItemModel*>(ui->tvImages->model());
    int row=-1;
    row=ui->tvImages->currentIndex().row();
    qDebug()<<row;

    imod->removeRow(row);
}

void HModRicette::save_images_d(const int p_id_ricetta)
{
    db.transaction();
    QStandardItemModel* m=static_cast<QStandardItemModel*>(ui->tvImages->model());
    int idricetta=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();


    QSqlQuery q(db);
    QString sql="DELETE FROM recipe_images WHERE ID_ricetta=:id";
    q.prepare(sql);
    q.bindValue(":id",idricetta);
    q.exec();


    for (int i=0;i<m->rowCount();++i)
    {
        QString img=m->index(i,1).data().toString();
        sql="INSERT INTO recipe_images(ID_ricetta,immagine) VALUES (:id,:img)";
        q.prepare(sql);
        q.bindValue(":id",idricetta);
        q.bindValue(":img",img);
        q.exec();
        qDebug()<<i<<img<<idricetta<<q.lastError().text();
    }

    qDebug()<<"SALVATTO!";
    db.commit();
    loadImages();
}

void HModRicette::on_pushButton_2_clicked()
{
    if (QMessageBox::question(this,QApplication::applicationName(),"Chiudere?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        this->close();
    }
}




void HModRicette::getRicette()
{
    QCompleter *comp=new QCompleter();
    qmric=new  QSqlQueryModel();
    QSqlQuery q(db);
    QString sql=QString();


    if(ui->rb_con->isChecked())
    {
        ui->pushButton_3->setEnabled(false);
        // sql="SELECT prodotti.ID,prodotti.descrizione from prodotti,ricette WHERE prodotti.ID=ricette.ID_prodotto ORDER BY prodotti.descrizione ASC";
        //  sql="select distinctrow prodotti.id,prodotti.descrizione from prodotti,ricette Where prodotti.ID IN (SELECT ricette.ID_prodotto from ricette) and prodotti.tipo in (2,6) order by prodotti.descrizione asc ";
        sql="select ricette.ID, prodotti.descrizione from ricette,prodotti where ricette.ID_prodotto=prodotti.id order by prodotti.descrizione asc";

    }
    else
    {
        ui->pushButton_3->setEnabled(true);
        //  sql="SELECT prodotti.ID,prodotti.descrizione from prodotti WHERE prodotti.ID not in (SELECT ID_prodotto from ricette) AND prodotti.tipo in (2,6) ORDER BY prodotti.descrizione ASC";
        sql="select  prodotti.id,prodotti.descrizione from prodotti,ricette Where prodotti.ID=ricette.ID_prodotto=prodotti.ID and prodotti.ID NOT IN (SELECT ID_prodotto from ricette) and prodotti.tipo in (2,6) order by prodotti.descrizione ASC";
    }
    q.exec(sql);
    qmric->setQuery(q);

    ui->cbRicette->setModel(qmric);
    ui->cbRicette->setModelColumn(1);
    comp->setModel(qmric);
    comp->setCompletionColumn(1);
    comp->setCompletionMode(QCompleter::PopupCompletion);
    comp->setCaseSensitivity(Qt::CaseInsensitive);
    ui->cbRicette->setCompleter(comp);
    ui->cbRicette->setCurrentIndex(0);

}

void HModRicette::creatNewRecipe(const int p_tipo)
{
    bool b;
    bool ok;
    int tipo=p_tipo;
    //nuova ricetta
    QString text=QInputDialog::getText(this,"Nuova Ricetta","Inserire il nome\nVerrà creato un nuovo prodotto",QLineEdit::Normal,"",&ok);
    text=text.toUpper();



    if(ok)
    {
        db.transaction();

        QString sql="INSERT INTO `prodotti`(`descrizione`,`tipo`,`allergenico`)VALUES(:descrizione,:tipo,0)";
        QSqlQuery q(db);
        q.prepare(sql);
        q.bindValue(":descrizione",QVariant(text));
        q.bindValue(":tipo",tipo);

        b=q.exec();
        if(!b)
        {
            db.rollback();
            QMessageBox::warning(this,QApplication::applicationName(),"ERRORE CREANDO IL PRODOTTO!!!",QMessageBox::Ok);
            return;
        }


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
            //QMessageBox::information(this,QApplication::applicationName(),"RICETTA CREATA",QMessageBox::Ok);
            ui->rb_con->toggle();

        }
        else
        {
            QMessageBox::warning(this,QApplication::applicationName(),"ERRORE CREANDO LA RICETTA!",QMessageBox::Ok);
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

void HModRicette::add_recipe_to_product(const int p_product)
{
    QSqlQuery q(db);
    db.transaction();
    int id=p_product;

    QString sql="INSERT INTO ricette (ID_prodotto,note) VALUES (:id,'')";
    q.prepare(sql);
    q.bindValue(":id",id);

    bool b=q.exec();
    if(b)
    {
        db.commit();
        getRicette();
        QMessageBox::information(this,QApplication::applicationName(),"RICETTA INIZIALIZZATA",QMessageBox::Ok);
    }
    else
    {
        QMessageBox::warning(this,QApplication::applicationName(),"ERRORE CREANDO LA RICETTA!"+q.lastError().text(),QMessageBox::Ok);
        db.rollback();
        return;
    }
}

void HModRicette::addRiga(QList<QStandardItem*>list)
{


    QStandardItemModel* model = static_cast<QStandardItemModel*>(ui->tableView->model());

    model->appendRow(list);

    model->setHeaderData(3,Qt::Horizontal,"INGREDIENTE");
    model->setHeaderData(4,Qt::Horizontal,"QUANTITA\'");
    model->setHeaderData(6,Qt::Horizontal,"%");


    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnHidden(1,true);
    ui->tableView->setColumnHidden(2,true);
    ui->tableView->setColumnHidden(5,true);

    emit go_calc();



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
            QMessageBox::warning(this,QApplication::applicationName(),"ERRORE DUPLICANDO LA RICETTA!",QMessageBox::Ok);
        }





        return b;

    }






    return b;



}


void HModRicette::loadRicetta()
{



    int idricetta=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();



    if(idricetta<1)
    {
        ui->pb_save_images->setVisible(false);
        ui->pb_addImage->setVisible(false);
        ui->pbImages->setVisible(false);
        return;
    }else{
        ui->pb_save_images->setVisible(true);
        ui->pb_addImage->setVisible(true);
         ui->pbImages->setVisible(true);
    }

    QSqlQuery q(db);
    // QString sql = "SELECT righe_ricette.ID,righe_ricette.ID_Ricetta,righe_ricette.ID_prodotto,prodotti.descrizione AS 'Ingrediente',righe_ricette.quantita AS 'Quantità',righe_ricette.show_prod AS 'Mostra in produzione',prodotti.allergenico  FROM righe_ricette,prodotti WHERE prodotti.ID=righe_ricette.ID_prodotto and righe_ricette.ID_prodotto=:idprodotto ORDER BY righe_ricette.quantita DESC";
    // QString sql="SELECT righe_ricette.ID,righe_ricette.ID_Ricetta,righe_ricette.ID_prodotto,prodotti.descrizione AS 'Ingrediente',righe_ricette.quantita AS 'Quantità',righe_ricette.show_prod AS 'Mostra in produzione',prodotti.allergenico  FROM ricette,righe_ricette,prodotti WHERE ricette.ID=righe_ricette.ID_ricetta and righe_ricette.id_prodotto=prodotti.ID and ricette.ID_prodotto=:idprodotto ORDER BY righe_ricette.quantita DESC";
    // sql="SELECT prodotti.descrizione as 'MATERIALE',righe_ricette.quantita as 'QUANTITA',@p:=(righe_ricette.quantita/:tot_q)*100 as '%', prodotti.prezzo as 'COSTO UNITARIO (€*Kg)',FORMAT(righe_ricette.quantita*prodotti.prezzo,4) as 'COSTO PER RICETTA',FORMAT ((prodotti.prezzo*:f)*(@p/100),4) as 'COSTO FORMATO' FROM righe_ricette,prodotti,ricette WHERE righe_ricette.ID_ricetta=ricette.ID and prodotti.ID=righe_ricette.ID_prodotto and ricette.ID=(SELECT ID from ricette where ricette.ID_prodotto=:idp) group by prodotti.ID,ricette.ID,righe_ricette.Id";

    //  QString sql="SELECT righe_ricette.ID,righe_ricette.ID_Ricetta,righe_ricette.ID_prodotto,prodotti.descrizione AS 'Ingrediente',righe_ricette.quantita AS 'Quantità',@p:=(righe_ricette.quantita/:tot_q)*100 as '%',righe_ricette.show_prod AS 'Mostra in produzione',prodotti.allergenico from righe_ricette,prodotti  where prodotti.ID=righe_ricette.ID_prodotto and righe_ricette.ID_ricetta=:idricetta order by righe_ricette.quantita desc";
    QString sql="SELECT righe_ricette.ID,righe_ricette.ID_Ricetta,righe_ricette.ID_prodotto,prodotti.descrizione AS 'Ingrediente',righe_ricette.quantita AS 'Quantità',righe_ricette.show_prod AS 'Mostra in produzione',prodotti.allergenico from righe_ricette,prodotti  where prodotti.ID=righe_ricette.ID_prodotto and righe_ricette.ID_ricetta=:idricetta order by righe_ricette.quantita desc";

    q.prepare(sql);
    q.bindValue(":idricetta",idricetta);
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
        QStandardItem *perc =new QStandardItem("");
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
        list.append(perc);

        mod->appendRow(list);



    }

    ui->tableView->setModel(mod);


    mod->setHeaderData(3,Qt::Horizontal,"INGREDIENTE");
    mod->setHeaderData(4,Qt::Horizontal,"QUANTITA\'");
    mod->setHeaderData(5,Qt::Horizontal,"Mostra in Produzione");
    mod->setHeaderData(6,Qt::Horizontal,"%");

    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnHidden(1,true);
    ui->tableView->setColumnHidden(2,true);

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

    loadImages(idricetta);
    ui->tvImages->setColumnHidden(1,true);

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

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


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

    ui->leTotal->setText(QString::number(total,'f',4));

    for(int r=0;r<mod->rowCount();++r)
    {
        double p=0.0;
        p=(mod->index(r,4).data().toDouble()/total)*100;
        mod->setData(mod->index(r,6), QString::number(p,'f',2));
    }


}

void HModRicette::removeItem()
{
    QStandardItemModel *mod=static_cast<QStandardItemModel*>(ui->tableView->model());

    int row=ui->tableView->selectionModel()->currentIndex().row();

    mod->removeRow(row);
    calculateTotal();


}

void HModRicette::save()
{
    QSqlQuery q(db);
    QString sql;


    int idricetta=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();
    int rows=ui->tableView->model()->rowCount();

    QApplication::setOverrideCursor(Qt::WaitCursor);


    db.transaction();

    saveNote();

    //cancello la ricetta

    sql="delete from righe_ricette where ID_ricetta=:idricetta";
    q.prepare(sql);
    q.bindValue(":idricetta",QVariant(idricetta));
    bool b= q.exec();

    if(!b)return;

    //la ricreo modificata

    int idpro=-1;;
    double quant=0.0;
    int show=0;

    sql="insert into righe_ricette (ID_ricetta,ID_prodotto,quantita,show_prod) VALUES (:idricetta,:idprodotto,:quantita,:show)";

    for (int i=0; i< rows;++i)
    {

        idpro=ui->tableView->model()->index(i,2).data(0).toInt();
        quant=ui->tableView->model()->index(i,4).data(0).toDouble();
        show=ui->tableView->model()->index(i,5).data(0).toInt();



        q.prepare(sql);
        q.bindValue(":idricetta",QVariant(idricetta));
        q.bindValue(":idprodotto",QVariant(idpro));
        q.bindValue(":quantita",QVariant(quant));
        q.bindValue(":show",QVariant(show));
        bool c=q.exec();




        if(!c)
        {
            db.rollback();
            QMessageBox::warning(this,QApplication::applicationName(),"Si è verificato un errore ",QMessageBox::Ok);
            return;
        }
        else
        {
            db.commit();
        }


    }

    save_images_d(idricetta);

    QApplication::restoreOverrideCursor();



    loadRicetta();
    QMessageBox::information(this,QApplication::applicationName(),"Ricetta salvata",QMessageBox::Ok);


}

void HModRicette::printRecipe()
{

    QString strStream;

    QAbstractItemModel *mod=ui->tableView->model();

    QTextStream out(&strStream);
    QString bgcol=QString();
    QString title=QString();


    const int rowCount = mod->rowCount();
    const int columnCount = mod->columnCount();


    title="STAMPA RICETTA "+ui->cbRicette->currentText();


    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table width=100% border=1 cellspacing=0 cellpadding=2>\n";

    // headers



    QList<int> column_indexes;
    for (int column = 0 ; column < columnCount; column++)
    {
        if (!ui->tableView->isColumnHidden(column))
        {
            column_indexes.append(column);
        }

    }




    out << "<thead><tr bgcolor='#5cabff'><th colspan='"+QString::number(column_indexes.size())+"'>"+ title +"</th></tr><tr bgcolor='lightgrey'>";


    for (int column = 0 ; column < column_indexes.size(); column++)
    {


        out << QString("<th>%1</th>").arg(mod->headerData(column_indexes.at(column),Qt::Horizontal).toString());


    }

    out << "</tr></th></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {

        out << "<tr>";
        if(row%2)
        {
            bgcol="lightgreen";
        }
        else
        {
            bgcol="white";
        }
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tableView->isColumnHidden(column)) {
                QString data = mod->index(row, column).data().toString().simplified();

                if (column==15 || column==16)
                {

                    out << QString("<td bgcolor='"+bgcol+"' align='center'>%1</td>").arg((mod->index(row,column).data(Qt::CheckStateRole)==Qt::Checked)? QString("[X]") : QString("&nbsp;"));
                    //out << QString("<td bgcolor='"+bgcol+"' align='center'>%1</td>").arg(mod->index(row,column).data(Qt::CheckStateRole)==Qt::Checked)? QString("[X]") : QString("&nbsp;");

                }
                else if(column==17)
                {
                    out << QString("<td style='color:red' bgcolor='"+bgcol+"'};>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                }
                else
                {
                    out << QString("<td bgcolor='"+bgcol+"'>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                }
            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
           "</body>\n"
           "</html>\n";


    HPDFPrint *f=new HPDFPrint(nullptr,strStream);

    QPageLayout::Orientation orientation;
    orientation=QPageLayout::Portrait;
    f->set_orientation(orientation);
    f->show();


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
    q.exec();

}

void HModRicette::on_pbAddRow_clicked()
{
    int idr=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();
    HRecipeAddRow *f=new HRecipeAddRow(idr,db);
    connect(f,SIGNAL(rowadded(QList<QStandardItem*>)),this,SLOT(addRiga( QList<QStandardItem*>)));
    connect(this,SIGNAL(go_calc()),this,SLOT(calculateTotal()));
    f->show();
    //calculateTotal();
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
    int id_prodotto=-1;



    ui->cbRicette->model()->rowCount()<1? id_prodotto=-1:id_prodotto=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();


    HNew_recipe_main *f=new HNew_recipe_main(id_prodotto,db);
    connect(f,SIGNAL(sig_add_recipe_and_product(int)),this,SLOT(creatNewRecipe(int)));
    connect(f,SIGNAL(sig_add_recipe_to_product(int)),this,SLOT(add_recipe_to_product(int)));
    f->show();




    getRicette();

}

void HModRicette::on_pushButton_clicked()
{

    save();
    loadRicetta();

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

void HModRicette::on_pushButton_6_clicked()
{
    loadRicetta();
}



void HModRicette::on_pbC4R_clicked()
{
    int idricetta=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toInt();


    HRecipesForClient *f=new HRecipesForClient(db,idricetta);
    f->show();
}







void HModRicette::on_pbRicingredient_clicked()
{
    HRecipesForIngredient* f=new HRecipesForIngredient(user,db);

    f->show();

}


void HModRicette::on_rb_senza_toggled(bool checked)
{
    getRicette();
    ui->pushButton_3->setEnabled(true);
}


void HModRicette::on_rb_con_toggled(bool checked)
{
    getRicette();
    ui->pushButton_3->setEnabled(false);
}





void HModRicette::on_pbReset_clicked()
{
    loadRicetta();
}


void HModRicette::on_pb_save_images_clicked()
{
    removeImage_ns();
}


void HModRicette::on_pbImages_clicked()
{
     ui->tvImages->setVisible(true);
}


void HModRicette::on_pb_addImage_clicked()
{
    chooseImage();
}

