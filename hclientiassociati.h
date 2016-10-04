#ifndef HCLIENTIASSOCIATI_H
#define HCLIENTIASSOCIATI_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class HClientiAssociati;
}

class HClientiAssociati : public QWidget
{
    Q_OBJECT

public:
    explicit HClientiAssociati(QWidget *parent = 0, int pidricetta=-1, QSqlDatabase pdb=QSqlDatabase());
    ~HClientiAssociati();

private slots:


    void on_pushButton_clicked();

private:
    Ui::HClientiAssociati *ui;
    QSqlDatabase db;
    int idricetta;

};

#endif // HCLIENTIASSOCIATI_H
