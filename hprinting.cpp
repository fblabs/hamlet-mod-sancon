#include "hprinting.h"
#include "ui_hprinting.h"
#include <QTextDocument>

HPrinting::HPrinting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HPrinting)
{
    ui->setupUi(this);

    QTextDocument *doc =  new QTextDocument(ui->editor);
    doc->defaultFont();

}

HPrinting::~HPrinting()
{
    delete ui;
}
