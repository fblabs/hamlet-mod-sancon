#include "hgroups.h"
#include "ui_hgroups.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QCompleter>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>

#include "hcreategroup.h"



HGroups::HGroups(HUser *p_user, const int p_user_group, QString p_user_name, QSqlDatabase p_db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HGroups)
{
    ui->setupUi(this);
    db=p_db;
    user=p_user;

    user_group=p_user_group;
    user_name=p_user_name;


    ui->cbGruppi->setModel(getGroups());
    ui->cbGruppi->setModelColumn(1);

    ui->cbGruppi->completer()->setCompletionColumn(1);
    ui->cbGruppi->completer()->setCaseSensitivity(Qt::CaseInsensitive);
    ui->cbGruppi->completer()->setCompletionMode(QCompleter::PopupCompletion);
    ui->cbGruppi->setCurrentIndex(0);
}

HGroups::~HGroups()
{
    delete ui;
}

QSqlTableModel* HGroups::getGroups()
{
    QSqlTableModel* mod=new QSqlTableModel(nullptr,db);
    mod->setTable("gruppi");
    mod->setSort(1,Qt::AscendingOrder);

    if(user_group>-1)
    {

         mod->setFilter("ID="+QString::number(user_group));
         this->setWindowTitle("PERMESSI "+user_name);
         ui->cbGruppi->setEnabled(false);
    }

    qDebug()<<mod->lastError().text()<<mod->rowCount()<<user_group;

    mod->select();

    mod->setEditStrategy(QSqlTableModel::OnManualSubmit);

    return mod;
}

void HGroups::on_pbClose_clicked()
{
    close();
}


void HGroups::on_cbGruppi_currentIndexChanged(int index)
{
    QSqlTableModel* groups_model=static_cast<QSqlTableModel*>(ui->cbGruppi->model());

    setup_permissions_ui(groups_model);
}

void HGroups::setup_permissions_ui(QSqlTableModel *mod)
{

    QSqlRecord current_record=mod->record(ui->cbGruppi->currentIndex());
    // QSqlRecord current_record=mod->record(ui->cbGruppi->currentIndex());

    current_record.value(4).toInt()>0?ui->cbVistaUtenti->setChecked(true):ui->cbVistaUtenti->setChecked(false);
    current_record.value(5).toInt()>0?ui->cbUpdateUtenti->setChecked(true):ui->cbUpdateUtenti->setChecked(false);
    current_record.value(6).toInt()>0?ui->cbVistaAnagrafica->setChecked(true):ui->cbVistaAnagrafica->setChecked(false);
    current_record.value(7).toInt()>0?ui->cbUpdateAnagrafica->setChecked(true):ui->cbUpdateAnagrafica->setChecked(false);
    current_record.value(8).toInt()>0?ui->cbVistaNotifiche->setChecked(true):ui->cbVistaNotifiche->setChecked(false);
    current_record.value(9).toInt()>0?ui->cbUpdateNotifiche->setChecked(true):ui->cbUpdateNotifiche->setChecked(false);
    current_record.value(10).toInt()>0?ui->cbVistacontatti->setChecked(true):ui->cbVistacontatti->setChecked(false);
    current_record.value(11).toInt()>0?ui->cbUpdateContatti->setChecked(true):ui->cbUpdateContatti->setChecked(false);
    current_record.value(12).toInt()>0?ui->cbVistaLotti->setChecked(true):ui->cbVistaLotti->setChecked(false);
    current_record.value(13).toInt()>0?ui->cbUpdateLotti->setChecked(true):ui->cbUpdateLotti->setChecked(false);
    current_record.value(14).toInt()>0?ui->cbVistaOperazioni->setChecked(true):ui->cbVistaOperazioni->setChecked(false);
    current_record.value(15).toInt()>0?ui->cbUpdateOperazioni->setChecked(true):ui->cbUpdateOperazioni->setChecked(false);
    current_record.value(16).toInt()>0?ui->cbVistaProdotti->setChecked(true):ui->cbVistaProdotti->setChecked(false);
    current_record.value(17).toInt()>0?ui->cbUpdateProdotti->setChecked(true):ui->cbUpdateProdotti->setChecked(false);
    current_record.value(18).toInt()>0?ui->cbVistaSchede->setChecked(true):ui->cbVistaSchede->setChecked(false);
    current_record.value(19).toInt()>0?ui->cbUpdateSchede->setChecked(true):ui->cbUpdateSchede->setChecked(false);
    current_record.value(20).toInt()>0?ui->cbVistaRicette->setChecked(true):ui->cbVistaRicette->setChecked(false);
    current_record.value(21).toInt()>0?ui->cbUpdateRicette->setChecked(true):ui->cbUpdateRicette->setChecked(false);
    current_record.value(22).toInt()>0?ui->cbVistaProgrammi->setChecked(true):ui->cbVistaProgrammi->setChecked(false);
    current_record.value(23).toInt()>0?ui->cbUpdateProgrammi->setChecked(true):ui->cbUpdateProgrammi->setChecked(false);
    current_record.value(24).toInt()>0?ui->cbVistaProduzione->setChecked(true):ui->cbVistaProduzione->setChecked(false);
    current_record.value(25).toInt()>0?ui->cbUpdateProduzione->setChecked(true):ui->cbUpdateProduzione->setChecked(false);
    current_record.value(26).toInt()>0?ui->cbVistaPackages->setChecked(true):ui->cbVistaPackages->setChecked(false);
    current_record.value(27).toInt()>0?ui->cbUpdatePackages->setChecked(true):ui->cbUpdatePackages->setChecked(false);
    current_record.value(28).toInt()>0?ui->cbVistaCalcoloCosti->setChecked(true):ui->cbVistaCalcoloCosti->setChecked(false);
    current_record.value(29).toInt()>0?ui->cbUpdateCalcoloCosti->setChecked(true):ui->cbUpdateCalcoloCosti->setChecked(false);
    current_record.value(30).toInt()>0?ui->cbVistaAnalisi->setChecked(true):ui->cbVistaAnalisi->setChecked(false);
    current_record.value(31).toInt()>0?ui->cbUpdateAnalisi->setChecked(true):ui->cbUpdateAnalisi->setChecked(false);
    ui->leDesc->setText( current_record.value(32).toString());



}

