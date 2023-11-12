#include "hworkprogressmodel.h"
#include <QSqlRelationalTableModel>
#include <QDebug>
#include <QColor>



HWorkProgressModel::HWorkProgressModel(QObject *parent, QSqlDatabase db): QSqlRelationalTableModel(parent,db)
{

}

Qt::ItemFlags HWorkProgressModel::flags(const QModelIndex & item ) const
{


Qt::ItemFlags flags=QSqlRelationalTableModel::flags(item);



   if (item.column ()==2)
   {
      flags |= Qt::ItemIsEditable;
      return flags;

   }
   else if (item.column()==15 || item.column() ==16)
   {

       flags |= Qt::ItemIsUserCheckable;
       flags |= Qt::ItemIsEnabled;




       return flags;
   }
   else
   {
      flags=QSqlRelationalTableModel::flags(item) & ~Qt::ItemIsEditable;
      return flags;
   }


 return QSqlRelationalTableModel::flags(item) ;

}

QVariant HWorkProgressModel::data( const QModelIndex & item, int role /*= Qt::DisplayRole*/ ) const
{


   if (item.column()==15  || item.column()==16)
   {





           if (role==Qt::CheckStateRole)
               return (QSqlRelationalTableModel::data(item).toInt() != 0) ? Qt::Checked :Qt::Unchecked;
           else
               return QVariant();




   }
   else if (role==Qt::TextColorRole && item.column()==17)
   {
      return QVariant(QColor(Qt::red));
   }
   else if (role==Qt::BackgroundColorRole)
   {
       QColor backcolor(230,230,230);
       if(item.row()%2)
       {
           return backcolor;
       }

   }




  return QSqlRelationalTableModel::data(item,role);


}

bool HWorkProgressModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (index.column()==15 || index.column()==16)
    {



        if (role==Qt::CheckStateRole )
            return (QSqlRelationalTableModel::data(index).toInt() != 0) ? Qt::Checked :Qt::Unchecked;
        else
            return true;

         return QSqlRelationalTableModel::data(index,role).toBool();

    }



    QSqlRelationalTableModel::setData(index,value,role);
    return true;
}
