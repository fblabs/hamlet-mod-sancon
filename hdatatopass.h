#ifndef HDATATOPASS_H
#define HDATATOPASS_H

#include <QObject>
#include <QStandardItemModel>

class HDataToPass : public QObject
{
    Q_OBJECT
public:
    HDataToPass(QObject *parent =nullptr);
  //  HDataToPass(const HDataToPass *org,QObject *parent=nullptr);
    ~HDataToPass();
    QString description=QString();
    QString lot=QString();
    int productId;
    bool allergene;
    bool allergene_usa=false;
    int row;
    double quantity;
    double giacenza;
    QObject *parent;
    QStandardItemModel *mod;

signals:

public slots:
    void setData(QStandardItemModel *pmod=nullptr, int prow=-1, int pprodid=-1, bool pallergene=false, QString pdescription=QString(), double pquantity=0.0, double p_giacenza=0.0,QObject *parent=nullptr);

};

#endif // HDATATOPASS_H
