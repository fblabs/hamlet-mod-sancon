#ifndef HQUERYMODEL_LOTTI_H
#define HQUERYMODEL_LOTTI_H

#include <QSqlQueryModel>
#include <QObject>

class HQueryModel_lotti : public QSqlQueryModel
{
    Q_OBJECT
public:
    explicit HQueryModel_lotti(QObject *parent = nullptr);

    QVariant data(const QModelIndex &index, int role) const;
    QModelIndex ix;
    int giacenza;
};

#endif // HQUERYMODEL_LOTTI_H
