#ifndef HNEWCONTACT_H
#define HNEWCONTACT_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class HNewContact;
}

class HNewContact : public QWidget
{
    Q_OBJECT

public:
    explicit HNewContact(QWidget *parent = 0,QSqlDatabase pdb= QSqlDatabase());
    ~HNewContact();

private slots:
    void on_pushButton_clicked();
    bool saveNewContact();

    void on_pushButton_2_clicked();

private:
    Ui::HNewContact *ui;
    QSqlDatabase db;
signals:
    void newContactSaved();
};

#endif // HNEWCONTACT_H
