#include "hreadonlymodelnew.h"
#include <QSqlRelationalTableModel>
#include <QSqlDatabase>
#include <QIcon>

HReadOnlyModelNew::HReadOnlyModelNew(QObject *parent,QSqlDatabase db ): QSqlRelationalTableModel(parent,db)
{

}

Qt::ItemFlags HReadOnlyModelNew::flags(const QModelIndex &index) const
{

       return QSqlRelationalTableModel::flags(index) & ~Qt::ItemIsEditable;


}

QVariant HReadOnlyModelNew::data( const QModelIndex & item, int role /*= Qt::DisplayRole */ ) const
{

  int row=item.row();

  QString sTipoLotto= QSqlRelationalTableModel::data(this->index(row,10)).toString();
  int tipo;

  if (sTipoLotto == "MATERIE PRIME")
      tipo=1;
  else if (sTipoLotto == "SEMILAVORATO")
      tipo=2;
  else if (sTipoLotto =="PRODOTTO FINITO")
      tipo=3;
  else if (sTipoLotto == "PACKAGE")
      tipo=4;

  if (item.column()==1 && tipo==1 && role==Qt::DecorationRole)
  {
      return QIcon(":/Resources/Box.PNG");
  }
  if (item.column()==1 && tipo==2 && role==Qt::DecorationRole)
  {
      return QIcon(":/Resources/Actions-configure-icon.png");
  }
  if (item.column()==1 && tipo==3 && role==Qt::DecorationRole)
  {
      return QIcon(":/Resources/Gears.PNG");
  }
  if (item.column()==1 && tipo==4 && role==Qt::DecorationRole)
  {
      return QIcon(":/Resources/fork-1-icon.png");
  }

   return QSqlRelationalTableModel::data(item,role);

}

