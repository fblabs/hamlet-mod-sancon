#ifndef HCALCOLO_COSTI_ITEM_MODEL_H
#define HCALCOLO_COSTI_ITEM_MODEL_H

#include <QStandardItemModel>
#include <QObject>

class HCalcolo_costi_item_model : public QStandardItemModel
{
    Q_OBJECT
public:
    explicit HCalcolo_costi_item_model(QObject *parent = nullptr);
    QVariant data( const QModelIndex & item, int role /*= Qt::DisplayRole */ ) const;
    bool setData( const QModelIndex &index, const QVariant &value, int role = Qt::EditRole );
    Qt::ItemFlags flags(const QModelIndex &index) const;
};


#endif // HCALCOLO_COSTI_ITEM_MODEL_H
