#ifndef HDUPLICATE_H
#define HDUPLICATE_H

#include <QWidget>
#include <QSqlDatabase>


namespace Ui {
class HDuplicate;
}

class HDuplicate : public QWidget
{
    Q_OBJECT

public:
    explicit HDuplicate(QWidget *parent = 0);
    ~HDuplicate();
    void init(QString conn, int ocliente, int oprodotto);

private:
    Ui::HDuplicate *ui;
    QSqlDatabase db;
    int cliente;
    int prodotto;
private slots:
    void getRecipes();
    void duplicate();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

signals:
    void update();
};

#endif // HDUPLICATE_H
