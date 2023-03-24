#ifndef HPDFPRINT_H
#define HPDFPRINT_H

#include <QWidget>
#include <huser.h>
#include <QTextDocument>


namespace Ui {
class HPDFPrint;
}

class HPDFPrint : public QWidget
{
    Q_OBJECT

public:
    explicit HPDFPrint(HUser *p_user=nullptr,QString p_html=QString(), QWidget *parent = nullptr);
    ~HPDFPrint();

private slots:
    void on_pbSave_pdf_clicked();

    void on_pbPrint_clicked();

    void on_pbClose_clicked();

private:
    Ui::HPDFPrint *ui;
    HUser *user;
    QString html;



};

#endif // HPDFPRINT_H
