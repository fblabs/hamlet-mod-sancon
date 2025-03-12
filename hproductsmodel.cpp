#include "hproductsmodel.h"
#include <QSqlRelationalTableModel>
#include <QDebug>

HProductsModel::HProductsModel(QObject *parent,QSqlDatabase db ): QSqlRelationalTableModel(parent,db)
{

}



Qt::ItemFlags HProductsModel::flags(const QModelIndex & item ) const
{

    //// qDebug()<<item.column();

    Qt::ItemFlags flags=QSqlRelationalTableModel::flags(item);


      /* if (item.column() != 3)
       {

          return QSqlRelationalTableModel::flags(item) & ~Qt::ItemIsEditable;

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
          return QSqlRelationalTableModel::flags(item)  ;

       }


     return QSqlRelationalTableModel::flags(item) ;
}

QVariant HProductsModel::data( const QModelIndex & item, int role /*= Qt::DisplayRole*/ ) const
{

     if (item.column()==3 || item.column()==4 ||item.column()==5 || item.column()==8)
    {


        QVariant value=QSqlRelationalTableModel::data(item);
        if (role==Qt::CheckStateRole)
            return (QSqlRelationalTableModel::data(item).toInt() != 0) ? Qt::Checked :Qt::Unchecked;
        else
            return QVariant();


    }

   return QSqlRelationalTableModel::data(item,role);
}

bool HProductsModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
     QSqlRelationalTableModel::setData(index,value,role);
     return true;
}
