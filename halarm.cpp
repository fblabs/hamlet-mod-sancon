#include "halarm.h"
#include "ui_halarm.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QModelIndexList>
#include <QStringListModel>
#include <QDataWidgetMapper>

#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include "huser.h"


HAlarm::HAlarm(QWidget *parent, QSqlDatabase pdb, HUser *puser) :
    QWidget(parent),
    ui(new Ui::HAlarm)
{
    ui->setupUi(this);
    updateButtons(true,true,true,false,false);
    db=pdb;
    action="n";
    user=puser;

    if (!db.isOpen())
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Attenzione: connessioe chiusa, riloggare",QMessageBox::Ok);
    }

    mod= new QSqlTableModel(0,db);
    mod->setTable("notifiche");
    mod->setSort(1,Qt::DescendingOrder);
    mod->select();


    usermod=new QSqlTableModel(0,db);
    usermod->setTable("utenti");
    usermod->setFilter("attivo > 0");
    usermod->setSort(4,Qt::AscendingOrder);
    usermod->select();

    groupmod=new QSqlTableModel(0,db);
    groupmod->setTable("gruppi");
    groupmod->setSort(1,Qt::AscendingOrder);
    groupmod->select();

    getTypes();

    ui->lvTarget->setModel(groupmod);
    ui->lvTarget->setModelColumn(1);
    ui->lvTarget->selectionModel()->setCurrentIndex(ui->lvTarget->model()->index(0,0),QItemSelectionModel::SelectCurrent);

    ui->tvMain->setModel(mod);
    ui->tvMain->setCurrentIndex(mod->index(0,0));

    ui->tvMain->setColumnHidden(0,true);
    ui->tvMain->setColumnHidden(3,true);
    ui->tvMain->setColumnHidden(4,true);
    ui->tvMain->setColumnHidden(6,true);
    ui->tvMain->setColumnHidden(7,true);
    ui->tvMain->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    toggleUIInteractivity(false);

    QDataWidgetMapper *wmap=new QDataWidgetMapper();

    wmap->setModel(mod);


    wmap->addMapping(ui->deData,1);
    wmap->addMapping(ui->cbTipo,2,"currentText");
    wmap->addMapping(ui->ptDescrizione,5);
    wmap->addMapping(ui->cbAttiva,7);
    wmap->addMapping(ui->leCreator,8);




    wmap->toFirst();




    ui->tvMain->setCurrentIndex(ui->tvMain->model()->index(-1,0));

    connect(ui->tvMain->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),wmap,SLOT(setCurrentModelIndex(QModelIndex)));
    connect(ui->tvMain->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(setUI()));
    connect(ui->tvMain->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(filterTargets()));

    ui->tvMain->setCurrentIndex(ui->tvMain->model()->index(0,0));
 //   setUI();
 //   filterTargets();


}

void HAlarm::updateButtons(bool nuovo, bool modifica, bool elimina, bool salva, bool annulla)
{
    // pushButton_4=nuovo,push_button_6=modifica,push_button_3=elimina,pushbutton=salva,pushbutton_5=annulla
    ui->pushButton_4->setEnabled(nuovo);
    ui->pushButton_6->setEnabled(modifica);
    ui->pushButton_3->setEnabled(elimina);
    ui->pushButton->setEnabled(salva);
    ui->pushButton_5->setEnabled(annulla);

}

void HAlarm::setUI()
{
    int rbutton=ui->tvMain->model()->index(ui->tvMain->selectionModel()->currentIndex().row(),6).data(0).toInt();

    if(rbutton>0)
    {
        ui->rbGroup->setChecked(true);
    }
    else
    {
        ui->rbUser->setChecked(true);
    }


}

