#include "hreadonlymodellots.h"
#include <QSqlRelationalTableModel>
#include <QColor>
#include <QDebug>



HReadOnlyModelLots::HReadOnlyModelLots(QObject *parent,QSqlDatabase db ): QSqlRelationalTableModel(parent,db)
{

}

/*Qt::ItemFlags HReadOnlyModelLots::flags(const QModelIndex &index) const
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




}*/

//QVariant HReadOnlyModelLots::data( const QModelIndex & item, int role /*= Qt::DisplayRole */ ) const
//{
  /*  QVariant	retVal;
 //   qDebug()<<item.data(Qt::DisplayRole).toString();
 //   QVariant val=item.data();
   int val;
   int col=item.column();
   int row=item.row();



   if (col==5)
   {
     if (QSqlRelationalTableModel::data(item).toString()=="Carico")
     {
         val=1;
     }
     else
     {
         val=2;
     }

   }

   if(col==5 && role==Qt::ForegroundRole)
    {
        if(val==2)
        {
        retVal= QVariant::fromValue(QColor(Qt::red));
        }
        else
        {
            retVal= QVariant::fromValue(QColor(Qt::green));
        }

    }
    else
    {
        retVal = QSqlRelationalTableModel::data(item,role);

    }



    return retVal;*/
//}
