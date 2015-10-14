#ifndef HREADONLYMODELNEW_H
#define HREADONLYMODELNEW_H

#include <QObject>
#include <QSqlRelationalTableModel>
#include <QSqlDatabase>
#include <QModelIndex>


class HReadOnlyModelNew : public QSqlRelationalTableModel
{
    Q_OBJECT
public:
    explicit HReadOnlyModelNew(QObject *parent=0, QSqlDatabase db = QSqlDatabase());
    Qt::ItemFlags flags(const QModelIndex &index) const;

signals:

public slots:

};



#endif // HREADONLYMODELNEW_H
