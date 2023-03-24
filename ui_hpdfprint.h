/********************************************************************************
** Form generated from reading UI file 'hpdfprint.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPDFPRINT_H
#define UI_HPDFPRINT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HPDFPrint
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *tb_Viewport;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSave_pdf;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HPDFPrint)
    {
        if (HPDFPrint->objectName().isEmpty())
            HPDFPrint->setObjectName(QString::fromUtf8("HPDFPrint"));
        HPDFPrint->setWindowModality(Qt::ApplicationModal);
        HPDFPrint->resize(1048, 534);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HPDFPrint->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HPDFPrint);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tb_Viewport = new QTextBrowser(HPDFPrint);
        tb_Viewport->setObjectName(QString::fromUtf8("tb_Viewport"));

        verticalLayout->addWidget(tb_Viewport);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbSave_pdf = new QPushButton(HPDFPrint);
        pbSave_pdf->setObjectName(QString::fromUtf8("pbSave_pdf"));

        horizontalLayout->addWidget(pbSave_pdf);

        pbPrint = new QPushButton(HPDFPrint);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HPDFPrint);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HPDFPrint);

        QMetaObject::connectSlotsByName(HPDFPrint);
    } // setupUi

    void retranslateUi(QWidget *HPDFPrint)
    {
        HPDFPrint->setWindowTitle(QCoreApplication::translate("HPDFPrint", "Stsmpa", nullptr));
        pbSave_pdf->setText(QCoreApplication::translate("HPDFPrint", "Salva PDF", nullptr));
        pbPrint->setText(QCoreApplication::translate("HPDFPrint", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HPDFPrint", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HPDFPrint: public Ui_HPDFPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPDFPRINT_H
