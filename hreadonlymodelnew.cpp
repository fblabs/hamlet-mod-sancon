#include "hreadonlymodelnew.h"
#include <QSqlRelationalTableModel>
#include <QSqlDatabase>

HReadOnlyModelNew::HReadOnlyModelNew(QObject *parent,QSqlDatabase db ): QSqlRelationalTableModel(parent,db)
{

}

Qt::ItemFlags HReadOnlyModelNew::flags(const QModelIndex &index) const
{

       return QSqlRelationalTableModel::flags(index) & ~Qt::ItemIsEditable;


}
