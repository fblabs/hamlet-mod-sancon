#include "hreadonlymodelnew.h"
#include <QSqlRelationalTableModel>
#include <QSqlDatabase>
#include <QIcon>
// #include <QDebug>

HReadOnlyModelNew::HReadOnlyModelNew(QObject *parent,QSqlDatabase db ): QSqlRelationalTableModel(parent,db)
{

}

Qt::ItemFlags HReadOnlyModelNew::flags(const QModelIndex &index) const
{

       return QSqlRelationalTableModel::flags(index) & ~Qt::ItemIsEditable;


}

QVariant HReadOnlyModelNew::data( const QModelIndex & item, int role /*= Qt::DisplayRole */ ) const
{

/*  int row=item.row();

  int iAzione= QSqlRelationalTableModel::data(this->index(row,10)).toInt();
  int tipo;

  switch(iAzione)
  { case 1: //carico
      break;

    case 2:

      break;
  }
  if (item.column()==0 && iAzione==1 && role==Qt::DecorationRole)
  {
      return QIcon(":/Resources/Box.PNG");
  }
  else if (item.column()==0 && iAzione==2  && role==Qt::DecorationRole)
  {
      return QIcon(":/Resources/Actions-configure-icon.png");
  }

// qDebug()<<iAzione*/
   return QSqlRelationalTableModel::data(item,role);

}

