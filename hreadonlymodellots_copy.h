#ifndef HREADONLYMODELLOTS_H
#define HREADONLYMODELLOTS_H

#include <QObject>
#include <QSqlRelationalTableModel>
#include <QSqlDatabase>
#include <QModelIndex>


class HReadOnlyModelLots : public QSqlRelationalTableModel
{
    Q_OBJECT
public:
    explicit HReadOnlyModelLots(QObject *parent=0, QSqlDatabase db = QSqlDatabase());
    Qt::ItemFlags flags(const QModelIndex &item) const;
    QVariant data( const QModelIndex & item, int role /*= Qt::DisplayRole */ ) const;
    bool setData( const QModelIndex &index, const QVariant &value, int role = Qt::EditRole );

//signals:

//public slots:

};

#endif // HREADONLYMODELLOTS_H
