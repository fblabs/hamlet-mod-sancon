#ifndef HCONTACTS_H
#define HCONTACTS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QStringListModel>

namespace Ui {
class HContacts;
}

class HContacts : public QWidget
{
    Q_OBJECT

public:
    explicit HContacts(QWidget *parent = 0,QSqlDatabase pdb=QSqlDatabase());
    ~HContacts();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    bool removeContact();

    void on_pushButton_2_clicked();

    void reload();

    void on_pushButton_6_clicked();

private:
    Ui::HContacts *ui;
    QSqlDatabase db;
    QSqlTableModel *mod;
    QStringListModel *tipomod;


};

#endif // HCONTACTS_H
