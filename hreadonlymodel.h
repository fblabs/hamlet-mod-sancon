#ifndef HREADONLYMODEL_H
#define HREADONLYMODEL_H

#include <QObject>
#include <QSqlRelationalTableModel>
#include <QSqlDatabase>
#include <QModelIndex>


class hReadonlyModel : public QSqlRelationalTableModel
{
    Q_OBJECT

public:
    explicit hReadonlyModel(QObject *parent=0, QSqlDatabase db = QSqlDatabase());
    Qt::ItemFlags flags(const QModelIndex &index) const;
    QVariant data( const QModelIndex & item, int role /*= Qt::DisplayRole */ ) const;


signals:

public slots:

};

#endif // HREADONLYMODEL_H
