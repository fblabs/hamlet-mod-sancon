#ifndef HPRODUCTSMODEL_H
#define HPRODUCTSMODEL_H

#include <QObject>
#include <QSqlQueryModel>
#include <QSqlDatabase>
class HProductsModel : public QSqlQueryModel
{

public:
    explicit HProductsModel(QObject *parent=nullptr);
    Qt::ItemFlags flags(const QModelIndex &item) const;
    QVariant data( const QModelIndex & item, int role /*= Qt::DisplayRole */ ) const;
    bool setData( const QModelIndex &index, const QVariant &value, int role = Qt::EditRole );
};

#endif // HPRODUCTSMODEL_H
