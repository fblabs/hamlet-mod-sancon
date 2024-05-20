#include "hblend.h"
#include "huser.h"
#include <QSqlDatabase>
#include <QObject>
#include <QDate>

HBlend::HBlend(int p_id_riga_produzione,QString prodotto, HUser *p_user, QObject *parent)
    : QObject{parent}
{

    m_id=0;
    m_date=QDate::currentDate();
    m_id_riga_produzione=p_id_riga_produzione;
    m_line=QString();
    m_operator=QString();
    m_id_prodotto=-1;
    m_prodotto=
    m_blender=QString();
    m_pumps=QString();
    m_tank=QString();
    m_avanzi=QString();
    b_exp=false;
    m_note=QString();




}

HBlend::~HBlend()
{

}



void HBlend::set_ID(const int p_id)
{
    m_id=p_id;
}

void HBlend::setDate(QDate p_data)
{
    m_date=p_data;
}

void HBlend::setIDRiga(const int p_riga)
{
    m_id_riga_produzione=p_riga;
}

void HBlend::setLinea(QString p_linea)
{
    m_line=p_linea;
}

void HBlend::setOperator(QString p_operator)
{
    m_operator=p_operator;
}

void HBlend::setIDProdotto(int p_id)
{
    m_id_prodotto=p_id;
}

void HBlend::setProdotto(QString p_prodotto)
{
    m_prodotto=p_prodotto;
}

void HBlend::setBlender(QString p_blender)
{
    m_blender =p_blender;
}

void HBlend::setPompe(QString p_pompe)
{
    m_pumps=p_pompe;
}

void HBlend::setVasche(QString p_vasche)
{
    m_tank=p_vasche;
}

void HBlend::setAvanzi(QString p_avanzi)
{
    m_avanzi=p_avanzi;
}

void HBlend::setNote(QString p_note)
{
    m_note=p_note;
}

void HBlend::setExported(bool p_exp)
{
    b_exp=p_exp;
}

void HBlend::setAmount(QString p_amount)
{
    m_amount=p_amount;
}

void HBlend::setState(int p_value)
{
    m_state=p_value;
}

int HBlend::get_ID()
{
    return m_id;
}

QDate HBlend::getDate()
{
    return m_date;
}


int HBlend::getIDRiga()
{
    return m_id_riga_produzione;
}


QString HBlend::getLinea()
{
    return m_line;
}

QString HBlend::getOperator()
{
    return m_operator;
}

int HBlend::getIDProdotto()
{
    return m_id_prodotto;
}

QString HBlend::getBlender()
{
    return m_blender;
}

QString HBlend::getPompe()
{
    return m_pumps;
}

QString HBlend::getVasche()
{
    return m_tank;
}

QString HBlend::getAvanzi()
{
    return m_avanzi;
}

QString HBlend::getNote()
{
    return m_note;
}

QString HBlend::getProdotto()
{
    return m_prodotto;
}

QString HBlend::getAmount()
{
    return m_amount;
}

int HBlend::getState()
{
    return m_state;
}


bool HBlend::getExported()
{
    return b_exp;
}


