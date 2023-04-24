#include "hcalcolo_costi_item_model.h"

HCalcolo_costi_item_model::HCalcolo_costi_item_model(QObject *parent)
    : QStandardItemModel{parent}
{

}

QVariant HCalcolo_costi_item_model::data(const QModelIndex &item, int role) const
{
    if(item.column() ==1 || item.column()==2)
    {
        return QVariant();
    }
    return QStandardItemModel::data(item,role);
}

bool HCalcolo_costi_item_model::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (index.column()!=1 || index.column()!=2)
    {

        return false;

    }



    QStandardItemModel::setData(index,value,role);
    return true;
}

Qt::ItemFlags HCalcolo_costi_item_model::flags(const QModelIndex &index) const
{
    if (index.column() ==1 || index.column()==2)
    {
        return Qt::ItemIsEnabled|Qt::ItemIsSelectable| Qt::ItemIsEditable;
    }

    return Qt::ItemIsEnabled|Qt::ItemIsSelectable;
}
