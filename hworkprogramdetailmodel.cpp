#include "hworkprogramdetailmodel.h"
#include <QColor>

HWorkProgramDetailModel::HWorkProgramDetailModel(QObject *parent)
    : QSqlQueryModel{parent}
{

}

Qt::ItemFlags HWorkProgramDetailModel::flags(const QModelIndex &item) const
{
    Qt::ItemFlags flags=QSqlQueryModel::flags(item);

    if (item.column ()==2)
    {
        flags |= Qt::ItemIsEditable;
        return flags;

    }
    else if (item.column()==15 || item.column() ==16)
    {

        flags |= Qt::ItemIsUserCheckable;
        flags |= Qt::ItemIsEnabled;




        return flags;
    }
    else
    {
        flags=QSqlQueryModel::flags(item) & ~Qt::ItemIsEditable;
        return flags;
    }


    return QSqlQueryModel::flags(item) ;
}

QVariant HWorkProgramDetailModel::data(const QModelIndex &item, int role) const
{

    if (item.column()==15  || item.column()==16)
    {





        if (role==Qt::CheckStateRole)
            return (QSqlQueryModel::data(item).toInt() != 0) ? Qt::Checked :Qt::Unchecked;
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




    return QSqlQueryModel::data(item,role);
}

bool HWorkProgramDetailModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (index.column()==15 || index.column()==16)
    {



        if (role==Qt::CheckStateRole )
            return (QSqlQueryModel::data(index).toInt() != 0) ? Qt::Checked :Qt::Unchecked;
        else
            return true;

        return QSqlQueryModel::data(index,role).toBool();

    }



    QSqlQueryModel::setData(index,value,role);
    return true;
}
