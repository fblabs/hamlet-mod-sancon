#ifndef HSCHEDE_H
#define HSCHEDE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QPrinter>

namespace Ui {
class HSchede;
}

class HSchede : public QWidget
{
    Q_OBJECT

public:
    explicit HSchede(QWidget *parent = 0,QSqlDatabase pdb=QSqlDatabase());
    ~HSchede();

private slots:
    void on_pbClose_clicked();

    void on_pbMod_clicked();

    void retrieveProducts();
    //void retrieveCards();
    void loadScheda(int pcl=-1, int ppr=-1);
    void addImage(QByteArray byte,int number, QString name,  int width, int height);
    void resizeImage(QString name, int wr, int hr);
    void addNewImage();
    void loadImages(int id);
    void showContextMenu(const QPoint& pos);
    void on_pushButton_clicked();




private:
    Ui::HSchede *ui;
    QSqlDatabase db;

};

#endif // HSCHEDE_H
