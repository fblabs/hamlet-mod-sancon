#include "huser.h"
#include <QSettings>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlQuery>

HUser::HUser(QSqlDatabase p_db,QObject *parent) :
    QObject(parent)
{
    role=-1;
    username="";
    nome="";
    id=-1;
    //DEPRECATED
    update=false;
    updateana=false;

    db=p_db;


}


void HUser::setNome(QString pnome)
{
    nome=pnome;
}


void HUser::setUserName(QString uname)
{
    username = uname;
}

void HUser::setRole(int prole=-1)
{
    role = prole;
}

int HUser::getRole()
{
    return role;
}


void HUser::setActive(bool its)
{
    active = its;

}

void HUser::setID(int ID)
{
    id = ID;
}

int HUser::getID()
{
    return id;
}

bool HUser::getCanUpdate()
{
    return update;
}

QString HUser::getUsername()
{
    return username;
}

void HUser::setCanUpdate(bool upd)
{
    update=upd;

}

void HUser::setCanUpdateAnag(bool upd)
{
    updateana=upd;
}

bool HUser::getCanUpdateAnag()
{
    return updateana;
}

QString HUser::getName()
{
    return nome;
}

void HUser::get_permissions()
{
    int role=this->getRole();

    QSqlQuery q(db);
    QString sql="SELECT * from gruppi where ID=:role";
    QSqlQueryModel* permissions_mod=new QSqlQueryModel();
    q.prepare(sql);
    q.bindValue(":role",role);
    q.exec();
    permissions_mod->setQuery(q);

    set_permissions(permissions_mod);
}

void HUser::set_permissions(const QSqlQueryModel *p_perms)
{

    QSqlRecord perm_rec=p_perms->record(0);


    utenti_v=perm_rec.value(4).toInt();
    utenti_u=perm_rec.value(5).toInt();
    anagrafica_v=perm_rec.value(6).toInt();
    anagrafica_u=perm_rec.value(7).toInt();
    notifiche_v=perm_rec.value(8).toInt();
    notifiche_u=perm_rec.value(9).toInt();
    contatti_v==perm_rec.value(10).toInt();
    contatti_u=perm_rec.value(11).toInt();
    lotti_v=perm_rec.value(12).toInt();
    lotti_u=perm_rec.value(13).toInt();
    operazioni_v==perm_rec.value(14).toInt();
    operazioni_u=perm_rec.value(15).toInt();
    prodotti_v=perm_rec.value(16).toInt();
    prodotti_u=perm_rec.value(17).toInt();
    schede_v=perm_rec.value(18).toInt();
    schede_u=perm_rec.value(19).toInt();
    ricette_v=perm_rec.value(20).toInt();
    ricette_u=perm_rec.value(21).toInt();
    programmi_v=perm_rec.value(22).toInt();
    programmi_u=perm_rec.value(23).toInt();
    produzione_v=perm_rec.value(24).toInt();
    produzione_u=perm_rec.value(25).toInt();
    packages_v=perm_rec.value(26).toInt();
    packages_u=perm_rec.value(27).toInt();
    costi_v=perm_rec.value(28).toInt();
    costi_u=perm_rec.value(29).toInt();
    analisi_v=perm_rec.value(30).toInt();
    analisi_u=perm_rec.value(31).toInt();

}

int HUser::get_utenti_v()
{
    return utenti_v;
}

int HUser::get_utenti_u()
{
    return utenti_u;
}

int HUser::get_anagrafica_v()
{
    return anagrafica_v;
}

int HUser::get_anagrafica_u()
{
    return anagrafica_u;
}

int HUser::get_notifiche_u()
{
    return notifiche_u;
}

int HUser::get_notifiche_v()
{
    return notifiche_v;
}

int HUser::get_contatti_u()
{
    return contatti_u;
}

int HUser::get_contatti_v()
{
    return contatti_v;
}

int HUser::get_lotti_v()
{
    return lotti_v;
}

int HUser::get_lotti_u()
{
   return lotti_u;
}

int HUser::get_operazioni_v()
{
    return operazioni_v;
}

int HUser::get_operazioni_u()
{
    return operazioni_u;
}

int HUser::get_prodotti_v()
{
    return prodotti_v;
}

int HUser::get_prodotti_u()
{
    return prodotti_u;
}

int HUser::get_schede_v()
{
    return schede_v;
}

int HUser::get_schede_u()
{
    return schede_u;
}

int HUser::get_ricette_v()
{
     return ricette_v;
}

int HUser::get_ricette_u()
{
     return ricette_u;
}

int HUser::get_programmi_v()
{
   return programmi_v;
}

int HUser::get_programmi_u()
{
    return programmi_u;
}

int HUser::get_produzione_v()
{
    return produzione_v;
}

int HUser::get_produzione_u()
{
    return produzione_u;
}

int HUser::get_packages_v()
{
    return packages_v;
}

int HUser::get_packages_u()
{
    return packages_u;
}

int HUser::get_costi_v()
{
   return costi_v;
}

int HUser::get_costi_u()
{
    return costi_u;
}

int HUser::get_analisi_v()
{
    return analisi_v;
}

int HUser::get_analisi_u()
{
    return analisi_u;
}