void HGroups::update_permissions(const int gruppo)
{

    QSqlQuery q(db);

    int utenti_v,utenti_u,anagrafica_v,anagrafica_u,notifiche_v,notifiche_u,contatti_v,contatti_u,lotti_v,lotti_u,operazioni_v,operazioni_u,prodotti_v,prodotti_u,schede_v,schede_u,ricette_v,ricette_u,programmi_v,programmi_u,produzione_v,produzione_u,packages_v,packages_u =0;
    int costi_v, costi_u,analisi_v,analisi_u=0;



    QString sql="update gruppi set utenti_v=:utenti_v, utenti_u=:utenti_u, anagrafica_v=:anagrafica_v, anagrafica_u=:anagrafica_u, notifiche_v=:notifiche_v, notifiche_u=:notifiche_u,contatti_v=:contatti_v,contatti_u=:contatti_u,lotti_v=:lotti_v,lotti_u=:lotti_u,\
            operazioni_v=:operazioni_v,operazioni_u=:operazioni_u,prodotti_v=:prodotti_v,prodotti_u=:prodotti_u,schede_v=:schede_v,schede_u=:schede_u,ricette_v=:ricette_v,ricette_u=:ricette_u,programmi_v=:programmi_v,programmi_u=:programmi_u,produzione_v=:produzione_v,produzione_u=:produzione_u,packages_v=:packages_v,packages_u=:packages_u,\
            costi_v=:costi_v,costi_u=:costi_u,analisi_v=:analisi_v,analisi_u=:analisi_u,note=:note where ID=:id";

            ui->cbVistaUtenti->isChecked()?utenti_v=1:utenti_v=0;
    ui->cbUpdateUtenti->isChecked()?utenti_u=1:utenti_u=0;
    ui->cbVistaAnagrafica->isChecked()?anagrafica_v=1:anagrafica_v=0;
    ui->cbUpdateAnagrafica->isChecked()?anagrafica_u=1:anagrafica_u=0;
    ui->cbVistaNotifiche->isChecked()?notifiche_v=1:notifiche_v=0;
    ui->cbUpdateNotifiche->isChecked()?notifiche_u=1:notifiche_u=0;
    ui->cbVistacontatti->isChecked()?contatti_v=1:contatti_v=0;
    ui->cbUpdateContatti->isChecked()?contatti_u=1:contatti_u=0;
    ui->cbVistaLotti->isChecked()?lotti_v=1:lotti_v=0;
    ui->cbUpdateLotti->isChecked()?lotti_u=1:lotti_u=0;
    ui->cbVistaOperazioni->isChecked()?operazioni_v=1:operazioni_v=0;
    ui->cbUpdateOperazioni->isChecked()?operazioni_u=1:operazioni_u=0;
    ui->cbVistaProdotti->isChecked()?prodotti_v=1:prodotti_v=0;
    ui->cbUpdateProdotti->isChecked()?prodotti_u=1:prodotti_u=0;
    ui->cbVistaSchede->isChecked()?schede_v=1:schede_v=0;
    ui->cbUpdateSchede->isChecked()?schede_u=1:schede_u=0;
    ui->cbVistaRicette->isChecked()?ricette_v=1:ricette_v=0;
    ui->cbUpdateRicette->isChecked()?ricette_u=1:ricette_u=0;
    ui->cbVistaProgrammi->isChecked()?programmi_v=1:programmi_v=0;
    ui->cbUpdateProgrammi->isChecked()?programmi_u=1:programmi_u=0;
    ui->cbVistaProduzione->isChecked()?produzione_v=1:produzione_v=0;
    ui->cbUpdateProduzione->isChecked()?produzione_u=1:produzione_u=0;
    ui->cbVistaPackages->isChecked()?packages_v=1:packages_v=0;
    ui->cbUpdatePackages->isChecked()?packages_u=1:packages_u=0;
    ui->cbVistaCalcoloCosti->isChecked()?costi_v=1:costi_v=0;
    ui->cbUpdatePackages->isChecked()?costi_u=1:costi_u=0;
    ui->cbVistaAnalisi->isChecked()?analisi_v=1:analisi_v=0;
    ui->cbUpdateAnalisi->isChecked()?analisi_u=1:analisi_u=0;


    q.prepare(sql);
    q.bindValue(":utenti_v",utenti_v);
    q.bindValue(":utenti_u",utenti_u);
    q.bindValue(":anagrafica_v",anagrafica_v);
    q.bindValue(":anagrafica_u",anagrafica_u);
    q.bindValue(":notifiche_v",notifiche_v);
    q.bindValue(":notifiche_u",notifiche_u);
    q.bindValue(":contatti_v",contatti_v);
    q.bindValue(":contatti_u",contatti_u);
    q.bindValue(":lotti_v",lotti_v);
    q.bindValue(":lotti_u",lotti_u);
    q.bindValue(":operazioni_v",operazioni_v);
    q.bindValue(":operazioni_u",operazioni_u);
    q.bindValue(":prodotti_v",prodotti_v);
    q.bindValue(":prodotti_u",prodotti_u);
    q.bindValue(":schede_v",schede_v);
    q.bindValue(":schede_u",schede_u);
    q.bindValue(":ricette_v",ricette_v);
    q.bindValue(":ricette_u",ricette_u);
    q.bindValue(":programmi_v",programmi_v);
    q.bindValue(":programmi_u",programmi_u);
    q.bindValue(":produzione_v",produzione_v);
    q.bindValue(":produzione_u",produzione_u);
    q.bindValue(":packages_v",packages_v);
    q.bindValue(":packages_u",packages_u);
    q.bindValue(":costi_v",costi_v);
    q.bindValue(":costi_u",costi_u);
    q.bindValue(":analisi_v",analisi_v);
    q.bindValue(":analisi_u",analisi_u);
    q.bindValue(":note",ui->leDesc->text());
    q.bindValue(":id",gruppo);

    db.transaction();

    if(q.exec())
    {
        db.commit();
        QMessageBox::information(this,QApplication::applicationName(),"Permessi aggiornati",QMessageBox::Ok);
    }else{
        db.rollback();
    }


    int group=ui->cbGruppi->currentIndex();
    ui->cbGruppi->setModel(getGroups());
    ui->cbGruppi->setCurrentIndex(group);


    QSqlTableModel* groups_model=static_cast<QSqlTableModel*>(ui->cbGruppi->model());

    setup_permissions_ui(groups_model);

    emit permissions_updated();




}


