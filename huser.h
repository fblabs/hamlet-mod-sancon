#ifndef HUSER_H
#define HUSER_H

#include <QObject>
#include <QSqlDatabase>

class HUser : public QObject
{
    Q_OBJECT

public:
    explicit HUser(QObject *parent = 0);

private:
     QSqlDatabase db;
     int role;
     int id;
     bool active;
     bool update;
     bool updateana;
     QString username;
     QString sConn;


signals:

public slots:
    void setUserName(QString uname);
    void setRole (int role);
    int getRole();
    void setActive (bool isActive);
    void setID(int ID);
    int getID();
    bool getCanUpdate();
    void setCanUpdate(bool upd);
    void init(QString conn);
    void setCanUpdateAnag(bool);
    bool getCanUpdateAnag();
    QString getUsername();


};

#endif // HUSER_H
