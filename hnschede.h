#ifndef HNSCHEDE_H
#define HNSCHEDE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QPrinter>
#include "huser.h"

namespace Ui {
class HNSChede;
}

class HNSChede : public QWidget
{
    Q_OBJECT

public:
    explicit HNSChede(QString spcliente,QString spprodotto,QSqlDatabase pdb=QSqlDatabase(),HUser* pusr=0,QWidget *parent = 0);
    ~HNSChede();



private slots:

    void insertImage();
    void on_pushButton_2_clicked();
    void showContextMenu(const QPoint& pos);
    bool saveCard();
    void getProducts();
    void loadCard();
    void on_pbsave_clicked();
    void on_pbClose_clicked();
    void resizeImage(int nw, int nh);
    void showResizeImage();
    int getImageWidth();
    int getImageHeight();
    void printPreview(QPrinter *printer);
    void printPreviewSlot();
    void print();
    void setBold();
    void setFont();
    void setEvidence();
    void initCard(int idProdotto, int idCliente);
    void documentChanged();
    void copyCard(int,int,QString,QString,QString);




    void on_pbBold_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pbInit_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_toggled(bool checked);


    void on_pushButton_9_clicked();



    void on_pbCopy_clicked();

    void on_pbReset_clicked();



private:
    Ui::HNSChede *ui;
    QSqlDatabase db;
    HUser *usr;

    bool update;
    bool changed;
};

#endif // HNSCHEDE_H
