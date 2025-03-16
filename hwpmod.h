#ifndef HWPMOD_H
#define HWPMOD_H

#include <QObject>
#include <QStandardItemModel>


class HWpMod : public QStandardItemModel
{
    Q_OBJECT
public:
    explicit HWpMod(QObject *parent = nullptr);
    Qt::ItemFlags flags(const QModelIndex &item) const;
    QVariant data( const QModelIndex & item, int role /*= Qt::DisplayRole */ ) const;
    bool setData( const QModelIndex &index, const QVariant &value, int role = Qt::EditRole );
   // bool dropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent);







};

#endif // HWPMOD_H
