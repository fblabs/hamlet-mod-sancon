#ifndef HBLEND_H
#define HBLEND_H

#include <QObject>
#include <QDate>
#include "huser.h"

class HBlend : public QObject
{
    Q_OBJECT
public:
    explicit HBlend(int p_id_riga_produzione=-1,const QString s_prodotto=QString(), HUser *p_user=new HUser() , QObject *parent = nullptr);
    ~HBlend();

private:
    int m_id,m_id_riga_produzione=-1,m_id_prodotto=-1,m_state;
    QString m_line,m_operator,m_blender,m_pumps,m_tank,m_avanzi,m_note,m_prodotto,m_amount=QString();
    QDate m_date=QDate::currentDate();
    bool b_exp=false;
public slots:
    void set_ID(const int p_id);
    void setDate(QDate p_data=QDate::currentDate());
    void setIDRiga(const int p_riga);
    void setLinea(QString p_linea=QString());
    void setOperator(QString p_operator);
    void setIDProdotto(int p_id=-1);
    void setProdotto(QString p_prodotto=QString());
    void setBlender(QString p_blender=QString());
    void setPompe(QString p_pompe=QString());
    void setVasche(QString p_vasche=QString());
    void setAvanzi(QString p_avanzi=QString());
    void setNote(QString p_note=QString());
    void setExported(bool p_exp);
    void setAmount(QString p_amount=QString());
    void setState(int p_value=0);

    int get_ID();
    QDate getDate();
    int getIDRiga();
    QString getLinea();
    QString getOperator();
    int getIDProdotto();
    QString getBlender();
    QString getPompe();
    QString getVasche();
    QString getAvanzi();
    QString getNote();
    QString getProdotto();
    bool getExported();
    QString getAmount();
    int getState();



signals:
};


#endif // HBLEND_H
