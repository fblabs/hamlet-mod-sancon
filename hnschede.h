#ifndef HNSCHEDE_H
#define HNSCHEDE_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class HNSChede;
}

class HNSChede : public QWidget
{
    Q_OBJECT

public:
    explicit HNSChede(QWidget *parent = 0,QSqlDatabase pdb=QSqlDatabase());
    ~HNSChede();

private slots:

    void insertImage();
    void on_pushButton_2_clicked();
    void showContextMenu(const QPoint& pos);
    bool saveCard();
    void getProducts();
    void loadCard();
    void on_pbsave_clicked();
    void on_pbClose_clicked();
    void resizeImage(int nw, int nh);
    void showResizeImage();


private:
    Ui::HNSChede *ui;
    QSqlDatabase db;
    bool update;
};

#endif // HNSCHEDE_H
