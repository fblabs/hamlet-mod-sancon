/********************************************************************************
** Form generated from reading UI file 'hprodottinew.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPRODOTTINEW_H
#define UI_HPRODOTTINEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HProdottiNew
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbAll;
    QRadioButton *rbMaterie;
    QRadioButton *rbProdotti;
    QRadioButton *rbContenitori;
    QRadioButton *rbTappi;
    QRadioButton *rbVasi;
    QRadioButton *rbBio;
    QCheckBox *checkBox;
    QTableView *tvProdotti;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pbMod;
    QPushButton *pbLoads;
    QCheckBox *cbPdf;
    QPushButton *pbPrint;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HProdottiNew)
    {
        if (HProdottiNew->objectName().isEmpty())
            HProdottiNew->setObjectName(QString::fromUtf8("HProdottiNew"));
        HProdottiNew->setWindowModality(Qt::ApplicationModal);
        HProdottiNew->resize(1291, 643);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HProdottiNew->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HProdottiNew);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rbAll = new QRadioButton(HProdottiNew);
        rbAll->setObjectName(QString::fromUtf8("rbAll"));
        rbAll->setChecked(true);

        horizontalLayout->addWidget(rbAll);

        rbMaterie = new QRadioButton(HProdottiNew);
        rbMaterie->setObjectName(QString::fromUtf8("rbMaterie"));

        horizontalLayout->addWidget(rbMaterie);

        rbProdotti = new QRadioButton(HProdottiNew);
        rbProdotti->setObjectName(QString::fromUtf8("rbProdotti"));

        horizontalLayout->addWidget(rbProdotti);

        rbContenitori = new QRadioButton(HProdottiNew);
        rbContenitori->setObjectName(QString::fromUtf8("rbContenitori"));

        horizontalLayout->addWidget(rbContenitori);

        rbTappi = new QRadioButton(HProdottiNew);
        rbTappi->setObjectName(QString::fromUtf8("rbTappi"));

        horizontalLayout->addWidget(rbTappi);

        rbVasi = new QRadioButton(HProdottiNew);
        rbVasi->setObjectName(QString::fromUtf8("rbVasi"));

        horizontalLayout->addWidget(rbVasi);

        rbBio = new QRadioButton(HProdottiNew);
        rbBio->setObjectName(QString::fromUtf8("rbBio"));

        horizontalLayout->addWidget(rbBio);

        checkBox = new QCheckBox(HProdottiNew);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);

        tvProdotti = new QTableView(HProdottiNew);
        tvProdotti->setObjectName(QString::fromUtf8("tvProdotti"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tvProdotti->sizePolicy().hasHeightForWidth());
        tvProdotti->setSizePolicy(sizePolicy);
        tvProdotti->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvProdotti->setAlternatingRowColors(true);
        tvProdotti->setSelectionMode(QAbstractItemView::SingleSelection);
        tvProdotti->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvProdotti->setSortingEnabled(true);
        tvProdotti->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tvProdotti->horizontalHeader()->setStretchLastSection(true);
        tvProdotti->verticalHeader()->setVisible(false);
        tvProdotti->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tvProdotti);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HProdottiNew);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(HProdottiNew);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setClearButtonEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(HProdottiNew);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);

        pbMod = new QPushButton(HProdottiNew);
        pbMod->setObjectName(QString::fromUtf8("pbMod"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Monitoring64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbMod->setIcon(icon2);
        pbMod->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbMod);

        pbLoads = new QPushButton(HProdottiNew);
        pbLoads->setObjectName(QString::fromUtf8("pbLoads"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbLoads->setIcon(icon3);
        pbLoads->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbLoads);

        cbPdf = new QCheckBox(HProdottiNew);
        cbPdf->setObjectName(QString::fromUtf8("cbPdf"));
        cbPdf->setMaximumSize(QSize(100, 16777215));
        cbPdf->setChecked(true);

        horizontalLayout_2->addWidget(cbPdf);

        pbPrint = new QPushButton(HProdottiNew);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon4);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbPrint);

        pushButton_2 = new QPushButton(HProdottiNew);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon5);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(HProdottiNew);

        QMetaObject::connectSlotsByName(HProdottiNew);
    } // setupUi

    void retranslateUi(QWidget *HProdottiNew)
    {
        HProdottiNew->setWindowTitle(QCoreApplication::translate("HProdottiNew", "Prodotti", nullptr));
        rbAll->setText(QCoreApplication::translate("HProdottiNew", "Tutti", nullptr));
        rbMaterie->setText(QCoreApplication::translate("HProdottiNew", "Materie prime", nullptr));
        rbProdotti->setText(QCoreApplication::translate("HProdottiNew", "Prodotti", nullptr));
        rbContenitori->setText(QCoreApplication::translate("HProdottiNew", "Conteniitori", nullptr));
        rbTappi->setText(QCoreApplication::translate("HProdottiNew", "Capsule e tappi", nullptr));
        rbVasi->setText(QCoreApplication::translate("HProdottiNew", "Vasi", nullptr));
        rbBio->setText(QCoreApplication::translate("HProdottiNew", "Bio", nullptr));
        checkBox->setText(QCoreApplication::translate("HProdottiNew", "Solo prodotti attivi", nullptr));
        label->setText(QCoreApplication::translate("HProdottiNew", "Cerca prodotto", nullptr));
        pushButton->setText(QCoreApplication::translate("HProdottiNew", "Nuovo", nullptr));
        pbMod->setText(QCoreApplication::translate("HProdottiNew", "Modifica prodotto selezionato", nullptr));
        pbLoads->setText(QCoreApplication::translate("HProdottiNew", "Carichi", nullptr));
        cbPdf->setText(QCoreApplication::translate("HProdottiNew", "Stampa su pdf", nullptr));
        pbPrint->setText(QCoreApplication::translate("HProdottiNew", "Stampa", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HProdottiNew", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HProdottiNew: public Ui_HProdottiNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRODOTTINEW_H
