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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HProdottiNew
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *cbTipiProdotto;
    QCheckBox *chbBio;
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
        HProdottiNew->setWindowModality(Qt::WindowModal);
        HProdottiNew->resize(1291, 643);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HProdottiNew->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HProdottiNew);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(HProdottiNew);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(label_2);

        cbTipiProdotto = new QComboBox(HProdottiNew);
        cbTipiProdotto->setObjectName(QString::fromUtf8("cbTipiProdotto"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbTipiProdotto->sizePolicy().hasHeightForWidth());
        cbTipiProdotto->setSizePolicy(sizePolicy);
        cbTipiProdotto->setEditable(true);
        cbTipiProdotto->setInsertPolicy(QComboBox::NoInsert);
        cbTipiProdotto->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        cbTipiProdotto->setModelColumn(1);

        horizontalLayout_3->addWidget(cbTipiProdotto);

        chbBio = new QCheckBox(HProdottiNew);
        chbBio->setObjectName(QString::fromUtf8("chbBio"));
        chbBio->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(chbBio);

        checkBox = new QCheckBox(HProdottiNew);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout_3);

        tvProdotti = new QTableView(HProdottiNew);
        tvProdotti->setObjectName(QString::fromUtf8("tvProdotti"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tvProdotti->sizePolicy().hasHeightForWidth());
        tvProdotti->setSizePolicy(sizePolicy1);
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


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HProdottiNew);

        QMetaObject::connectSlotsByName(HProdottiNew);
    } // setupUi

    void retranslateUi(QWidget *HProdottiNew)
    {
        HProdottiNew->setWindowTitle(QCoreApplication::translate("HProdottiNew", "Prodotti", nullptr));
        label_2->setText(QCoreApplication::translate("HProdottiNew", "Tipo prodotto:", nullptr));
        chbBio->setText(QCoreApplication::translate("HProdottiNew", "Bio", nullptr));
        checkBox->setText(QCoreApplication::translate("HProdottiNew", "Solo prodotti attivi", nullptr));
        label->setText(QCoreApplication::translate("HProdottiNew", "Cerca prodotto", nullptr));
        pushButton->setText(QCoreApplication::translate("HProdottiNew", "Nuovo", nullptr));
        pbMod->setText(QCoreApplication::translate("HProdottiNew", "Modifica prodotto selezionato", nullptr));
        pbLoads->setText(QCoreApplication::translate("HProdottiNew", "Carichi/scarichi", nullptr));
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
