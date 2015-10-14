#ifndef HASSOCIATIONS_H
#define HASSOCIATIONS_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QCompleter>


namespace Ui {
class HAssociations;
}

class HAssociations : public QDialog
{
    Q_OBJECT

public:
    explicit HAssociations(QWidget *parent = 0);
    ~HAssociations();

private:
    Ui::HAssociations *ui;
    QString sConn;
    QSqlDatabase db;
    QSqlTableModel *mClients;
    QSqlTableModel *mRecipes;
    QSqlQueryModel *qrm;
    QSqlQueryModel *qmCombo;
    QSqlTableModel *mClients4List;
    QSqlQueryModel *mRecipes4List;
    QString idCliente;
    QString idRicetta;
    QCompleter *comp;


private slots:
    void initForm();
    void getClientsList();
    void getClientsView();
    void getRecipesView();
    void getRecipesList();
    void getAssociateRecipes(int iClientId );
    void getAssociateClients(int iRecipeId);
    void on_cb1_currentIndexChanged(const QString &arg1);
    void on_rbRC_toggled(bool checked);
    void on_rbCR_toggled(bool checked);
    void on_pushButton_5_clicked();
    int addAssociation(bool bIsRecipe); //bIsRecipe=true è una ricetta, false è un' anagrafica
    int addRecipeClientAssociation();
    int addClientRecipeAssociation();
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();



public slots:
    void setConnectionName(QString conn);
};

#endif // HASSOCIATIONS_H
