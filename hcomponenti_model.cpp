
#include "hcomponenti_model.h"

Qt::ItemFlags HComponenti_model::flags(const QModelIndex &index) const
{

    if (index.column()==2 ||index.column()==3)
    {
        return Qt::ItemIsEnabled|Qt::ItemIsSelectable| Qt::ItemIsEditable;
    }

    return Qt::ItemIsEnabled|Qt::ItemIsSelectable;

}

QVariant HComponenti_model::data(const QModelIndex &item, int role) const
{
    /* if(item.column() ==1 || item.column()==2)
   {
     return QVariant();
   }*/
    return QStandardItemModel::data(item,role);
}

