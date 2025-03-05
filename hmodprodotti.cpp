#include "hmodprodotti.h"

HModProdotti::HModProdotti(QObject *parent)
    : QSqlQueryModel{parent}
{

}


Qt::ItemFlags HModProdotti::flags(const QModelIndex & item ) const
{

    //// qDebug()<<item.column();

    Qt::ItemFlags flags=QSqlQueryModel::flags(item);


    /* if (item.column() != 3)
       {

          return QSqlQueryModel::flags(item) & ~Qt::ItemIsEditable;

       }
       else */if (item.column()==3)
    {
        //return flags | Qt::ItemIsEnabled|Qt::ItemIsEditable | Qt::ItemIsUserCheckable;

        flags |= Qt::ItemIsUserCheckable;
        flags |= Qt::ItemIsEditable;
        flags |= Qt::ItemIsEnabled;

        return flags;
    }
    else if (item.column()==4)
    {
        //return flags | Qt::ItemIsEnabled|Qt::ItemIsEditable | Qt::ItemIsUserCheckable;

        flags |= Qt::ItemIsUserCheckable;
        flags |= Qt::ItemIsEditable;
        flags |= Qt::ItemIsEnabled;

        return flags;
    }
    else if (item.column()==5)
    {
        //return flags | Qt::ItemIsEnabled|Qt::ItemIsEditable | Qt::ItemIsUserCheckable;
        flags |= Qt::ItemIsUserCheckable;
        flags |= Qt::ItemIsEditable;
        flags |= Qt::ItemIsEnabled;

        return flags;
    }
     else if (item.column()==8)
    {
        //return flags | Qt::ItemIsEnabled|Qt::ItemIsEditable | Qt::ItemIsUserCheckable;
        flags |= Qt::ItemIsUserCheckable;
        flags |= Qt::ItemIsEditable;
        flags |= Qt::ItemIsEnabled;

        return flags;
    }
    else
    {
        return QSqlQueryModel::flags(item)  ;

    }


    return QSqlQueryModel::flags(item) ;
}

QVariant HModProdotti::data( const QModelIndex & item, int role /*= Qt::DisplayRole*/ ) const
{

    if (item.column()==3 || item.column()==4 ||item.column()==5  || item.column()==8)
    {


        QVariant value=QSqlQueryModel::data(item);
        if (role==Qt::CheckStateRole)
            return (QSqlQueryModel::data(item).toInt() != 0) ? Qt::Checked :Qt::Unchecked;
        else
            return QVariant();


    }

    return QSqlQueryModel::data(item,role);
}

bool HModProdotti::setData(const QModelIndex &index, const QVariant &value, int role)
{
    QSqlQueryModel::setData(index,value,role);
    return true;
}
