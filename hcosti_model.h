#ifndef HCOSTI_MODEL_H
#define HCOSTI_MODEL_H

#include <QStandardItemModel>
#include <QObject>

class HCosti_model : public QStandardItemModel
{
    Q_OBJECT
public:
    explicit HCosti_model(QObject *parent = nullptr) : QStandardItemModel(parent){}
    Qt::ItemFlags flags(const QModelIndex &index) const;
};

#endif // HCOSTI_MODEL_H
