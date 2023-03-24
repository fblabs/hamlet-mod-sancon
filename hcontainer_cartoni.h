#ifndef H_CONTAINER_CARTONI_H
#define H_CONTAINER_CARTONI_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class HContainer_cartoni;
}

class HContainer_cartoni : public QWidget
{
    Q_OBJECT

public:
    explicit HContainer_cartoni(QSqlDatabase p_db=QSqlDatabase(), QWidget *parent = nullptr);
    ~HContainer_cartoni();

private:
    Ui::HContainer_cartoni*ui;
    QSqlDatabase db;

private slots:

    void get_cartoni();
    void data();



    void on_pbCalculate_clicked();

signals:
    void component_added(QString item,QString costo);


};

#endif // H_CONTAINER_CARTONI_H
