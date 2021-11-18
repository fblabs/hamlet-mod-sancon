#ifndef HWORKSHEETMODEL_H
#define HWORKSHEETMODEL_H

#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QObject>

class HWorkSheetModel : public QSqlTableModel
{
    Q_OBJECT
public:
    explicit HWorkSheetModel(QObject *parent = nullptr,QSqlDatabase pdb=QSqlDatabase());
    Qt::ItemFlags flags(const QModelIndex &item) const;
    QVariant data( const QModelIndex & item, int role /*= Qt::DisplayRole */ ) const;
    bool setData( const QModelIndex &index, const QVariant &value, int role = Qt::EditRole );
};

#endif // HWORKSHEETMODEL_H
