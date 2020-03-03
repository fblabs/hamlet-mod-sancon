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



   if (item.column() == 3 || item.column() == 4 || item.column ()==13 || item.column()==15)
   {

      return QSqlRelationalTableModel::flags(item) & ~Qt::ItemIsEditable;

   }
   else if (item.column()==12 || item.column() ==13)
   {

       flags |= Qt::ItemIsUserCheckable;
       flags |= Qt::ItemIsEnabled;
       flags |= Qt::ItemIsEditable;



       return flags;
   }
      else
   {
      return QSqlRelationalTableModel::flags(item)  ;
   }


 return QSqlRelationalTableModel::flags(item) ;

}

QVariant HWorkProgressModel::data( const QModelIndex & item, int role /*= Qt::DisplayRole*/ ) const
{


    int row=item.row();

    QVariant value=QSqlRelationalTableModel::data(item);




   if (item.column()==12  || item.column()==13)
   {





           if (role==Qt::CheckStateRole)
               return (QSqlRelationalTableModel::data(item).toInt() != 0) ? Qt::Checked :Qt::Unchecked;
           else
               return QVariant();




   }
   else if (role==Qt::TextColorRole && item.column()==14)
   {
      return QVariant(QColor(Qt::red));
   }




  return QSqlRelationalTableModel::data(item,role);


}

bool HWorkProgressModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (index.column()==12 || index.column()==13)
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
