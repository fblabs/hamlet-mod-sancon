#include "hquerymodel_lotti.h"
#include <QColor>

HQueryModel_lotti::HQueryModel_lotti(QObject *parent)
    : QSqlQueryModel{parent}
{

}

QVariant HQueryModel_lotti::data(const QModelIndex &index, int role) const
{

    const QModelIndex ix=index.model()->index(index.row(),8);


    //  bool ok=false;

    if(role==Qt::BackgroundRole && ix.data(0).toInt()<0)
    {

        return QColor(255,150,150);


    }

    if(role==Qt::BackgroundRole &&ix.data().toInt() >0 &&  ix.data(0).toInt()<500)
    {
        return QColor(Qt::lightGray);
    }

   /* if(role==Qt::ForegroundRole &&ix.data().toInt() <0 &&  ix.data(0).toInt()<0)
    {
        return QColor(QColor(255,255,255));
    }*/


    return QSqlQueryModel::data(index, role);


}
