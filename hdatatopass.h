#ifndef HDATATOPASS_H
#define HDATATOPASS_H

#include <QObject>
#include <QStandardItemModel>

class HDataToPass : public QObject
{
    Q_OBJECT
public:
    explicit HDataToPass(QObject *parent = 0);
    QString description;
    QString lot;
    int productId;
    int lotid=0;
    bool allergene;
    int row;
    double quantity;
    double giacenza;
    QStandardItemModel *mod;

signals:

public slots:
    void setData(QObject *parent=0, QStandardItemModel *pmod=0, int prow=-1, int pprodid=-1, bool pallergene=false, QString pdescription=QString(), double pquantity=0.0);

};

#endif // HDATATOPASS_H
