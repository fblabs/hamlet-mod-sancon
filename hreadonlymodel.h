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

signals:

public slots:

};

#endif // HREADONLYMODEL_H
