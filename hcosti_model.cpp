#include "hcosti_model.h"


Qt::ItemFlags HCosti_model::flags(const QModelIndex &index) const
{

   if (index.column() ==1 || index.column()==2)
   {
     return Qt::ItemIsEnabled|Qt::ItemIsSelectable| Qt::ItemIsEditable;
   }

   return Qt::ItemIsEnabled|Qt::ItemIsSelectable;

}

QVariant HCosti_model::data(const QModelIndex &item, int role) const
{
  /* if(item.column() ==1 || item.column()==2)
   {
     return QVariant();
   }*/
   return QStandardItemModel::data(item,role);
}
