#include "huser.h"
//#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

HUser::HUser(QObject *parent) :
    QObject(parent)
{

}

void HUser::init(QString conn)
{
    role=-1;
    username="";
    id=-1;
    sConn=conn;
    update=false;
    updateana=false;
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
