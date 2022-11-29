/********************************************************************************
** Form generated from reading UI file 'hanalisi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANALISI_H
#define UI_HANALISI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HAnalisi
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QComboBox *cbClienti;
    QTableView *tvYearlyProduction;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDateEdit *deFrom;
    QLabel *label;
    QDateEdit *deTo;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QRadioButton *rbAll;
    QRadioButton *rbProdottifiniti;
    QRadioButton *rbPackages;
    QTableView *tvLots;
    QVBoxLayout *verticalLayout;
    QTableView *tvComp;
    QTableView *tvNarrow;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *leLot;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pbBioData;
    QPushButton *pbPrint;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HAnalisi)
    {
        if (HAnalisi->objectName().isEmpty())
            HAnalisi->setObjectName(QString::fromUtf8("HAnalisi"));
        HAnalisi->setWindowModality(Qt::NonModal);
        HAnalisi->resize(901, 704);
        HAnalisi->setContextMenuPolicy(Qt::CustomContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Chart.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HAnalisi->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HAnalisi);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        cbClienti = new QComboBox(HAnalisi);
        cbClienti->setObjectName(QString::fromUtf8("cbClienti"));
        cbClienti->setEditable(true);

        verticalLayout_2->addWidget(cbClienti);

        tvYearlyProduction = new QTableView(HAnalisi);
        tvYearlyProduction->setObjectName(QString::fromUtf8("tvYearlyProduction"));
        tvYearlyProduction->setContextMenuPolicy(Qt::ActionsContextMenu);
        tvYearlyProduction->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvYearlyProduction->setAlternatingRowColors(true);
        tvYearlyProduction->setSelectionMode(QAbstractItemView::SingleSelection);
        tvYearlyProduction->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvYearlyProduction->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tvYearlyProduction);

        checkBox = new QCheckBox(HAnalisi);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(false);

        verticalLayout_2->addWidget(checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(HAnalisi);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        deFrom = new QDateEdit(HAnalisi);
        deFrom->setObjectName(QString::fromUtf8("deFrom"));

        horizontalLayout->addWidget(deFrom);

        label = new QLabel(HAnalisi);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        deTo = new QDateEdit(HAnalisi);
        deTo->setObjectName(QString::fromUtf8("deTo"));

        horizontalLayout->addWidget(deTo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(HAnalisi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(HAnalisi);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        rbAll = new QRadioButton(HAnalisi);
        rbAll->setObjectName(QString::fromUtf8("rbAll"));
        rbAll->setChecked(true);

        horizontalLayout_2->addWidget(rbAll);

        rbProdottifiniti = new QRadioButton(HAnalisi);
        rbProdottifiniti->setObjectName(QString::fromUtf8("rbProdottifiniti"));
        rbProdottifiniti->setChecked(false);

        horizontalLayout_2->addWidget(rbProdottifiniti);

        rbPackages = new QRadioButton(HAnalisi);
        rbPackages->setObjectName(QString::fromUtf8("rbPackages"));
        rbPackages->setChecked(false);

        horizontalLayout_2->addWidget(rbPackages);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tvLots = new QTableView(HAnalisi);
        tvLots->setObjectName(QString::fromUtf8("tvLots"));
        tvLots->setContextMenuPolicy(Qt::CustomContextMenu);
        tvLots->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvLots->setAlternatingRowColors(true);
        tvLots->setSelectionMode(QAbstractItemView::SingleSelection);
        tvLots->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvLots->verticalHeader()->setVisible(false);
        tvLots->verticalHeader()->setHighlightSections(false);

        verticalLayout_2->addWidget(tvLots);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tvComp = new QTableView(HAnalisi);
        tvComp->setObjectName(QString::fromUtf8("tvComp"));
        tvComp->setContextMenuPolicy(Qt::CustomContextMenu);
        tvComp->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvComp->setAlternatingRowColors(true);
        tvComp->setSelectionMode(QAbstractItemView::SingleSelection);
        tvComp->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvComp->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvComp);

        tvNarrow = new QTableView(HAnalisi);
        tvNarrow->setObjectName(QString::fromUtf8("tvNarrow"));
        tvNarrow->setContextMenuPolicy(Qt::ActionsContextMenu);
        tvNarrow->setAlternatingRowColors(true);
        tvNarrow->setSelectionMode(QAbstractItemView::SingleSelection);
        tvNarrow->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvNarrow->setSortingEnabled(true);
        tvNarrow->setCornerButtonEnabled(false);
        tvNarrow->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvNarrow);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(HAnalisi);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        leLot = new QLineEdit(HAnalisi);
        leLot->setObjectName(QString::fromUtf8("leLot"));
        leLot->setClearButtonEnabled(true);

        horizontalLayout_4->addWidget(leLot);

        pushButton_4 = new QPushButton(HAnalisi);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);

        horizontalLayout_4->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(HAnalisi);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setIcon(icon1);

        horizontalLayout_4->addWidget(pushButton_5);

        pbBioData = new QPushButton(HAnalisi);
        pbBioData->setObjectName(QString::fromUtf8("pbBioData"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Bar-chart64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbBioData->setIcon(icon3);

        horizontalLayout_4->addWidget(pbBioData);

        pbPrint = new QPushButton(HAnalisi);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon4);

        horizontalLayout_4->addWidget(pbPrint);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_3 = new QPushButton(HAnalisi);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon5);

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(HAnalisi);
        QObject::connect(tvLots, SIGNAL(customContextMenuRequested(QPoint)), HAnalisi, SLOT(doMenu()));

        cbClienti->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(HAnalisi);
    } // setupUi

    void retranslateUi(QWidget *HAnalisi)
    {
        HAnalisi->setWindowTitle(QCoreApplication::translate("HAnalisi", "Analisi", nullptr));
        checkBox->setText(QCoreApplication::translate("HAnalisi", "filtra per prodotto selezionato", nullptr));
        label_2->setText(QCoreApplication::translate("HAnalisi", "Dal:", nullptr));
        label->setText(QCoreApplication::translate("HAnalisi", "Al:", nullptr));
        pushButton->setText(QCoreApplication::translate("HAnalisi", "Filtra", nullptr));
        label_4->setText(QCoreApplication::translate("HAnalisi", "Tipo di lotti:", nullptr));
        rbAll->setText(QCoreApplication::translate("HAnalisi", "Tutti", nullptr));
        rbProdottifiniti->setText(QCoreApplication::translate("HAnalisi", "Prodotti finiti", nullptr));
        rbPackages->setText(QCoreApplication::translate("HAnalisi", "Packages", nullptr));
        label_5->setText(QCoreApplication::translate("HAnalisi", "Cerca lotto:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HAnalisi", "Cerca ingredienti", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HAnalisi", "Cerca uso", nullptr));
        pbBioData->setText(QCoreApplication::translate("HAnalisi", "Dati Biometrici", nullptr));
        pbPrint->setText(QCoreApplication::translate("HAnalisi", "Stampa", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HAnalisi", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HAnalisi: public Ui_HAnalisi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANALISI_H
