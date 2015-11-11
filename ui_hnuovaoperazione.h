/********************************************************************************
** Form generated from reading UI file 'hnuovaoperazione.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNUOVAOPERAZIONE_H
#define UI_HNUOVAOPERAZIONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HnuovaOperazione
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QComboBox *cbAnagrafica;
    QListView *lvProdotti;
    QLabel *label_12;
    QLineEdit *leProdotti;
    QLabel *label_2;
    QComboBox *cbtipo;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *leEAN;
    QLabel *label_6;
    QDateEdit *deScadenza;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *leNewLot;
    QLineEdit *leQuantita;
    QLineEdit *leLotfornitore;
    QComboBox *cbUM;
    QLabel *label_9;
    QLineEdit *leLotto;
    QLabel *label_10;
    QLabel *label_11;
    QComboBox *cbTipoLot;
    QCheckBox *cbScadenza;
    QLineEdit *leProdottoCreato;
    QLabel *label_4;
    QPlainTextEdit *tNote;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HnuovaOperazione)
    {
        if (HnuovaOperazione->objectName().isEmpty())
            HnuovaOperazione->setObjectName(QStringLiteral("HnuovaOperazione"));
        HnuovaOperazione->setWindowModality(Qt::NonModal);
        HnuovaOperazione->resize(1285, 652);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HnuovaOperazione->sizePolicy().hasHeightForWidth());
        HnuovaOperazione->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HnuovaOperazione->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HnuovaOperazione);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        widget = new QWidget(HnuovaOperazione);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);


        verticalLayout->addLayout(horizontalLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        cbAnagrafica = new QComboBox(widget);
        cbAnagrafica->setObjectName(QStringLiteral("cbAnagrafica"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, cbAnagrafica);


        verticalLayout->addLayout(formLayout_2);

        lvProdotti = new QListView(widget);
        lvProdotti->setObjectName(QStringLiteral("lvProdotti"));

        verticalLayout->addWidget(lvProdotti);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout->addWidget(label_12);

        leProdotti = new QLineEdit(widget);
        leProdotti->setObjectName(QStringLiteral("leProdotti"));

        verticalLayout->addWidget(leProdotti);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        cbtipo = new QComboBox(widget);
        cbtipo->setObjectName(QStringLiteral("cbtipo"));

        verticalLayout->addWidget(cbtipo);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 5, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        leEAN = new QLineEdit(widget);
        leEAN->setObjectName(QStringLiteral("leEAN"));
        leEAN->setEnabled(false);

        gridLayout->addWidget(leEAN, 4, 7, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        deScadenza = new QDateEdit(widget);
        deScadenza->setObjectName(QStringLiteral("deScadenza"));

        gridLayout->addWidget(deScadenza, 2, 2, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 4, 5, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        leNewLot = new QLineEdit(widget);
        leNewLot->setObjectName(QStringLiteral("leNewLot"));
        leNewLot->setReadOnly(true);

        gridLayout->addWidget(leNewLot, 2, 7, 1, 1);

        leQuantita = new QLineEdit(widget);
        leQuantita->setObjectName(QStringLiteral("leQuantita"));

        gridLayout->addWidget(leQuantita, 1, 2, 1, 1);

        leLotfornitore = new QLineEdit(widget);
        leLotfornitore->setObjectName(QStringLiteral("leLotfornitore"));

        gridLayout->addWidget(leLotfornitore, 4, 2, 1, 1);

        cbUM = new QComboBox(widget);
        cbUM->setObjectName(QStringLiteral("cbUM"));

        gridLayout->addWidget(cbUM, 1, 7, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 2, 5, 1, 1);

        leLotto = new QLineEdit(widget);
        leLotto->setObjectName(QStringLiteral("leLotto"));

        gridLayout->addWidget(leLotto, 0, 2, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 0, 5, 1, 1);

        cbTipoLot = new QComboBox(widget);
        cbTipoLot->setObjectName(QStringLiteral("cbTipoLot"));

        gridLayout->addWidget(cbTipoLot, 0, 7, 1, 1);

        cbScadenza = new QCheckBox(widget);
        cbScadenza->setObjectName(QStringLiteral("cbScadenza"));

        gridLayout->addWidget(cbScadenza, 2, 1, 1, 1);

        leProdottoCreato = new QLineEdit(widget);
        leProdottoCreato->setObjectName(QStringLiteral("leProdottoCreato"));
        leProdottoCreato->setReadOnly(true);

        gridLayout->addWidget(leProdottoCreato, 3, 7, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        tNote = new QPlainTextEdit(widget);
        tNote->setObjectName(QStringLiteral("tNote"));

        verticalLayout->addWidget(tNote);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_4->addWidget(widget);

        tableView = new QTableView(HnuovaOperazione);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->verticalHeader()->setVisible(false);

        horizontalLayout_4->addWidget(tableView);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(HnuovaOperazione);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_4 = new QPushButton(HnuovaOperazione);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(HnuovaOperazione);

        QMetaObject::connectSlotsByName(HnuovaOperazione);
    } // setupUi

    void retranslateUi(QWidget *HnuovaOperazione)
    {
        HnuovaOperazione->setWindowTitle(QApplication::translate("HnuovaOperazione", "Nuova operazione", 0));
        radioButton->setText(QApplication::translate("HnuovaOperazione", "Carico", 0));
        radioButton_2->setText(QApplication::translate("HnuovaOperazione", "Scarico", 0));
        label->setText(QApplication::translate("HnuovaOperazione", "Fornitore", 0));
        label_12->setText(QApplication::translate("HnuovaOperazione", "Cerca:", 0));
        label_2->setText(QApplication::translate("HnuovaOperazione", "Ricerca per tipologia prodotti", 0));
        label_5->setText(QApplication::translate("HnuovaOperazione", " U.M.", 0));
        label_3->setText(QApplication::translate("HnuovaOperazione", "Quantit\303\240:", 0));
        label_6->setText(QApplication::translate("HnuovaOperazione", "Lotto fornitore", 0));
        label_8->setText(QApplication::translate("HnuovaOperazione", "Lotto di uscita", 0));
        label_7->setText(QApplication::translate("HnuovaOperazione", "Scadenza", 0));
        label_9->setText(QApplication::translate("HnuovaOperazione", "Nuovo Lotto", 0));
        label_10->setText(QApplication::translate("HnuovaOperazione", "Lotto", 0));
        label_11->setText(QApplication::translate("HnuovaOperazione", "Tipo", 0));
        cbScadenza->setText(QApplication::translate("HnuovaOperazione", "Nessuna scadenza", 0));
        label_4->setText(QApplication::translate("HnuovaOperazione", "Note:", 0));
        pushButton->setText(QApplication::translate("HnuovaOperazione", "Salva operazione", 0));
        pushButton_4->setText(QApplication::translate("HnuovaOperazione", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HnuovaOperazione: public Ui_HnuovaOperazione {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNUOVAOPERAZIONE_H
