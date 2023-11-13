#ifndef HPDFPRINT_H
#define HPDFPRINT_H

#include <QWidget>
#include <huser.h>
#include <QTextDocument>

#include <QPrinter>


namespace Ui {
class HPDFPrint;
}

class HPDFPrint : public QWidget
{
    Q_OBJECT

public:
    explicit HPDFPrint(HUser *p_user=nullptr,QString p_html=QString(), QWidget *parent = nullptr);
    ~HPDFPrint();
    void set_orientation(QPrinter::Orientation p_orientation);

private slots:
    void on_pbSave_pdf_clicked();

    void on_pbPrint_clicked();

    void on_pbClose_clicked();

private:
    Ui::HPDFPrint *ui;
    HUser *user;
    QString html;
    QPrinter::Orientation orientation;




};

#endif // HPDFPRINT_H
