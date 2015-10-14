#ifndef HASSOCIAZIONI_H
#define HASSOCIAZIONI_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QCompleter>
#include <QItemDelegate>


namespace Ui {
class HAssociazioni;
}

class HAssociazioni : public QWidget
{
    Q_OBJECT

public:
    explicit HAssociazioni(QWidget *parent = 0);
    ~HAssociazioni();
    void init(QString conn);
    void setVisibility(bool visible);

private:
    Ui::HAssociazioni *ui;

    QSqlDatabase db;
    QString sConn;
    QSqlTableModel *tmClienti;
    QCompleter *comp;
    QSqlQueryModel *qm;
    QSqlQueryModel *tvqm;
    QItemDelegate *delegate;
private slots:
    void getRecipes();
    void getRecipesForTable();
    void saveAssociation();
    void deleteAssociation();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_leCliente_textChanged(const QString &arg1);
};

#endif // HASSOCIAZIONI_H
