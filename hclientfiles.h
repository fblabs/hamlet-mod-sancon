#ifndef HCLIENTFILES_H
#define HCLIENTFILES_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QCompleter>

namespace Ui {
class HClientFiles;
}

class HClientFiles : public QWidget
{
    Q_OBJECT

public:
    explicit HClientFiles(QWidget *parent = 0);
    ~HClientFiles();
public slots:
    void setConnectionName(QString conn);

private slots:
    void on_pushButton_clicked();
    void checkRecipe();
    void getIDS();
    void getAssociations();
    void on_pushButton_2_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_leProd_textChanged(const QString &arg1);

    void on_pushButton_3_clicked();

    void on_rbRight_toggled(bool checked);


    void on_checkBox_toggled(bool checked);

    void on_rbLeft_toggled(bool checked);


private:
    Ui::HClientFiles *ui;
    QSqlDatabase db;
    QString sConn;
    QSqlTableModel *tmProdotti;
    QSqlTableModel *tmClienti;
    QString clientID;
    QString productID;

    void setupForm();


};

#endif // HCLIENTFILES_H
