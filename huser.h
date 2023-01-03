#ifndef HUSER_H
#define HUSER_H
#include <QObject>


class HUser : public QObject
{
    Q_OBJECT

public:
    explicit HUser(QObject *parent = 0);

private:

     int role;
     int id;
     bool active;
     bool update;
     bool updateana;
     QString nome;
     QString username;



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
    void setCanUpdateAnag(bool);
    bool getCanUpdateAnag();
    QString getUsername();
    void setNome(QString pnome);
    QString getName();


};

#endif // HUSER_H
