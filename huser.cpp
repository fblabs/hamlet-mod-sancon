#include "huser.h"
#include <QSettings>
#include <QSqlDatabase>

HUser::HUser(QObject *parent) :
    QObject(parent)
{
    role=-1;
    username="";
    nome="";
    id=-1;
    update=false;
    updateana=false;
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


