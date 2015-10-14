/********************************************************************************
** Form generated from reading UI file 'hanalisi.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANALISI_H
#define UI_HANALISI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDateEdit *deFrom;
    QLabel *label;
    QDateEdit *deTo;
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
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *leLot;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HAnalisi)
    {
        if (HAnalisi->objectName().isEmpty())
            HAnalisi->setObjectName(QStringLiteral("HAnalisi"));
        HAnalisi->setWindowModality(Qt::ApplicationModal);
        HAnalisi->resize(1279, 704);
        HAnalisi->setContextMenuPolicy(Qt::CustomContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Chart.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HAnalisi->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HAnalisi);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        cbClienti = new QComboBox(HAnalisi);
        cbClienti->setObjectName(QStringLiteral("cbClienti"));
        cbClienti->setEditable(true);

        verticalLayout_2->addWidget(cbClienti);

        tvYearlyProduction = new QTableView(HAnalisi);
        tvYearlyProduction->setObjectName(QStringLiteral("tvYearlyProduction"));
        tvYearlyProduction->setContextMenuPolicy(Qt::ActionsContextMenu);
        tvYearlyProduction->setAlternatingRowColors(true);
        tvYearlyProduction->setSelectionMode(QAbstractItemView::SingleSelection);
        tvYearlyProduction->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(tvYearlyProduction);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        checkBox = new QCheckBox(HAnalisi);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(HAnalisi);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        deFrom = new QDateEdit(HAnalisi);
        deFrom->setObjectName(QStringLiteral("deFrom"));

        horizontalLayout->addWidget(deFrom);

        label = new QLabel(HAnalisi);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        deTo = new QDateEdit(HAnalisi);
        deTo->setObjectName(QStringLiteral("deTo"));

        horizontalLayout->addWidget(deTo);

        pushButton = new QPushButton(HAnalisi);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(HAnalisi);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        rbAll = new QRadioButton(HAnalisi);
        rbAll->setObjectName(QStringLiteral("rbAll"));
        rbAll->setChecked(false);

        horizontalLayout_2->addWidget(rbAll);

        rbProdottifiniti = new QRadioButton(HAnalisi);
        rbProdottifiniti->setObjectName(QStringLiteral("rbProdottifiniti"));
        rbProdottifiniti->setChecked(false);

        horizontalLayout_2->addWidget(rbProdottifiniti);

        rbPackages = new QRadioButton(HAnalisi);
        rbPackages->setObjectName(QStringLiteral("rbPackages"));
        rbPackages->setChecked(true);

        horizontalLayout_2->addWidget(rbPackages);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tvLots = new QTableView(HAnalisi);
        tvLots->setObjectName(QStringLiteral("tvLots"));
        tvLots->setContextMenuPolicy(Qt::CustomContextMenu);
        tvLots->setAlternatingRowColors(true);
        tvLots->setSelectionMode(QAbstractItemView::SingleSelection);
        tvLots->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvLots->verticalHeader()->setVisible(false);
        tvLots->verticalHeader()->setHighlightSections(false);

        verticalLayout_2->addWidget(tvLots);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tvComp = new QTableView(HAnalisi);
        tvComp->setObjectName(QStringLiteral("tvComp"));
        tvComp->setContextMenuPolicy(Qt::CustomContextMenu);
        tvComp->setAlternatingRowColors(true);
        tvComp->setSelectionMode(QAbstractItemView::SingleSelection);
        tvComp->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvComp->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvComp);

        tvNarrow = new QTableView(HAnalisi);
        tvNarrow->setObjectName(QStringLiteral("tvNarrow"));
        tvNarrow->setContextMenuPolicy(Qt::ActionsContextMenu);
        tvNarrow->setAlternatingRowColors(true);
        tvNarrow->setSelectionMode(QAbstractItemView::SingleSelection);
        tvNarrow->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvNarrow->setSortingEnabled(true);
        tvNarrow->setCornerButtonEnabled(false);
        tvNarrow->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvNarrow);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(HAnalisi);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Search.PNG")));
        label_6->setScaledContents(true);

        horizontalLayout_4->addWidget(label_6);

        label_5 = new QLabel(HAnalisi);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        leLot = new QLineEdit(HAnalisi);
        leLot->setObjectName(QStringLiteral("leLot"));
        leLot->setClearButtonEnabled(true);

        horizontalLayout_4->addWidget(leLot);

        pushButton_4 = new QPushButton(HAnalisi);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_4->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(HAnalisi);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_4->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_3 = new QPushButton(HAnalisi);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);

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
        HAnalisi->setWindowTitle(QApplication::translate("HAnalisi", "Analisi", 0));
        checkBox->setText(QApplication::translate("HAnalisi", "filtra per prodotto selezionato", 0));
        label_2->setText(QApplication::translate("HAnalisi", "Dal:", 0));
        label->setText(QApplication::translate("HAnalisi", "Al:", 0));
        pushButton->setText(QApplication::translate("HAnalisi", "Filtra", 0));
        label_4->setText(QApplication::translate("HAnalisi", "Tipo di lotti:", 0));
        rbAll->setText(QApplication::translate("HAnalisi", "Tutti", 0));
        rbProdottifiniti->setText(QApplication::translate("HAnalisi", "Prodotti finiti", 0));
        rbPackages->setText(QApplication::translate("HAnalisi", "Packages", 0));
        label_6->setText(QString());
        label_5->setText(QApplication::translate("HAnalisi", "Cerca lotto:", 0));
        pushButton_4->setText(QApplication::translate("HAnalisi", "Cerca ingredienti", 0));
        pushButton_5->setText(QApplication::translate("HAnalisi", "Cerca uso", 0));
        pushButton_3->setText(QApplication::translate("HAnalisi", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HAnalisi: public Ui_HAnalisi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANALISI_H
