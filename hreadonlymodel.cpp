#include "hreadonlymodel.h"
#include <QSqlRelationalTableModel>
#include <QSqlDatabase>
#include <QBrush>
// #include <QDebug>

hReadonlyModel::hReadonlyModel(QObject *parent,QSqlDatabase db ): QSqlRelationalTableModel(parent,db)
{

}

Qt::ItemFlags hReadonlyModel::flags(const QModelIndex &index) const
{
   if (index.column()==0 || index.column()==1 || index.column()==2 || index.column()==3 || index.column()==4)
   {
       return QSqlRelationalTableModel::flags(index) & ~Qt::ItemIsEditable;

   }
   return QSqlRelationalTableModel::flags(index);
}


QVariant hReadonlyModel::data( const QModelIndex & item, int role /*= Qt::DisplayRole */ ) const
{
   QVariant	retVal;
   int val;
   int col=item.column();
   int row=item.row();


   if (QSqlRelationalTableModel::data(this->index(row,5)).toString()=="Carico")
   {
       val=1;
   }
   else
   {
       val=2;
   }


   if(col==6 && role==Qt::ForegroundRole)
    {

       if(val==2)
        {
            retVal= QVariant::fromValue(QColor(Qt::red));
            return retVal;
        }
        else
        {
            retVal= QVariant::fromValue(QColor(Qt::blue));
            return retVal;
        }
    }else{

       retVal = QSqlRelationalTableModel::data(item,role);
   }




    return retVal;
}