void HAlarm::filterTargets()
{

    bool usaidgruppo=ui->tvMain->model()->index(ui->tvMain->selectionModel()->currentIndex().row(),6).data(0).toBool();
    int colonnaconids;
    int number=0;
    QString idsindb;



    if (usaidgruppo)
    {
       colonnaconids=4;
    }
    else
    {
        colonnaconids=3;
    }




    idsindb=ui->tvMain->model()->index(ui->tvMain->selectionModel()->currentIndex().row(),colonnaconids).data(0).toString();
    QStringList indexes=getIndexes(idsindb);
    QString filter;
    if(action =="n")
    {

    indexes=getIndexes(idsindb);
    number=indexes.count();


         if (number>=1)
         {
                filter="ID IN (";

                    for (int f=0;f<number;f++)
                    {
                       QString fid=indexes.at(f);

                       fid=fid.replace("-",",");
                       filter += fid;

                       if(f<indexes.count()-1)
                       {
                           filter +=",";
                       }
                    }

                    filter +=")";
         }
        else
        {
            filter="";
        }
    }
    else
    {
        indexes=QStringList();
       // filter="";
    }

    QSqlTableModel* lvmod=static_cast<QSqlTableModel*> (ui->lvTarget->model());
    lvmod->setFilter(filter);
    lvmod->select();

}

QStringList HAlarm::getIndexes(QString dbst)
{
    QStringList indexes=dbst.split("-");

    return indexes;

}

QString HAlarm::buildFilterString(QModelIndexList list)
{
    QString res;

    int size=list.count();

    for (int is=0;is<size; is++)
    {
        res += list.at(is).data(0).toString();

        if (is<list.count()-1)
        {
            res+="-";
        }
    }

    return res;
}



HAlarm::~HAlarm()
{
    delete ui;
}

bool HAlarm::addAlarm()
{
   QSqlQuery q(db);
   QString sql="INSERT INTO notifiche(tipo,IDUtente,IDGruppo,descrizione,data,usaidgruppo,attiva,creatore) VALUES (:tipo,:IDUtente,:IDGruppo,:descrizione,:data,:usaidgruppo,:attiva,:creatore)";
   int column;
   QString ids;

   bool b;

   //ricavo la colonna a cui va inviata la notifica

   if(ui->rbGroup->isChecked())
   {
       column=4;
   }
   else
   {
       column=3;
   }


   //ricavo gli id degli utenti o gruppi selezionati

   QModelIndexList selectedIndexes=ui->lvTarget->selectionModel()->selectedRows();

   //costrisco la stringa da salvare (es. 1-2-5)

   ids=buildFilterString(selectedIndexes);


   q.prepare(sql);
   q.bindValue(":tipo",ui->cbTipo->currentText());


   if (column==4)
   {
       q.bindValue(":IDUtente","");
       q.bindValue(":IDGruppo",ids);
       q.bindValue(":usaidgruppo",1);
   }
   else
   {
       q.bindValue(":IDUtente",ids);
       q.bindValue(":IDGruppo","");
       q.bindValue(":usaidgruppo",0);
   }
   q.bindValue(":descrizione",ui->ptDescrizione->toPlainText());
   q.bindValue(":data",ui->deData->date().toString("yyyy-MM-dd"));
   q.bindValue(":attiva",ui->cbAttiva->isChecked());
   q.bindValue(":creatore",user->getName());


    b=q.exec();

   //qDebug()<<q.lastError().text();

   return b;

}


bool HAlarm::updateAlarm()
{

    QSqlQuery q(db);
    QString sql="UPDATE notifiche SET tipo=:tipo,data=:data,IDUtente=:IDUtente,IDGruppo=:IDGruppo,descrizione=:descrizione,data=:data,usaidgruppo=:usaidgruppo,attiva=:attiva where ID=:ID";

    int column;
    QString ids;

    bool b;

    //ricavo la colonna a cui va inviata la notifica

    if(ui->rbGroup->isChecked())
    {
        column=4;
    }
    else
    {
        column=3;
    }


    //ricavo gli id degli utenti o gruppi selezionati

    QModelIndexList selectedIndexes=ui->lvTarget->selectionModel()->selectedRows();

    //costrisco la stringa da salvare (es. 1-2-5)

    ids =buildFilterString(selectedIndexes);



    q.prepare(sql);
    q.bindValue(":tipo",ui->cbTipo->currentText());

    if (column==4)
    {
        q.bindValue(":IDUtente","");
        q.bindValue(":IDGruppo",ids);
        q.bindValue(":usaidgruppo",1);
    }
    else
    {
        q.bindValue(":IDUtente",ids);
        q.bindValue(":IDGruppo","");
        q.bindValue(":usaidgruppo",0);
    }
    q.bindValue(":descrizione",ui->ptDescrizione->toPlainText());
    q.bindValue(":data",ui->deData->date().toString("yyyy-MM-dd"));
    q.bindValue(":attiva",ui->cbAttiva->isChecked());


    QString id=ui->tvMain->model()->index(ui->tvMain->selectionModel()->currentIndex().row(),0).data(0).toString();
    q.bindValue(":ID",id);

     b=q.exec();

    //qDebug()<<q.lastError().text();

    return b;

}

