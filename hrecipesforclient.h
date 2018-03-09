#ifndef HRECIPESFORCLIENT_H
#define HRECIPESFORCLIENT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQueryModel>

namespace Ui {
class HRecipesForClient;
}

class HRecipesForClient : public QWidget
{
    Q_OBJECT

public:
    explicit HRecipesForClient(QSqlDatabase pdb,int idRecipe=-1,QWidget *parent = 0);
    ~HRecipesForClient();

private slots:
    void on_pbClose_clicked();
    void on_cbRecipes_currentIndexChanged(int index);
    void getClientsForRecipe(int idrecipe=-1);
    void getRecipes();

private:
    Ui::HRecipesForClient *ui;
    QSqlDatabase db;
    QSqlQueryModel *modrecipes;
    QSqlQueryModel *modClients;


};

#endif // HRECIPESFORCLIENT_H
