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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
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
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QLabel *label_5;
    QLabel *label_8;
    QDateEdit *deDal;
    QLabel *label_9;
    QDateEdit *deAl;
    QSpacerItem *horizontalSpacer;
    QTableView *tvLots;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbprod;
    QRadioButton *rblots;
    QLineEdit *leSearch;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pbUpdateAmount;
    QPushButton *pushButton_7;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *lbProd;
    QTableView *tvDetails;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rbNoAction;
    QRadioButton *rbAdd;
    QRadioButton *rbDelete;
    QRadioButton *rbUpdate;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *leQuantita;
    QLabel *label_7;
    QComboBox *cbUm;
    QLineEdit *leLotto;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QWidget *HModifyProd)
    {
        if (HModifyProd->objectName().isEmpty())
            HModifyProd->setObjectName(QString::fromUtf8("HModifyProd"));
        HModifyProd->setWindowModality(Qt::NonModal);
        HModifyProd->resize(1143, 728);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HModifyProd->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(HModifyProd);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HModifyProd);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        radioButton_2 = new QRadioButton(HModifyProd);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setChecked(true);

        horizontalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(HModifyProd);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(false);

        horizontalLayout->addWidget(radioButton);

        label_5 = new QLabel(HModifyProd);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        label_8 = new QLabel(HModifyProd);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        deDal = new QDateEdit(HModifyProd);
        deDal->setObjectName(QString::fromUtf8("deDal"));
        deDal->setCalendarPopup(true);

        horizontalLayout->addWidget(deDal);

        label_9 = new QLabel(HModifyProd);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        deAl = new QDateEdit(HModifyProd);
        deAl->setObjectName(QString::fromUtf8("deAl"));
        deAl->setCalendarPopup(true);

        horizontalLayout->addWidget(deAl);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        tvLots = new QTableView(HModifyProd);
        tvLots->setObjectName(QString::fromUtf8("tvLots"));
        tvLots->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvLots->setAlternatingRowColors(true);
        tvLots->setSelectionMode(QAbstractItemView::SingleSelection);
        tvLots->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvLots->setSortingEnabled(true);
        tvLots->horizontalHeader()->setStretchLastSection(true);
        tvLots->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tvLots);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rbprod = new QRadioButton(HModifyProd);
        buttonGroup_2 = new QButtonGroup(HModifyProd);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(rbprod);
        rbprod->setObjectName(QString::fromUtf8("rbprod"));
        rbprod->setChecked(true);

        horizontalLayout_2->addWidget(rbprod);

        rblots = new QRadioButton(HModifyProd);
        buttonGroup_2->addButton(rblots);
        rblots->setObjectName(QString::fromUtf8("rblots"));

        horizontalLayout_2->addWidget(rblots);


        horizontalLayout_7->addLayout(horizontalLayout_2);

        leSearch = new QLineEdit(HModifyProd);
        leSearch->setObjectName(QString::fromUtf8("leSearch"));
        leSearch->setMaximumSize(QSize(16777215, 16777215));
        leSearch->setFrame(true);
        leSearch->setClearButtonEnabled(true);

        horizontalLayout_7->addWidget(leSearch);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pbUpdateAmount = new QPushButton(HModifyProd);
        pbUpdateAmount->setObjectName(QString::fromUtf8("pbUpdateAmount"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Line-chart64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbUpdateAmount->setIcon(icon1);
        pbUpdateAmount->setIconSize(QSize(32, 32));

        horizontalLayout_6->addWidget(pbUpdateAmount);

        pushButton_7 = new QPushButton(HModifyProd);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Arrow-turn-left64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon2);
        pushButton_7->setIconSize(QSize(32, 32));

        horizontalLayout_6->addWidget(pushButton_7);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(HModifyProd);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        lbProd = new QLabel(HModifyProd);
        lbProd->setObjectName(QString::fromUtf8("lbProd"));
        lbProd->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        verticalLayout->addWidget(lbProd);

        tvDetails = new QTableView(HModifyProd);
        tvDetails->setObjectName(QString::fromUtf8("tvDetails"));
        tvDetails->setSelectionMode(QAbstractItemView::SingleSelection);
        tvDetails->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tvDetails);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        rbNoAction = new QRadioButton(HModifyProd);
        buttonGroup = new QButtonGroup(HModifyProd);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(rbNoAction);
        rbNoAction->setObjectName(QString::fromUtf8("rbNoAction"));
        rbNoAction->setChecked(true);

        horizontalLayout_4->addWidget(rbNoAction);

        rbAdd = new QRadioButton(HModifyProd);
        buttonGroup->addButton(rbAdd);
        rbAdd->setObjectName(QString::fromUtf8("rbAdd"));

        horizontalLayout_4->addWidget(rbAdd);

        rbDelete = new QRadioButton(HModifyProd);
        buttonGroup->addButton(rbDelete);
        rbDelete->setObjectName(QString::fromUtf8("rbDelete"));

        horizontalLayout_4->addWidget(rbDelete);

        rbUpdate = new QRadioButton(HModifyProd);
        buttonGroup->addButton(rbUpdate);
        rbUpdate->setObjectName(QString::fromUtf8("rbUpdate"));

        horizontalLayout_4->addWidget(rbUpdate);


        verticalLayout_2->addLayout(horizontalLayout_4);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(HModifyProd);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        label_6 = new QLabel(HModifyProd);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        leQuantita = new QLineEdit(HModifyProd);
        leQuantita->setObjectName(QString::fromUtf8("leQuantita"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leQuantita);

        label_7 = new QLabel(HModifyProd);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        cbUm = new QComboBox(HModifyProd);
        cbUm->setObjectName(QString::fromUtf8("cbUm"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cbUm);

        leLotto = new QLineEdit(HModifyProd);
        leLotto->setObjectName(QString::fromUtf8("leLotto"));
        leLotto->setClearButtonEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, leLotto);


        verticalLayout_2->addLayout(formLayout);

        pushButton = new QPushButton(HModifyProd);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        pushButton_2 = new QPushButton(HModifyProd);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(32, 32));

        verticalLayout_3->addWidget(pushButton_2);


        retranslateUi(HModifyProd);

        QMetaObject::connectSlotsByName(HModifyProd);
    } // setupUi

    void retranslateUi(QWidget *HModifyProd)
    {
        HModifyProd->setWindowTitle(QCoreApplication::translate("HModifyProd", "Modifica Lotti", nullptr));
        label->setText(QCoreApplication::translate("HModifyProd", "Lotti:   ", nullptr));
        radioButton_2->setText(QCoreApplication::translate("HModifyProd", "Prodotti finiti", nullptr));
        radioButton->setText(QCoreApplication::translate("HModifyProd", "Packages", nullptr));
        label_5->setText(QCoreApplication::translate("HModifyProd", "Periodo:", nullptr));
        label_8->setText(QCoreApplication::translate("HModifyProd", "Dal:", nullptr));
        label_9->setText(QCoreApplication::translate("HModifyProd", "Al:", nullptr));
        rbprod->setText(QCoreApplication::translate("HModifyProd", "Cerca Prodotto", nullptr));
        rblots->setText(QCoreApplication::translate("HModifyProd", "Cerca lotto", nullptr));
        pbUpdateAmount->setText(QCoreApplication::translate("HModifyProd", "Modifica Quantit\303\240", nullptr));
        pushButton_7->setText(QCoreApplication::translate("HModifyProd", "Reset", nullptr));
        label_2->setText(QCoreApplication::translate("HModifyProd", "Composizione lotto:", nullptr));
        lbProd->setText(QString());
        rbNoAction->setText(QCoreApplication::translate("HModifyProd", "Nessuna azione", nullptr));
        rbAdd->setText(QCoreApplication::translate("HModifyProd", "Aggiungi", nullptr));
        rbDelete->setText(QCoreApplication::translate("HModifyProd", "Elimina", nullptr));
        rbUpdate->setText(QCoreApplication::translate("HModifyProd", "Modifica", nullptr));
        label_4->setText(QCoreApplication::translate("HModifyProd", "Lotto:", nullptr));
        label_6->setText(QCoreApplication::translate("HModifyProd", "Quantita", nullptr));
        label_7->setText(QCoreApplication::translate("HModifyProd", "Unit\303\240 di misura", nullptr));
        pushButton->setText(QCoreApplication::translate("HModifyProd", "Salva", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HModifyProd", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HModifyProd: public Ui_HModifyProd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODIFYPROD_H