void HAlarm::on_pushButton_2_clicked()
{
    close();
}

void HAlarm::on_pushButton_4_clicked()
{
    action="i";
    setUI();
    filterTargets();
    updateButtons(false,false,false,true,true);

    ui->leCreator->setText(user->getName());

    QString filter="";
    QSqlTableModel* lvmod=static_cast<QSqlTableModel*> (ui->lvTarget->model());
    lvmod->setFilter(filter);

    ui->deData->setDate(QDate::currentDate());
    ui->ptDescrizione->setPlainText("");
    mod->insertRow(mod->rowCount());
    ui->tvMain->setCurrentIndex(mod->index(mod->rowCount(),0));
    toggleUIInteractivity(true);





}

void HAlarm::on_rbGroup_toggled(bool checked)
{

    if(checked)
    {
        ui->lvTarget->setModel(groupmod);
        ui->lvTarget->setModelColumn(1);
        filterTargets();

    }
}


void HAlarm::on_rbUser_toggled(bool checked)
{
    if(checked)
    {
        ui->lvTarget->setModel(usermod);
        ui->lvTarget->setModelColumn(4);
        filterTargets();

    }
}

void HAlarm::getTypes()
{
    QStringList list;

    list<<"Inviare email"<<"contattare telefonicamente";
    QStringListModel *tipimod=new QStringListModel();

    QSqlQuery q(db);
    QString sql = "SELECT DISTINCT tipo FROM notifiche";
    q.prepare(sql);
    q.exec();

    while(q.next())
    {
        QString tipo=q.value(0).toString();

        if (!list.contains(tipo))
        {
           list <<tipo;

        }
    }

    tipimod->setStringList(list);

    ui->cbTipo->setModel(tipimod);
}

void HAlarm::on_pushButton_clicked()
{

   if(action=="i")
   {


        if(addAlarm())
        {
            mod->select();
            filterTargets();
            QMessageBox::information(this,QApplication::applicationName(),"notifica registrata",QMessageBox::Ok);
        }
        else
        {
            QMessageBox::warning(this,QApplication::applicationName(),"errore\n"+db.lastError().text(),QMessageBox::Ok);
        }
        toggleUIInteractivity(false);
       }
   else if (action=="m")
   {


       if(updateAlarm())
       {
           mod->select();
           filterTargets();
           QMessageBox::information(this,QApplication::applicationName(),"modifiche salvate",QMessageBox::Ok);
       }
       else
       {
           QMessageBox::warning(this,QApplication::applicationName(),"errore salvando le modifiche",QMessageBox::Ok);
       }
       toggleUIInteractivity(false);
   }

   action="n";

   updateButtons(true,true,true,false,false);
   filterTargets();
}

void HAlarm::toggleUIInteractivity(bool activate=true)
{
    ui->cbAttiva->setEnabled(activate);
    ui->deData->setEnabled(activate);
    ui->cbTipo->setEnabled(activate);
    ui->rbGroup->setEnabled(activate);
    ui->rbUser->setEnabled(activate);
    ui->lvTarget->setEnabled(activate);
    ui->ptDescrizione->setReadOnly(!activate);

    ui->tvMain->setEnabled(!activate);
}

void HAlarm::on_pushButton_3_clicked()
{

    if(QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Eliminare la notifica selezionata?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        mod->removeRow(ui->tvMain->currentIndex().row());

    }

    mod->submitAll();
    mod->select();
}

void HAlarm::on_pushButton_5_clicked()
{
    //annulla
    action="n";
    ui->pushButton->setEnabled(false);
    ui->pushButton_5->setEnabled(false);

    mod->select();
    ui->tvMain->setCurrentIndex(ui->tvMain->model()->index(0,0));

    filterTargets();
    updateButtons(true,true,true,false,false);
    toggleUIInteractivity(false);


}

void HAlarm::on_pushButton_6_clicked()
{
    action="m";
    ui->pushButton->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    filterTargets();
    updateButtons(false,false,false,true,true);
    toggleUIInteractivity(true);

}
