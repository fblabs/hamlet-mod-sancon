/********************************************************************************
** Form generated from reading UI file 'hmodifyprod.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODIFYPROD_H
#define UI_HMODIFYPROD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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

class Ui_HModifyProd
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_6;
    QDateEdit *deDal;
    QLabel *label_9;
    QDateEdit *deAl;
    QLabel *label_5;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QTableView *tvLots;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *rbprod;
    QRadioButton *rblots;
    QLineEdit *leSearch;
    QPushButton *pushButton_7;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *lbProd;
    QTableView *tvDetails;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *leLotto;
    QLabel *label_6;
    QLineEdit *leQuantita;
    QLabel *label_7;
    QComboBox *cbUm;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HModifyProd)
    {
        if (HModifyProd->objectName().isEmpty())
            HModifyProd->setObjectName(QString::fromUtf8("HModifyProd"));
        HModifyProd->setWindowModality(Qt::NonModal);
        HModifyProd->resize(1143, 711);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HModifyProd->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HModifyProd);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(HModifyProd);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        radioButton_2 = new QRadioButton(HModifyProd);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_3->addWidget(radioButton_2);

        radioButton = new QRadioButton(HModifyProd);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_3->addWidget(radioButton);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_6 = new QPushButton(HModifyProd);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Counterclockwise-arrow64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);

        gridLayout_2->addWidget(pushButton_6, 0, 6, 1, 1);

        deDal = new QDateEdit(HModifyProd);
        deDal->setObjectName(QString::fromUtf8("deDal"));
        deDal->setCalendarPopup(true);

        gridLayout_2->addWidget(deDal, 0, 2, 1, 1);

        label_9 = new QLabel(HModifyProd);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 3, 1, 1);

        deAl = new QDateEdit(HModifyProd);
        deAl->setObjectName(QString::fromUtf8("deAl"));
        deAl->setCalendarPopup(true);

        gridLayout_2->addWidget(deAl, 0, 4, 1, 1);

        label_5 = new QLabel(HModifyProd);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_8 = new QLabel(HModifyProd);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 5, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        tvLots = new QTableView(HModifyProd);
        tvLots->setObjectName(QString::fromUtf8("tvLots"));
        tvLots->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvLots->setAlternatingRowColors(true);
        tvLots->setSelectionMode(QAbstractItemView::SingleSelection);
        tvLots->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvLots->setSortingEnabled(true);
        tvLots->horizontalHeader()->setStretchLastSection(true);
        tvLots->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvLots);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupBox = new QGroupBox(HModifyProd);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        horizontalLayout_6 = new QHBoxLayout(groupBox);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        rbprod = new QRadioButton(groupBox);
        rbprod->setObjectName(QString::fromUtf8("rbprod"));
        rbprod->setChecked(true);

        horizontalLayout_6->addWidget(rbprod);

        rblots = new QRadioButton(groupBox);
        rblots->setObjectName(QString::fromUtf8("rblots"));

        horizontalLayout_6->addWidget(rblots);


        horizontalLayout_5->addWidget(groupBox);

        leSearch = new QLineEdit(HModifyProd);
        leSearch->setObjectName(QString::fromUtf8("leSearch"));
        leSearch->setMaximumSize(QSize(16777215, 16777215));
        leSearch->setFrame(true);
        leSearch->setClearButtonEnabled(true);

        horizontalLayout_5->addWidget(leSearch);

        pushButton_7 = new QPushButton(HModifyProd);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_5->addWidget(pushButton_7);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(HModifyProd);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        lbProd = new QLabel(HModifyProd);
        lbProd->setObjectName(QString::fromUtf8("lbProd"));

        verticalLayout_3->addWidget(lbProd);

        tvDetails = new QTableView(HModifyProd);
        tvDetails->setObjectName(QString::fromUtf8("tvDetails"));
        tvDetails->setSelectionMode(QAbstractItemView::SingleSelection);
        tvDetails->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(tvDetails);

        pushButton_3 = new QPushButton(HModifyProd);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);

        verticalLayout_3->addWidget(pushButton_3);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_4 = new QLabel(HModifyProd);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        leLotto = new QLineEdit(HModifyProd);
        leLotto->setObjectName(QString::fromUtf8("leLotto"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leLotto);

        label_6 = new QLabel(HModifyProd);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        leQuantita = new QLineEdit(HModifyProd);
        leQuantita->setObjectName(QString::fromUtf8("leQuantita"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, leQuantita);

        label_7 = new QLabel(HModifyProd);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        cbUm = new QComboBox(HModifyProd);
        cbUm->setObjectName(QString::fromUtf8("cbUm"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, cbUm);


        verticalLayout_2->addLayout(formLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_4 = new QPushButton(HModifyProd);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(HModifyProd);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);

        horizontalLayout_2->addWidget(pushButton_5);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(HModifyProd);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HModifyProd);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon6);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(HModifyProd);

        QMetaObject::connectSlotsByName(HModifyProd);
    } // setupUi

    void retranslateUi(QWidget *HModifyProd)
    {
        HModifyProd->setWindowTitle(QCoreApplication::translate("HModifyProd", "Modifica Lotti", nullptr));
        label->setText(QCoreApplication::translate("HModifyProd", "Lotti:   ", nullptr));
        radioButton_2->setText(QCoreApplication::translate("HModifyProd", "Prodotti finiti", nullptr));
        radioButton->setText(QCoreApplication::translate("HModifyProd", "Packages", nullptr));
        pushButton_6->setText(QCoreApplication::translate("HModifyProd", "Aggiorna", nullptr));
        label_9->setText(QCoreApplication::translate("HModifyProd", "Al:", nullptr));
        label_5->setText(QCoreApplication::translate("HModifyProd", "Periodo:", nullptr));
        label_8->setText(QCoreApplication::translate("HModifyProd", "Dal:", nullptr));
        groupBox->setTitle(QString());
        rbprod->setText(QCoreApplication::translate("HModifyProd", "Cerca Prodotto", nullptr));
        rblots->setText(QCoreApplication::translate("HModifyProd", "Cerca lotto", nullptr));
        pushButton_7->setText(QCoreApplication::translate("HModifyProd", "Reset", nullptr));
        label_2->setText(QCoreApplication::translate("HModifyProd", "Composizione lotto:", nullptr));
        lbProd->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("HModifyProd", "Rimuovi componente selezionato", nullptr));
        label_4->setText(QCoreApplication::translate("HModifyProd", "lotto", nullptr));
        label_6->setText(QCoreApplication::translate("HModifyProd", "Quantita", nullptr));
        label_7->setText(QCoreApplication::translate("HModifyProd", "Unit\303\240 di misura", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HModifyProd", "Aggiungi", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HModifyProd", "Annulla aggiunta", nullptr));
        pushButton->setText(QCoreApplication::translate("HModifyProd", "Salva", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HModifyProd", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HModifyProd: public Ui_HModifyProd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODIFYPROD_H
