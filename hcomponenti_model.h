
#ifndef HCOMPONENTI_MODEL_H
#define HCOMPONENTI_MODEL_H

#include <QStandardItemModel>

#include <QObject>


class HComponenti_model : public QStandardItemModel
{
    Q_OBJECT
public:
    explicit HComponenti_model(QObject *parent = nullptr) : QStandardItemModel(parent){}
    Qt::ItemFlags flags(const QModelIndex &index) const;
     QVariant data(const QModelIndex &item, int role) const;

public slots:


};

#endif // HCOMPONENTI_MODEL_H
