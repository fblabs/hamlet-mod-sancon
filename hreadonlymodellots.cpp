#include "hreadonlymodellots.h"
#include <QSqlRelationalTableModel>
#include <QDebug>



HReadOnlyModelLots::HReadOnlyModelLots(QObject *parent,QSqlDatabase db ): QSqlRelationalTableModel(parent,db)
{

}

Qt::ItemFlags HReadOnlyModelLots::flags(const QModelIndex &index) const
{

   if (index.column()==0 || index.column()==1 || index.column()==2 || index.column()==3)
   {

       return QSqlRelationalTableModel::flags(index) & ~Qt::ItemIsEditable;

   }
   else if (index.column()==18)
   {
       return QSqlRelationalTableModel::flags(index) & Qt::ItemIsUserCheckable & Qt::ItemIsEditable & Qt::ItemIsEnabled;
   }
   else
   {
      return QSqlRelationalTableModel::flags(index);
   }


}
