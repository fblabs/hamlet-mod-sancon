#ifndef HNEWFILE_H
#define HNEWFILE_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class HNewFile;
}

class HNewFile : public QDialog
{
    Q_OBJECT

public:
    explicit HNewFile(QWidget *parent = 0);
    ~HNewFile();
public slots:
    void setConnectionName(QString conn);
    void setParameters(QString idCliente, QString idProdotto );

private:
    Ui::HNewFile *ui;
    QSqlDatabase db;
    QString sConn;
    QString sProductId;
    QString sClientId;
    int UPDATE;

private slots:
    void getFile();

    void on_pushButton_2_clicked();
    void on_pbSave_clicked();
    void on_pushButton_clicked();
    void on_pbClose_clicked();
};

#endif // HNEWFILE_H
