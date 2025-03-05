#include "hwpmod.h"
#include <QColor>
#include <Qdebug>

HWpMod::HWpMod(QObject *parent)
    : QStandardItemModel{parent}
{

}

Qt::ItemFlags HWpMod::flags(const QModelIndex &item) const
{
    Qt::ItemFlags flags=QStandardItemModel::flags(item);

    if (item.column ()==2)
    {
        flags |= Qt::ItemIsEditable;
        return flags;

    }
    else if (item.column()==15 || item.column() ==16 || item.column()==24)
    {

       // flags = ~Qt::ItemIsEditable;
        flags |= Qt::ItemIsUserCheckable;
        flags |= Qt::ItemIsEnabled;




        return flags;
    }
    else
    {
        flags=QStandardItemModel::flags(item) & ~Qt::ItemIsEditable;
        return flags;
    }


    return QStandardItemModel::flags(item) ;
}

QVariant HWpMod::data(const QModelIndex &item, int role) const
{
    if (item.column()==15  || item.column()==16 || item.column()==24)
    {





        if (role==Qt::CheckStateRole)
            return (QStandardItemModel::data(item).toInt() != 0) ? Qt::Checked :Qt::Unchecked;
        else
            return QVariant();




    }
    if (role==Qt::TextColorRole && item.column()==17)
    {
        return QVariant(QColor(Qt::red));
    }
    if (role==Qt::BackgroundColorRole )
    {
        QColor backcolor(230,230,230);
        if(item.row()%2)
        {
            return backcolor;
        }

    }




    return QStandardItemModel::data(item,role);
}

bool HWpMod::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (index.column()==15 || index.column()==16)
    {



        if (role==Qt::CheckStateRole )
            return (QStandardItemModel::data(index).toInt() != 0) ? Qt::Checked : Qt::Unchecked;
        else
            return true;

        return QStandardItemModel::data(index,role).toBool();




    }



    QStandardItemModel::setData(index,value,role);
    return true;
}





