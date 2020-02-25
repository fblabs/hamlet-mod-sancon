#ifndef HCOPYCARD_H
#define HCOPYCARD_H

#include <QWidget>
#include <QSqlDatabase>
#include <QObject>

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

    void on_lvC_clicked(const QModelIndex &index);

    void on_lineEdit_textChanged(const QString &arg1);

signals:
    void doCopy(int cliente,int prodotto,QString nC,QString nP,QString schedadacopiare);
};

#endif // HCOPYCARD_H
