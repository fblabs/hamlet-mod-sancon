#ifndef HRECIPEADDROW_H
#define HRECIPEADDROW_H

#include <QWidget>
#include <QSqlDatabase>
#include <QList>
#include <QStandardItem>


namespace Ui {
class HRecipeAddRow;
}

class HRecipeAddRow : public QWidget
{
    Q_OBJECT

public:
    explicit HRecipeAddRow(QWidget *parent = 0);
    ~HRecipeAddRow();
    void init(QString conn, int idricetta);

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_lineEdit_returnPressed();

public slots:
    void addRecipeRow();
signals:
    void rowadded(QList<QStandardItem*>);

private:
    Ui::HRecipeAddRow *ui;
    QSqlDatabase db;
    int idricettatarget;

};

#endif // HRECIPEADDROW_H
