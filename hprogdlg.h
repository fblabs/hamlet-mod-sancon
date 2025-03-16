#ifndef HPROGDLG_H
#define HPROGDLG_H

#include <QWidget>

namespace Ui {
class HProgDlg;
}

class HProgDlg : public QWidget
{
    Q_OBJECT

public:
    explicit HProgDlg(QWidget *parent = nullptr);
    ~HProgDlg();

private:
    Ui::HProgDlg *ui;
private slots:
    void delay();
public slots:
    void removeMe();
signals:
    void s_done();

};

#endif // HPROGDLG_H
