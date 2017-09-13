#include "hdatatopass.h"

HDataToPass::HDataToPass(QObject *parent) : QObject(parent)
{}

void HDataToPass::setData(QObject *parent,QStandardItemModel *pmod0,int prow, int pprodid, bool pallergene, QString pdescription, double pquantity)
{

    row=prow;
    productId=pprodid;
    description=pdescription;
    allergene=pallergene;
    quantity=pquantity;
}
