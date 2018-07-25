#ifndef HCONNECTIONINFO_H
#define HCONNECTIONINFO_H

#include <QObject>
#include <QtCore>
#include <QSqlDatabase>


class HconnectionInfo : public QObject
{
    Q_OBJECT

    QString DBname;
    QString Port;
    QString IP;
    QString DefaultUsername;
    QString DefaultPassword;
    QString HostName;

    QSqlDatabase db;

public:
    explicit HconnectionInfo(QObject *parent = 0);


signals:

public slots:

    QString getDBname();
    QString getPort();
   QString getIP();
    QString getDefaultUsername();
   QString getDefaultPassword();
   QString getHostName();

   void setDBname(QString dbname);
   void setPort(QString port);
   void setIP(QString ip);
   void setDefaultUsername(QString usr);
   void setDefaultPassword(QString pwd);
   void setHostName(QString hn);

   QSqlDatabase initDB();
   QSqlDatabase getDB();



};

#endif // HCONNECTIONINFO_H
