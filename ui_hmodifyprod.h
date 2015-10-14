/********************************************************************************
** Form generated from reading UI file 'hmodifyprod.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODIFYPROD_H
#define UI_HMODIFYPROD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
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
    QTableView *tvLots;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
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
            HModifyProd->setObjectName(QStringLiteral("HModifyProd"));
        HModifyProd->setWindowModality(Qt::ApplicationModal);
        HModifyProd->resize(1143, 711);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HModifyProd->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HModifyProd);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(HModifyProd);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        radioButton_2 = new QRadioButton(HModifyProd);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_3->addWidget(radioButton_2);

        radioButton = new QRadioButton(HModifyProd);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_3->addWidget(radioButton);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_6 = new QPushButton(HModifyProd);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 0, 5, 1, 1);

        deDal = new QDateEdit(HModifyProd);
        deDal->setObjectName(QStringLiteral("deDal"));

        gridLayout_2->addWidget(deDal, 0, 2, 1, 1);

        label_9 = new QLabel(HModifyProd);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 0, 3, 1, 1);

        deAl = new QDateEdit(HModifyProd);
        deAl->setObjectName(QStringLiteral("deAl"));

        gridLayout_2->addWidget(deAl, 0, 4, 1, 1);

        label_5 = new QLabel(HModifyProd);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_8 = new QLabel(HModifyProd);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 0, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        tvLots = new QTableView(HModifyProd);
        tvLots->setObjectName(QStringLiteral("tvLots"));
        tvLots->setSelectionMode(QAbstractItemView::SingleSelection);
        tvLots->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvLots->setSortingEnabled(true);
        tvLots->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tvLots);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(HModifyProd);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        leSearch = new QLineEdit(HModifyProd);
        leSearch->setObjectName(QStringLiteral("leSearch"));
        leSearch->setFrame(true);
        leSearch->setClearButtonEnabled(true);

        horizontalLayout_5->addWidget(leSearch);

        pushButton_7 = new QPushButton(HModifyProd);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_5->addWidget(pushButton_7);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(HModifyProd);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        lbProd = new QLabel(HModifyProd);
        lbProd->setObjectName(QStringLiteral("lbProd"));

        verticalLayout_3->addWidget(lbProd);

        tvDetails = new QTableView(HModifyProd);
        tvDetails->setObjectName(QStringLiteral("tvDetails"));
        tvDetails->setSelectionMode(QAbstractItemView::SingleSelection);
        tvDetails->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(tvDetails);

        pushButton_3 = new QPushButton(HModifyProd);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);

        verticalLayout_3->addWidget(pushButton_3);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_4 = new QLabel(HModifyProd);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        leLotto = new QLineEdit(HModifyProd);
        leLotto->setObjectName(QStringLiteral("leLotto"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leLotto);

        label_6 = new QLabel(HModifyProd);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        leQuantita = new QLineEdit(HModifyProd);
        leQuantita->setObjectName(QStringLiteral("leQuantita"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, leQuantita);

        label_7 = new QLabel(HModifyProd);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        cbUm = new QComboBox(HModifyProd);
        cbUm->setObjectName(QStringLiteral("cbUm"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, cbUm);


        verticalLayout_2->addLayout(formLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_4 = new QPushButton(HModifyProd);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(HModifyProd);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);

        horizontalLayout_2->addWidget(pushButton_5);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(HModifyProd);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HModifyProd);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon5);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(HModifyProd);

        QMetaObject::connectSlotsByName(HModifyProd);
    } // setupUi

    void retranslateUi(QWidget *HModifyProd)
    {
        HModifyProd->setWindowTitle(QApplication::translate("HModifyProd", "Modifica Lotti", 0));
        label->setText(QApplication::translate("HModifyProd", "Lotti", 0));
        radioButton_2->setText(QApplication::translate("HModifyProd", "Prodotti finiti", 0));
        radioButton->setText(QApplication::translate("HModifyProd", "Packages", 0));
        pushButton_6->setText(QApplication::translate("HModifyProd", "Aggiorna", 0));
        label_9->setText(QApplication::translate("HModifyProd", "Al:", 0));
        label_5->setText(QApplication::translate("HModifyProd", "Periodo:", 0));
        label_8->setText(QApplication::translate("HModifyProd", "Dal:", 0));
        label_3->setText(QApplication::translate("HModifyProd", "Cerca", 0));
        pushButton_7->setText(QApplication::translate("HModifyProd", "Reset", 0));
        label_2->setText(QApplication::translate("HModifyProd", "Composizione lotto:", 0));
        lbProd->setText(QString());
        pushButton_3->setText(QApplication::translate("HModifyProd", "Rimuovi componente selezionato", 0));
        label_4->setText(QApplication::translate("HModifyProd", "lotto", 0));
        label_6->setText(QApplication::translate("HModifyProd", "Quantita", 0));
        label_7->setText(QApplication::translate("HModifyProd", "Unit\303\240 di misura", 0));
        pushButton_4->setText(QApplication::translate("HModifyProd", "Aggiungi", 0));
        pushButton_5->setText(QApplication::translate("HModifyProd", "Annulla aggiunta", 0));
        pushButton->setText(QApplication::translate("HModifyProd", "Salva", 0));
        pushButton_2->setText(QApplication::translate("HModifyProd", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HModifyProd: public Ui_HModifyProd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODIFYPROD_H
