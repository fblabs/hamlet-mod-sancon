#include "hquerymodel_lastlots.h"
#include <QColor>

HQueryModel_lastlots::HQueryModel_lastlots(QObject *parent)
    : QSqlQueryModel{parent}
{

}

QVariant HQueryModel_lastlots::data(const QModelIndex &index, int role) const
{
    const QModelIndex ix=index.model()->index(index.row(),4);


    //  bool ok=false;

    if(role==Qt::BackgroundRole && ix.data(0).toInt()<0)
    {

        return QColor(QColor(255,150,150));


    }


    if(role==Qt::ForegroundRole &&ix.data().toInt() <0)
    {
        return QColor(Qt::black);
    }


    return QSqlQueryModel::data(index, role);
}

/*QVariant ::data(const QModelIndex &index, int role) const
{
    const QModelIndex ix=index.model()->index(index.row(),4);


    //  bool ok=false;

    if(role==Qt::BackgroundRole && ix.data(0).toInt()<0)
    {

        return QColor(Qt::red);


    }


    if(role==Qt::ForegroundRole &&ix.data().toInt() <0)
    {
        return QColor(QColor(255,255,255));
    }


    return QSqlQueryModel::data(index, role);
}
*/
