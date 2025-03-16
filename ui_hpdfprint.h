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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HPDFPrint
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *sbFontSize;
    QRadioButton *rbPortrait;
    QRadioButton *rbLandscape;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *tb_Viewport;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSave_pdf;
    QPushButton *pbPreview;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HPDFPrint)
    {
        if (HPDFPrint->objectName().isEmpty())
            HPDFPrint->setObjectName(QString::fromUtf8("HPDFPrint"));
        HPDFPrint->setWindowModality(Qt::ApplicationModal);
        HPDFPrint->resize(954, 641);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HPDFPrint->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HPDFPrint);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HPDFPrint);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        sbFontSize = new QSpinBox(HPDFPrint);
        sbFontSize->setObjectName(QString::fromUtf8("sbFontSize"));
        sbFontSize->setMinimum(1);
        sbFontSize->setMaximum(30);
        sbFontSize->setValue(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, sbFontSize);


        horizontalLayout_2->addLayout(formLayout);

        rbPortrait = new QRadioButton(HPDFPrint);
        rbPortrait->setObjectName(QString::fromUtf8("rbPortrait"));
        rbPortrait->setChecked(true);

        horizontalLayout_2->addWidget(rbPortrait);

        rbLandscape = new QRadioButton(HPDFPrint);
        rbLandscape->setObjectName(QString::fromUtf8("rbLandscape"));

        horizontalLayout_2->addWidget(rbLandscape);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        tb_Viewport = new QTextBrowser(HPDFPrint);
        tb_Viewport->setObjectName(QString::fromUtf8("tb_Viewport"));

        verticalLayout->addWidget(tb_Viewport);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbSave_pdf = new QPushButton(HPDFPrint);
        pbSave_pdf->setObjectName(QString::fromUtf8("pbSave_pdf"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/PDF.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave_pdf->setIcon(icon1);

        horizontalLayout->addWidget(pbSave_pdf);

        pbPreview = new QPushButton(HPDFPrint);
        pbPreview->setObjectName(QString::fromUtf8("pbPreview"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Photocamera.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbPreview->setIcon(icon2);

        horizontalLayout->addWidget(pbPreview);

        pbPrint = new QPushButton(HPDFPrint);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        pbPrint->setIcon(icon);

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HPDFPrint);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon3);

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HPDFPrint);

        QMetaObject::connectSlotsByName(HPDFPrint);
    } // setupUi

    void retranslateUi(QWidget *HPDFPrint)
    {
        HPDFPrint->setWindowTitle(QCoreApplication::translate("HPDFPrint", "Stampa", nullptr));
        label->setText(QCoreApplication::translate("HPDFPrint", "Dimensione caratteri: ", nullptr));
        rbPortrait->setText(QCoreApplication::translate("HPDFPrint", "Verticale", nullptr));
        rbLandscape->setText(QCoreApplication::translate("HPDFPrint", "Orizzontale", nullptr));
        pbSave_pdf->setText(QCoreApplication::translate("HPDFPrint", "Salva PDF", nullptr));
        pbPreview->setText(QCoreApplication::translate("HPDFPrint", "Anteprima di stampa", nullptr));
        pbPrint->setText(QCoreApplication::translate("HPDFPrint", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HPDFPrint", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HPDFPrint: public Ui_HPDFPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPDFPRINT_H
