#ifndef HQUERYMODEL_LASTLOTS_H
#define HQUERYMODEL_LASTLOTS_H

#include <QSqlQueryModel>
#include <QObject>

class HQueryModel_lastlots : public QSqlQueryModel
{
public:
    explicit HQueryModel_lastlots(QObject *parent = nullptr);
    QVariant data(const QModelIndex &index, int role) const;
    QModelIndex ix;
    int giacenza;
};

#endif // HQUERYMODEL_LASTLOTS_H
