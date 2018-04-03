#ifndef HNEWUSER_H
#define HNEWUSER_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class HNewUser;
}

class HNewUser : public QDialog
{
    Q_OBJECT

public:
    explicit HNewUser(QSqlDatabase pdb=QSqlDatabase(),QWidget *parent = 0);
    ~HNewUser();


private slots:


    void on_cbShow_toggled(bool checked);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::HNewUser *ui;
    QSqlDatabase db;
    QString sConn;

    QSqlTableModel *tmRole;
};

#endif // HNEWUSER_H
