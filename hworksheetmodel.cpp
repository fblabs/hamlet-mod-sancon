#include "hworksheetmodel.h"
#include <QSqlTableModel>
#include <QModelIndex>
#include <QColor>

HWorkSheetModel::HWorkSheetModel(QObject *parent, QSqlDatabase db) : QSqlTableModel(parent,db)
{

}

Qt::ItemFlags HWorkSheetModel::flags(const QModelIndex & item ) const
{
    Qt::ItemFlags flags=QSqlTableModel::flags(item);




      /*if (item.column()==5)
       {

           flags |= Qt::ItemIsUserCheckable;
           flags |= Qt::ItemIsEnabled;

           return flags;
       }
       else
       {*/
          flags=QSqlTableModel::flags(item) & ~Qt::ItemIsEditable;
          return flags;



     return QSqlTableModel::flags(item) ;
}



QVariant HWorkSheetModel::data( const QModelIndex & item, int role /*= Qt::DisplayRole*/ ) const
{


  // QVariant value=QSqlRelationalTableModel::data(item);




   if (item.column()==5)
   {

         /*  if (role==Qt::CheckStateRole)
           return (QSqlTableModel::data(item).toInt() > 0) ? Qt::Checked :Qt::Unchecked;
           if (role==Qt::DisplayRole)
           return QVariant();*/

           if (role == Qt::CheckStateRole)
               {
                 int checked = QSqlTableModel::data(item).toInt();

                 if (checked)
                   {
                     return Qt::Checked;
                   }
                 else
                   {
                     return Qt::Unchecked;
                   }
               }

           if (role == Qt::DisplayRole)
           {
                 const QString original = QSqlTableModel::data(item, Qt::DisplayRole).toString();
                 QString shownText = original;
                 return shownText;
           }

   }



   return QSqlTableModel::data(item,role);



}

bool HWorkSheetModel::setData(const QModelIndex &index, const QVariant &value, int role)
{





        if (index.column()==5)
        {



            if (role==Qt::CheckStateRole )
                return (QSqlTableModel::data(index).toInt() > 0) ? Qt::Checked :Qt::Unchecked;
            if (role==Qt::ItemDataRole::UserRole)
                return QSqlTableModel::data(index,role).toInt();

        }



        QSqlTableModel::setData(index,value,role);
        return true;


 }




