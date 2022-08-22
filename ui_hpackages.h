/********************************************************************************
** Form generated from reading UI file 'hpackages.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPACKAGES_H
#define UI_HPACKAGES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HPackages
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_3;
    QLabel *lbClienti;
    QComboBox *cbClienti;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QVBoxLayout *verticalLayout_2;
    QListView *lvSubclienti;
    QFormLayout *formLayout_4;
    QLabel *label;
    QComboBox *cbProdotti;
    QLabel *label_7;
    QLineEdit *leLest;
    QLabel *label_6;
    QFormLayout *formLayout_2;
    QLineEdit *leQuantLot;
    QComboBox *cbQua;
    QLabel *label_9;
    QDateEdit *dateEdit;
    QLabel *label_5;
    QTextEdit *teNote;
    QLabel *label_11;
    QListView *lvEan;
    QLineEdit *leOperatore;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbCrea;
    QPushButton *pbAnnulla;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QRadioButton *rbProdottiFiniti;
    QRadioButton *rbVasi;
    QRadioButton *rbTappi;
    QRadioButton *rbTutti;
    QTableView *tvLots;
    QLabel *label_10;
    QLineEdit *leSearch;
    QFormLayout *formLayout;
    QLabel *label_8;
    QLineEdit *leComponente;
    QLabel *label_4;
    QLineEdit *leQuantita;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbAddRow;
    QPushButton *pbRemoveRow;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *leNewLot;
    QTableView *tvPack;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QCheckBox *cb_unload;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HPackages)
    {
        if (HPackages->objectName().isEmpty())
            HPackages->setObjectName(QString::fromUtf8("HPackages"));
        HPackages->setWindowModality(Qt::NonModal);
        HPackages->resize(1257, 836);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HPackages->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(HPackages);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        lbClienti = new QLabel(HPackages);
        lbClienti->setObjectName(QString::fromUtf8("lbClienti"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, lbClienti);

        cbClienti = new QComboBox(HPackages);
        cbClienti->setObjectName(QString::fromUtf8("cbClienti"));
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cbClienti);

        checkBox_2 = new QCheckBox(HPackages);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox_2->setIcon(icon1);
        checkBox_2->setChecked(false);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, checkBox_2);

        checkBox = new QCheckBox(HPackages);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Book.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox->setIcon(icon2);
        checkBox->setChecked(true);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, checkBox);


        verticalLayout_3->addLayout(formLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lvSubclienti = new QListView(HPackages);
        lvSubclienti->setObjectName(QString::fromUtf8("lvSubclienti"));
        lvSubclienti->setMaximumSize(QSize(16777215, 120));

        verticalLayout_2->addWidget(lvSubclienti);


        verticalLayout_3->addLayout(verticalLayout_2);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label = new QLabel(HPackages);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label);

        cbProdotti = new QComboBox(HPackages);
        cbProdotti->setObjectName(QString::fromUtf8("cbProdotti"));
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, cbProdotti);

        label_7 = new QLabel(HPackages);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_7);

        leLest = new QLineEdit(HPackages);
        leLest->setObjectName(QString::fromUtf8("leLest"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, leLest);

        label_6 = new QLabel(HPackages);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_6);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        leQuantLot = new QLineEdit(HPackages);
        leQuantLot->setObjectName(QString::fromUtf8("leQuantLot"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, leQuantLot);

        cbQua = new QComboBox(HPackages);
        cbQua->setObjectName(QString::fromUtf8("cbQua"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, cbQua);


        formLayout_4->setLayout(3, QFormLayout::FieldRole, formLayout_2);

        label_9 = new QLabel(HPackages);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_9);

        dateEdit = new QDateEdit(HPackages);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, dateEdit);

        label_5 = new QLabel(HPackages);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_5);

        teNote = new QTextEdit(HPackages);
        teNote->setObjectName(QString::fromUtf8("teNote"));
        teNote->setMaximumSize(QSize(16777215, 120));

        formLayout_4->setWidget(5, QFormLayout::FieldRole, teNote);

        label_11 = new QLabel(HPackages);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_11);

        lvEan = new QListView(HPackages);
        lvEan->setObjectName(QString::fromUtf8("lvEan"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lvEan);

        leOperatore = new QLineEdit(HPackages);
        leOperatore->setObjectName(QString::fromUtf8("leOperatore"));

        formLayout_4->setWidget(6, QFormLayout::FieldRole, leOperatore);

        label_12 = new QLabel(HPackages);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_12);


        verticalLayout_3->addLayout(formLayout_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pbCrea = new QPushButton(HPackages);
        pbCrea->setObjectName(QString::fromUtf8("pbCrea"));
        pbCrea->setIcon(icon);

        horizontalLayout_4->addWidget(pbCrea);

        pbAnnulla = new QPushButton(HPackages);
        pbAnnulla->setObjectName(QString::fromUtf8("pbAnnulla"));
        pbAnnulla->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAnnulla->setIcon(icon3);

        horizontalLayout_4->addWidget(pbAnnulla);


        verticalLayout_3->addLayout(horizontalLayout_4);

        line = new QFrame(HPackages);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(HPackages);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        rbProdottiFiniti = new QRadioButton(HPackages);
        rbProdottiFiniti->setObjectName(QString::fromUtf8("rbProdottiFiniti"));
        rbProdottiFiniti->setChecked(true);

        horizontalLayout_3->addWidget(rbProdottiFiniti);

        rbVasi = new QRadioButton(HPackages);
        rbVasi->setObjectName(QString::fromUtf8("rbVasi"));

        horizontalLayout_3->addWidget(rbVasi);

        rbTappi = new QRadioButton(HPackages);
        rbTappi->setObjectName(QString::fromUtf8("rbTappi"));

        horizontalLayout_3->addWidget(rbTappi);

        rbTutti = new QRadioButton(HPackages);
        rbTutti->setObjectName(QString::fromUtf8("rbTutti"));
        rbTutti->setChecked(false);

        horizontalLayout_3->addWidget(rbTutti);


        verticalLayout->addLayout(horizontalLayout_3);

        tvLots = new QTableView(HPackages);
        tvLots->setObjectName(QString::fromUtf8("tvLots"));
        tvLots->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tvLots->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvLots->setAlternatingRowColors(true);
        tvLots->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvLots->setSortingEnabled(true);
        tvLots->horizontalHeader()->setCascadingSectionResizes(true);
        tvLots->horizontalHeader()->setStretchLastSection(true);
        tvLots->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvLots);

        label_10 = new QLabel(HPackages);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        leSearch = new QLineEdit(HPackages);
        leSearch->setObjectName(QString::fromUtf8("leSearch"));
        leSearch->setClearButtonEnabled(true);

        verticalLayout->addWidget(leSearch);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_8 = new QLabel(HPackages);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        leComponente = new QLineEdit(HPackages);
        leComponente->setObjectName(QString::fromUtf8("leComponente"));
        leComponente->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, leComponente);

        label_4 = new QLabel(HPackages);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        leQuantita = new QLineEdit(HPackages);
        leQuantita->setObjectName(QString::fromUtf8("leQuantita"));
        leQuantita->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, leQuantita);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbAddRow = new QPushButton(HPackages);
        pbAddRow->setObjectName(QString::fromUtf8("pbAddRow"));
        pbAddRow->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAddRow->setIcon(icon4);

        horizontalLayout_2->addWidget(pbAddRow);

        pbRemoveRow = new QPushButton(HPackages);
        pbRemoveRow->setObjectName(QString::fromUtf8("pbRemoveRow"));
        pbRemoveRow->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbRemoveRow->setIcon(icon5);

        horizontalLayout_2->addWidget(pbRemoveRow);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(HPackages);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        leNewLot = new QLineEdit(HPackages);
        leNewLot->setObjectName(QString::fromUtf8("leNewLot"));
        QPalette palette;
        QBrush brush(QColor(234, 234, 234, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(236, 233, 216, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        leNewLot->setPalette(palette);
        leNewLot->setReadOnly(false);

        horizontalLayout_5->addWidget(leNewLot);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout);


        horizontalLayout_6->addLayout(verticalLayout_3);

        tvPack = new QTableView(HPackages);
        tvPack->setObjectName(QString::fromUtf8("tvPack"));
        tvPack->setAlternatingRowColors(true);
        tvPack->setSelectionMode(QAbstractItemView::SingleSelection);
        tvPack->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvPack->horizontalHeader()->setVisible(false);

        horizontalLayout_6->addWidget(tvPack);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_3 = new QPushButton(HPackages);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);

        cb_unload = new QCheckBox(HPackages);
        cb_unload->setObjectName(QString::fromUtf8("cb_unload"));
        cb_unload->setMaximumSize(QSize(130, 16777215));
        cb_unload->setChecked(true);

        horizontalLayout->addWidget(cb_unload);

        pushButton_4 = new QPushButton(HPackages);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon7);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(HPackages);

        QMetaObject::connectSlotsByName(HPackages);
    } // setupUi

    void retranslateUi(QWidget *HPackages)
    {
        HPackages->setWindowTitle(QCoreApplication::translate("HPackages", "Packages", nullptr));
        lbClienti->setText(QCoreApplication::translate("HPackages", "Cliente:", nullptr));
        checkBox_2->setText(QCoreApplication::translate("HPackages", "Filtra i prodotti per subcliente", nullptr));
        checkBox->setText(QCoreApplication::translate("HPackages", "mostra i subclienti se presenti", nullptr));
        label->setText(QCoreApplication::translate("HPackages", "Prodotto:", nullptr));
        label_7->setText(QCoreApplication::translate("HPackages", "lotto (esterno)", nullptr));
        label_6->setText(QCoreApplication::translate("HPackages", "Quantit\303\240:", nullptr));
        label_9->setText(QCoreApplication::translate("HPackages", "Scadenza:", nullptr));
        label_5->setText(QCoreApplication::translate("HPackages", "Note:", nullptr));
        label_11->setText(QCoreApplication::translate("HPackages", "Lotti nell'anno", nullptr));
        label_12->setText(QCoreApplication::translate("HPackages", "Operatore:", nullptr));
        pbCrea->setText(QCoreApplication::translate("HPackages", "Inizia", nullptr));
        pbAnnulla->setText(QCoreApplication::translate("HPackages", "Annulla", nullptr));
        label_3->setText(QCoreApplication::translate("HPackages", "Componenti:", nullptr));
        rbProdottiFiniti->setText(QCoreApplication::translate("HPackages", "Prodotti finiti", nullptr));
        rbVasi->setText(QCoreApplication::translate("HPackages", "Vasi", nullptr));
        rbTappi->setText(QCoreApplication::translate("HPackages", "Tappi", nullptr));
        rbTutti->setText(QCoreApplication::translate("HPackages", "Tutti", nullptr));
        label_10->setText(QCoreApplication::translate("HPackages", "Cerca:", nullptr));
        label_8->setText(QCoreApplication::translate("HPackages", "Lotto:", nullptr));
        label_4->setText(QCoreApplication::translate("HPackages", "Quantit\303\240:", nullptr));
        pbAddRow->setText(QCoreApplication::translate("HPackages", "Aggiungi", nullptr));
        pbRemoveRow->setText(QCoreApplication::translate("HPackages", "Rimuovi", nullptr));
        label_2->setText(QCoreApplication::translate("HPackages", "Lotto interno creato:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HPackages", "Salva", nullptr));
        cb_unload->setText(QCoreApplication::translate("HPackages", "Scarico contestuale", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HPackages", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HPackages: public Ui_HPackages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPACKAGES_H
