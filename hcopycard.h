#ifndef HCOPYCARD_H
#define HCOPYCARD_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class HCopyCard;
}

class HCopyCard : public QWidget
{
    Q_OBJECT

public:
    explicit HCopyCard(QWidget *parent = 0,QSqlDatabase pdb=QSqlDatabase());
    ~HCopyCard();

private:
    Ui::HCopyCard *ui;
    QSqlDatabase db;
private slots:
    void getProducts();
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void copyRecipe(int cliente,int prodotto);
};

#endif // HCOPYCARD_H
