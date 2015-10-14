#include "hreadonlymodel.h"
#include <QSqlRelationalTableModel>
#include <QSqlDatabase>

hReadonlyModel::hReadonlyModel(QObject *parent,QSqlDatabase db ): QSqlRelationalTableModel(parent,db)
{

}

Qt::ItemFlags hReadonlyModel::flags(const QModelIndex &index) const
{
   if (index.column()==0 || index.column()==1 || index.column()==2 || index.column()==4)
   {
       return QSqlRelationalTableModel::flags(index) & ~Qt::ItemIsEditable;

   }
   return QSqlRelationalTableModel::flags(index);
}


