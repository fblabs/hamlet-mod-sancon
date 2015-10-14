#include "hconnectioninfo.h"


HconnectionInfo::HconnectionInfo(QObject *parent) :
    QObject(parent)
{

   this->initDB();

}

QString HconnectionInfo::getDBname()
{
  return DBname;
}

 QString HconnectionInfo::getPort()
{
    return Port;
}

 QString HconnectionInfo::getIP()
{
    return IP;
}

 QString HconnectionInfo::getDefaultUsername()
{
    return DefaultUsername;
}

 QString HconnectionInfo::getDefaultPassword()
{
    return DefaultPassword;
}

QString HconnectionInfo::getHostName()
{

    return HostName;

}


void HconnectionInfo::setDBname(QString dbname)
{
    DBname = dbname;
}

 void HconnectionInfo::setPort(QString port)
{

    Port = port;
}

 void HconnectionInfo::setIP (QString ip)
{
    IP=ip;
}

 void HconnectionInfo::setDefaultUsername(QString duser)
{
   DefaultUsername = duser;
}


 void HconnectionInfo::setDefaultPassword(QString pwd)
 {
     DefaultPassword = pwd;
 }

 void HconnectionInfo::setHostName(QString hn)
 {
     HostName = hn;
 }

 QSqlDatabase HconnectionInfo::initDB()
 {
     db.setHostName("10.0.2.2");
     db.setDatabaseName("fbgmdb3");
     db.setPort(3306);
     db.setUserName("root");
     db.setPassword("joepass%2k13");



      return db;

 }

 QSqlDatabase HconnectionInfo::getDB()
 {
     return db;
 }
