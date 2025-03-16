#ifndef HMODPRODOTTI_H
#define HMODPRODOTTI_H

#include <QSqlQueryModel>
#include <QObject>

class HModProdotti : public QSqlQueryModel
{
    Q_OBJECT
public:
    explicit HModProdotti(QObject *parent = nullptr);
    Qt::ItemFlags flags(const QModelIndex &item) const;
    QVariant data( const QModelIndex & item, int role /*= Qt::DisplayRole */ ) const;
    bool setData( const QModelIndex &index, const QVariant &value, int role = Qt::EditRole );
};

#endif // HMODPRODOTTI_H
