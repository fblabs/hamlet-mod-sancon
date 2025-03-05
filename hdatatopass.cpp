#include "hdatatopass.h"

HDataToPass::HDataToPass(QObject *parent) : QObject(parent)
{

}

HDataToPass::~HDataToPass()
{
    mod=nullptr;
}

void HDataToPass::setData( QStandardItemModel *pmod0, int prow, int pprodid, bool pallergene, QString pdescription, double pquantity, double p_giacenza, QObject *parent)
{

    row=prow;
    productId=pprodid;
    description=pdescription;
    lot=QString();
    allergene=pallergene;
    quantity=pquantity;
    giacenza=p_giacenza;
    if(pmod0){
    mod=pmod0;
    }



}


