#ifndef HUSER_H
#define HUSER_H
#include <QObject>
#include <QSqlQueryModel>
#include <QSqlDatabase>


class HUser : public QObject
{
    Q_OBJECT

public:
    explicit HUser(QSqlDatabase p_db=QSqlDatabase(),QObject *parent = 0);

private:

     int role;
     int id;
     bool active;
     bool update;
     bool updateana;
     QString nome;
     QString username;
     QSqlDatabase db;

     int utenti_v,utenti_u,anagrafica_v,anagrafica_u,notifiche_v,notifiche_u,contatti_v,contatti_u,lotti_v,lotti_u,operazioni_v,operazioni_u,prodotti_v,prodotti_u,schede_v,schede_u;
     int ricette_v,ricette_u,programmi_v,programmi_u,produzione_v,produzione_u,packages_v,packages_u,costi_v,costi_u,analisi_v,analisi_u;





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

    void get_permissions();
    void set_permissions(const QSqlQueryModel *p_perms);

    int get_utenti_v();
    int get_utenti_u();
    int get_anagrafica_v();
    int get_anagrafica_u();
    int get_notifiche_u();
    int get_notifiche_v();
    int get_contatti_u();
    int get_contatti_v();
    int get_lotti_v();
    int get_lotti_u();
    int get_operazioni_v();
    int get_operazioni_u();
    int get_prodotti_v();
    int get_prodotti_u();
    int get_schede_v();
    int get_schede_u();
    int get_ricette_v();
    int get_ricette_u();
    int get_programmi_v();
    int get_programmi_u();
    int get_produzione_v();
    int get_produzione_u();
    int get_packages_v();
    int get_packages_u();
    int get_costi_v();
    int get_costi_u();
    int get_analisi_v();
    int get_analisi_u();




};

#endif // HUSER_H
