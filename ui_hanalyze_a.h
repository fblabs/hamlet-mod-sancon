/********************************************************************************
** Form generated from reading UI file 'hanalyze_a.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANALYZE_A_H
#define UI_HANALYZE_A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HAnalyze_a
{
public:
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbAnagrafica;
    QRadioButton *rbProdotti;
    QComboBox *cbProdotti;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateDal;
    QLabel *label_2;
    QDateEdit *dateAl;
    QPushButton *pushButton_3;
    QListView *lvWhat;
    QPushButton *pbFilter;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rbAll;
    QRadioButton *rbMateriePrime;
    QRadioButton *rbProdottiFiniti;
    QRadioButton *rbSemilavorati;
    QRadioButton *rbPackage;
    QFrame *line;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QTableView *tvMain;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *rbLes;
    QRadioButton *rbLin;
    QVBoxLayout *verticalLayout_3;
    QTableView *tvDetails;
    QTableView *tableView;
    QTableView *tvDetailsLot;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *HAnalyze_a)
    {
        if (HAnalyze_a->objectName().isEmpty())
            HAnalyze_a->setObjectName(QStringLiteral("HAnalyze_a"));
        HAnalyze_a->setWindowModality(Qt::ApplicationModal);
        HAnalyze_a->resize(1280, 781);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Chart.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HAnalyze_a->setWindowIcon(icon);
        verticalLayout_8 = new QVBoxLayout(HAnalyze_a);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox = new QGroupBox(HAnalyze_a);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        rbAnagrafica = new QRadioButton(groupBox);
        rbAnagrafica->setObjectName(QStringLiteral("rbAnagrafica"));
        rbAnagrafica->setChecked(true);

        horizontalLayout_2->addWidget(rbAnagrafica);

        rbProdotti = new QRadioButton(groupBox);
        rbProdotti->setObjectName(QStringLiteral("rbProdotti"));
        rbProdotti->setChecked(false);

        horizontalLayout_2->addWidget(rbProdotti);


        verticalLayout->addLayout(horizontalLayout_2);

        cbProdotti = new QComboBox(groupBox);
        cbProdotti->setObjectName(QStringLiteral("cbProdotti"));
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout->addWidget(cbProdotti);


        verticalLayout_6->addWidget(groupBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HAnalyze_a);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        dateDal = new QDateEdit(HAnalyze_a);
        dateDal->setObjectName(QStringLiteral("dateDal"));

        horizontalLayout->addWidget(dateDal);

        label_2 = new QLabel(HAnalyze_a);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(label_2);

        dateAl = new QDateEdit(HAnalyze_a);
        dateAl->setObjectName(QStringLiteral("dateAl"));

        horizontalLayout->addWidget(dateAl);

        pushButton_3 = new QPushButton(HAnalyze_a);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout);

        lvWhat = new QListView(HAnalyze_a);
        lvWhat->setObjectName(QStringLiteral("lvWhat"));

        verticalLayout_2->addWidget(lvWhat);

        pbFilter = new QPushButton(HAnalyze_a);
        pbFilter->setObjectName(QStringLiteral("pbFilter"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbFilter->setIcon(icon1);
        pbFilter->setCheckable(true);
        pbFilter->setFlat(false);

        verticalLayout_2->addWidget(pbFilter);

        groupBox_2 = new QGroupBox(HAnalyze_a);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 40));
        groupBox_2->setFlat(false);
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        rbAll = new QRadioButton(groupBox_2);
        rbAll->setObjectName(QStringLiteral("rbAll"));
        rbAll->setChecked(true);

        horizontalLayout_4->addWidget(rbAll);

        rbMateriePrime = new QRadioButton(groupBox_2);
        rbMateriePrime->setObjectName(QStringLiteral("rbMateriePrime"));

        horizontalLayout_4->addWidget(rbMateriePrime);

        rbProdottiFiniti = new QRadioButton(groupBox_2);
        rbProdottiFiniti->setObjectName(QStringLiteral("rbProdottiFiniti"));

        horizontalLayout_4->addWidget(rbProdottiFiniti);

        rbSemilavorati = new QRadioButton(groupBox_2);
        rbSemilavorati->setObjectName(QStringLiteral("rbSemilavorati"));

        horizontalLayout_4->addWidget(rbSemilavorati);

        rbPackage = new QRadioButton(groupBox_2);
        rbPackage->setObjectName(QStringLiteral("rbPackage"));

        horizontalLayout_4->addWidget(rbPackage);

        line = new QFrame(groupBox_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox_2);

        tvMain = new QTableView(HAnalyze_a);
        tvMain->setObjectName(QStringLiteral("tvMain"));
        tvMain->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvMain->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tvMain);

        groupBox_3 = new QGroupBox(HAnalyze_a);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 40));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        rbLes = new QRadioButton(groupBox_3);
        rbLes->setObjectName(QStringLiteral("rbLes"));
        rbLes->setChecked(true);

        horizontalLayout_5->addWidget(rbLes);

        rbLin = new QRadioButton(groupBox_3);
        rbLin->setObjectName(QStringLiteral("rbLin"));
        rbLin->setChecked(false);

        horizontalLayout_5->addWidget(rbLin);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(groupBox_3);


        verticalLayout_6->addLayout(verticalLayout_2);


        horizontalLayout_6->addLayout(verticalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tvDetails = new QTableView(HAnalyze_a);
        tvDetails->setObjectName(QStringLiteral("tvDetails"));
        tvDetails->setMaximumSize(QSize(16777215, 80));
        tvDetails->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tvDetails->setAlternatingRowColors(true);
        tvDetails->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvDetails->setSortingEnabled(false);
        tvDetails->horizontalHeader()->setStretchLastSection(true);
        tvDetails->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tvDetails);

        tableView = new QTableView(HAnalyze_a);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMaximumSize(QSize(16777215, 200));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(tableView);

        tvDetailsLot = new QTableView(HAnalyze_a);
        tvDetailsLot->setObjectName(QStringLiteral("tvDetailsLot"));
        tvDetailsLot->setSelectionMode(QAbstractItemView::SingleSelection);
        tvDetailsLot->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvDetailsLot->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(tvDetailsLot);


        horizontalLayout_6->addLayout(verticalLayout_3);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_2 = new QPushButton(HAnalyze_a);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton = new QPushButton(HAnalyze_a);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout_8->addLayout(verticalLayout_7);


        retranslateUi(HAnalyze_a);

        QMetaObject::connectSlotsByName(HAnalyze_a);
    } // setupUi

    void retranslateUi(QWidget *HAnalyze_a)
    {
        HAnalyze_a->setWindowTitle(QApplication::translate("HAnalyze_a", "Analisi", 0));
        groupBox->setTitle(QApplication::translate("HAnalyze_a", "Analizza", 0));
        rbAnagrafica->setText(QApplication::translate("HAnalyze_a", "Anagrafica", 0));
        rbProdotti->setText(QApplication::translate("HAnalyze_a", "Prodotti", 0));
        label->setText(QApplication::translate("HAnalyze_a", "Dal:", 0));
        label_2->setText(QApplication::translate("HAnalyze_a", "Al:", 0));
        pushButton_3->setText(QApplication::translate("HAnalyze_a", "Filtra per data", 0));
        pbFilter->setText(QApplication::translate("HAnalyze_a", "Filtra per prodotto selezionato", 0));
        groupBox_2->setTitle(QString());
        rbAll->setText(QApplication::translate("HAnalyze_a", "Tutti", 0));
        rbMateriePrime->setText(QApplication::translate("HAnalyze_a", "Materie prime", 0));
        rbProdottiFiniti->setText(QApplication::translate("HAnalyze_a", "Prodotti finiti", 0));
        rbSemilavorati->setText(QApplication::translate("HAnalyze_a", "Semilavorati", 0));
        rbPackage->setText(QApplication::translate("HAnalyze_a", "Package", 0));
        label_3->setText(QApplication::translate("HAnalyze_a", "Cerca", 0));
        groupBox_3->setTitle(QString());
        rbLes->setText(QApplication::translate("HAnalyze_a", "Lotto Esterno", 0));
        rbLin->setText(QApplication::translate("HAnalyze_a", "Lotto interno", 0));
        pushButton_2->setText(QApplication::translate("HAnalyze_a", "Stampa", 0));
        pushButton->setText(QApplication::translate("HAnalyze_a", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HAnalyze_a: public Ui_HAnalyze_a {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANALYZE_A_H