void HGroups::on_pbSave_clicked()
{
   int gruppo=ui->cbGruppi->model()->index(ui->cbGruppi->currentIndex(),0).data(0).toInt();

    QSqlTableModel* groups_model=static_cast<QSqlTableModel*>(ui->cbGruppi->model());

    update_permissions(gruppo);


    groups_model->select();

    setup_permissions_ui(groups_model);

}



void HGroups::on_pbCreateGroup_clicked()
{
    HCreateGroup *f=new HCreateGroup(user,db);
    connect(f,SIGNAL(group_created()),this,SLOT(refreshGroupsModel()));
    f->show();
}

void HGroups::refreshGroupsModel()
{
    QSqlTableModel* groups_model=static_cast<QSqlTableModel*>(ui->cbGruppi->model());
    groups_model->select();
}


void HGroups::on_pbDelete_clicked()
{
    int gruppo=ui->cbGruppi->model()->index(ui->cbGruppi->currentIndex(),0).data(0).toInt();
    QSqlTableModel* groups_model=static_cast<QSqlTableModel*>(ui->cbGruppi->model());
    if(QMessageBox::question(this,QApplication::applicationName(),"Eliminare il gruppo "+ui->cbGruppi->currentText()+"?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {

        db.transaction();

        QSqlQuery q(db);
        QString sql="delete from gruppi where ID=:gr";
        q.prepare(sql);
        q.bindValue(":gr",gruppo);
        if(q.exec()){
            db.commit();
            groups_model->select();
        }else{
            db.rollback();
        };
    }
}

