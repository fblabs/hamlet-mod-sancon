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
    explicit HPDFPrint(HUser *p_user=nullptr, QString p_html=QString(), QPageLayout::Orientation p_orientation=QPageLayout::Portrait, QWidget *parent = nullptr);
    ~HPDFPrint();
    void set_orientation(QPageLayout::Orientation p_orientation);

private slots:
    void on_pbSave_pdf_clicked();

    void on_pbPrint_clicked();

    void on_pbClose_clicked();

    void on_sbFontSize_valueChanged(int arg1);

    void on_pbPreview_clicked();


   // void on_rbPortrait_toggled(bool checked);

    void print_preview(QPrinter *p_printer);


    void on_rbPortrait_toggled(bool checked);

private:
    Ui::HPDFPrint *ui;
    HUser *user;
    QString html;
    QPageLayout layout;
    QTextDocument* doc;
    QPrinter printer;
    QPageLayout::Orientation orientation;





};

#endif // HPDFPRINT_H
