/********************************************************************************
** Form generated from reading UI file 'hnuovaricetta.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNUOVARICETTA_H
#define UI_HNUOVARICETTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
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

class Ui_HNuovaRicetta
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *rbNew;
    QRadioButton *rbExisting;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QFormLayout *formLayout_2;
    QLabel *lbNome;
    QLineEdit *leNome;
    QCheckBox *cbAllergenico;
    QFormLayout *formLayout_4;
    QLabel *lbProdotti;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QLabel *label_2;
    QListView *listView;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leQuantita;
    QPushButton *pushButton;
    QCheckBox *cbShow;
    QVBoxLayout *verticalLayout_2;
    QTableView *tvRicetta;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *HNuovaRicetta)
    {
        if (HNuovaRicetta->objectName().isEmpty())
            HNuovaRicetta->setObjectName(QStringLiteral("HNuovaRicetta"));
        HNuovaRicetta->setWindowModality(Qt::ApplicationModal);
        HNuovaRicetta->resize(1296, 631);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNuovaRicetta->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(HNuovaRicetta);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        rbNew = new QRadioButton(HNuovaRicetta);
        rbNew->setObjectName(QStringLiteral("rbNew"));
        rbNew->setChecked(true);

        horizontalLayout_6->addWidget(rbNew);

        rbExisting = new QRadioButton(HNuovaRicetta);
        rbExisting->setObjectName(QStringLiteral("rbExisting"));
        rbExisting->setChecked(false);

        horizontalLayout_6->addWidget(rbExisting);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        lbNome = new QLabel(HNuovaRicetta);
        lbNome->setObjectName(QStringLiteral("lbNome"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, lbNome);

        leNome = new QLineEdit(HNuovaRicetta);
        leNome->setObjectName(QStringLiteral("leNome"));
        leNome->setMinimumSize(QSize(380, 0));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leNome);


        horizontalLayout_5->addLayout(formLayout_2);

        cbAllergenico = new QCheckBox(HNuovaRicetta);
        cbAllergenico->setObjectName(QStringLiteral("cbAllergenico"));

        horizontalLayout_5->addWidget(cbAllergenico);


        verticalLayout_4->addLayout(horizontalLayout_5);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        lbProdotti = new QLabel(HNuovaRicetta);
        lbProdotti->setObjectName(QStringLiteral("lbProdotti"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, lbProdotti);

        comboBox = new QComboBox(HNuovaRicetta);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEditable(true);
        comboBox->setInsertPolicy(QComboBox::NoInsert);
        comboBox->setModelColumn(1);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, comboBox);


        verticalLayout_4->addLayout(formLayout_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_3 = new QPushButton(HNuovaRicetta);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton_8 = new QPushButton(HNuovaRicetta);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_4->addWidget(pushButton_8);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(verticalLayout_4);

        label_2 = new QLabel(HNuovaRicetta);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        listView = new QListView(HNuovaRicetta);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(HNuovaRicetta);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        leQuantita = new QLineEdit(HNuovaRicetta);
        leQuantita->setObjectName(QStringLiteral("leQuantita"));
        leQuantita->setClearButtonEnabled(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, leQuantita);

        pushButton = new QPushButton(HNuovaRicetta);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton);

        cbShow = new QCheckBox(HNuovaRicetta);
        cbShow->setObjectName(QStringLiteral("cbShow"));
        cbShow->setChecked(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, cbShow);


        verticalLayout->addLayout(formLayout);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tvRicetta = new QTableView(HNuovaRicetta);
        tvRicetta->setObjectName(QStringLiteral("tvRicetta"));

        verticalLayout_2->addWidget(tvRicetta);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(HNuovaRicetta);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(HNuovaRicetta);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(HNuovaRicetta);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_4 = new QPushButton(HNuovaRicetta);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(HNuovaRicetta);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_5);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_3);


        retranslateUi(HNuovaRicetta);

        QMetaObject::connectSlotsByName(HNuovaRicetta);
    } // setupUi

    void retranslateUi(QWidget *HNuovaRicetta)
    {
        HNuovaRicetta->setWindowTitle(QApplication::translate("HNuovaRicetta", "Nuova Ricetta", 0));
        rbNew->setText(QApplication::translate("HNuovaRicetta", "Crea nuovo prodotto", 0));
        rbExisting->setText(QApplication::translate("HNuovaRicetta", "Usa prodotto esistente", 0));
        lbNome->setText(QApplication::translate("HNuovaRicetta", "Nome:  ", 0));
        leNome->setPlaceholderText(QApplication::translate("HNuovaRicetta", "nome ricetta", 0));
        cbAllergenico->setText(QApplication::translate("HNuovaRicetta", "Allergenico", 0));
        lbProdotti->setText(QApplication::translate("HNuovaRicetta", "prodotti", 0));
        pushButton_3->setText(QApplication::translate("HNuovaRicetta", "Crea", 0));
        pushButton_8->setText(QApplication::translate("HNuovaRicetta", "Annulla", 0));
        label_2->setText(QApplication::translate("HNuovaRicetta", "Ingedienti", 0));
        label->setText(QApplication::translate("HNuovaRicetta", "Quantit\303\240:", 0));
        leQuantita->setPlaceholderText(QApplication::translate("HNuovaRicetta", "xxx.yy", 0));
        pushButton->setText(QApplication::translate("HNuovaRicetta", "Aggiungi ingrediente", 0));
        cbShow->setText(QApplication::translate("HNuovaRicetta", "Mostra in produzione", 0));
        label_3->setText(QApplication::translate("HNuovaRicetta", "Totale peso", 0));
        pushButton_2->setText(QApplication::translate("HNuovaRicetta", "Rimuovi ingrediente", 0));
        pushButton_4->setText(QApplication::translate("HNuovaRicetta", "Salva", 0));
        pushButton_5->setText(QApplication::translate("HNuovaRicetta", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HNuovaRicetta: public Ui_HNuovaRicetta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNUOVARICETTA_H
