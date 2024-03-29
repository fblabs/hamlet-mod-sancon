#ifndef HSCHEDECLIENTI_H
#define HSCHEDECLIENTI_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QCompleter>
#include "hprint.h"
#include "huser.h"

namespace Ui {
class HSchedeClienti;
}

class HSchedeClienti : public QWidget
{
    Q_OBJECT

public:
    explicit HSchedeClienti(QWidget *parent = 0);
    ~HSchedeClienti();
    void init(QString, HUser *usr);


private:
    QCompleter *completerClienti;
    Ui::HSchedeClienti *ui;
    QString sConn;
    QSqlDatabase db;
    QSqlTableModel *tmProdotti;
    QSqlTableModel *tmClienti;
    bool canUpdate;
    int width;
    int height;
    int widthc;
    int heightc;
    int fontsize;

//    int m_idcliente;


    void deleteScheda();
   // HPrint *p;
private slots:
    void selectRecipesforClient();
    void getSubclients();
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();

    void on_cbSelectCriteria_toggled(bool checked);
    void showSubclients(bool toggled);
    void saveScheda();
    void setImgWidth(int newWidth);
    void setImgHeight(int newHeight);
    void exportImages();





    void on_btnDup_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_btnSave_clicked();


    void on_pbExport_clicked();

signals:
public slots:
    void loadScheda();

};

#endif // HSCHEDECLIENTI_H
