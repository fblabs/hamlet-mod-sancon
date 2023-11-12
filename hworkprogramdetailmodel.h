#ifndef HWORKPROGRAMDETAILMODEL_H
#define HWORKPROGRAMDETAILMODEL_H

#include <QSqlQueryModel>
#include <QObject>

class HWorkProgramDetailModel : public QSqlQueryModel
{
    Q_OBJECT
public:
    explicit HWorkProgramDetailModel(QObject *parent = nullptr);
    Qt::ItemFlags flags(const QModelIndex &item) const;
    QVariant data( const QModelIndex & item, int role /*= Qt::DisplayRole */ ) const;
    bool setData( const QModelIndex &index, const QVariant &value, int role = Qt::EditRole );
};

#endif // HWORKPROGRAMDETAILMODEL_H
