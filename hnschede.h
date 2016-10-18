#ifndef HNSCHEDE_H
#define HNSCHEDE_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class HNSChede;
}

class HNSChede : public QWidget
{
    Q_OBJECT

public:
    explicit HNSChede(QWidget *parent = 0,QSqlDatabase pdb=QSqlDatabase());
    ~HNSChede();

private slots:
    void on_pushButton_clicked();
    void insertImage();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    bool saveCard();
    void getProducts();
    void loadCard();

private:
    Ui::HNSChede *ui;
    QSqlDatabase db;
    bool update;
};

#endif // HNSCHEDE_H
