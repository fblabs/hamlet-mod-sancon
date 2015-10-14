#ifndef HMODIFICASCHEDA_H
#define HMODIFICASCHEDA_H

#include <QDialog>
#include <QSqlDatabase>
#include <QImage>
#include <QPixmap>

namespace Ui {
class HModificaScheda;
}

class HModificaScheda : public QDialog
{
    Q_OBJECT

public:
    explicit HModificaScheda(QWidget *parent = 0);
    ~HModificaScheda();
    void init(QString conn, int cliente, int prodotto, QString scheda);


private slots:
    void on_pushButton_clicked();
    void updateFile();
    void reloadFile();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();
    void loadScheda();

    void on_pushButton_5_clicked();
    void update();

private:
    Ui::HModificaScheda *ui;
    QSqlDatabase db;
    QString sConn;
    int idCliente;
    int idProdotto;
    QString schedaName;
    QPixmap img;
    QImage *imgobj;
signals:
    void schedaAggiornata();
};

#endif // HMODIFICASCHEDA_H
