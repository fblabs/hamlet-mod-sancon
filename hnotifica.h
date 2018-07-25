#ifndef HNOTIFICA_H
#define HNOTIFICA_H

#include <QWidget>
#include <QSqlDatabase>



namespace Ui {
class HNotifica;
}

class HNotifica : public QWidget
{
    Q_OBJECT

public:
    explicit HNotifica(QWidget *parent = 0, int id=-1,QSqlDatabase pdb=QSqlDatabase());
    ~HNotifica();

private slots:

    void on_pbChiudi_clicked();

private:
    Ui::HNotifica *ui;
    QSqlDatabase db;
    int idnotifica;
};

#endif // HNOTIFICA_H
