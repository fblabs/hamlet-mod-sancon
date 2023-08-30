#ifndef HPREFERRED_LOTS_H
#define HPREFERRED_LOTS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QStandardItemModel>

namespace Ui {
class HPreferred_Lots;
}

class HPreferred_Lots : public QWidget
{
    Q_OBJECT

public:
    explicit HPreferred_Lots(QSqlDatabase pdb=QSqlDatabase(),QWidget *parent = nullptr);
    ~HPreferred_Lots();

private:
    Ui::HPreferred_Lots *ui;
    QSqlDatabase db;
private slots:
    void loadPreferredLots();
    void on_pbClose_clicked();
    void print();
    void on_pbPrint_clicked();
};

#endif // HPREFERRED_LOTS_H
