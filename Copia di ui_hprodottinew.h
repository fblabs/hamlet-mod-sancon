/********************************************************************************
** Form generated from reading UI file 'hprodottinew.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPRODOTTINEW_H
#define UI_HPRODOTTINEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
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

class Ui_HProdottiNew
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *rbBio;
    QCheckBox *checkBox;
    QTableView *tvProdotti;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pbMod;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HProdottiNew)
    {
        if (HProdottiNew->objectName().isEmpty())
            HProdottiNew->setObjectName(QStringLiteral("HProdottiNew"));
        HProdottiNew->setWindowModality(Qt::ApplicationModal);
        HProdottiNew->resize(1291, 553);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HProdottiNew->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HProdottiNew);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(HProdottiNew);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(HProdottiNew);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(HProdottiNew);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(HProdottiNew);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(HProdottiNew);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        horizontalLayout->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(HProdottiNew);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        horizontalLayout->addWidget(radioButton_6);

        rbBio = new QRadioButton(HProdottiNew);
        rbBio->setObjectName(QStringLiteral("rbBio"));

        horizontalLayout->addWidget(rbBio);

        checkBox = new QCheckBox(HProdottiNew);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);

        tvProdotti = new QTableView(HProdottiNew);
        tvProdotti->setObjectName(QStringLiteral("tvProdotti"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tvProdotti->sizePolicy().hasHeightForWidth());
        tvProdotti->setSizePolicy(sizePolicy);
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
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HProdottiNew);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(HProdottiNew);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setClearButtonEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(HProdottiNew);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);

        pbMod = new QPushButton(HProdottiNew);
        pbMod->setObjectName(QStringLiteral("pbMod"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Monitoring64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbMod->setIcon(icon2);
        pbMod->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbMod);

        pushButton_2 = new QPushButton(HProdottiNew);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(HProdottiNew);

        QMetaObject::connectSlotsByName(HProdottiNew);
    } // setupUi

    void retranslateUi(QWidget *HProdottiNew)
    {
        HProdottiNew->setWindowTitle(QApplication::translate("HProdottiNew", "Prodotti", 0));
        radioButton->setText(QApplication::translate("HProdottiNew", "Tutti", 0));
        radioButton_2->setText(QApplication::translate("HProdottiNew", "Materie prime", 0));
        radioButton_3->setText(QApplication::translate("HProdottiNew", "Prodotti", 0));
        radioButton_4->setText(QApplication::translate("HProdottiNew", "Conteniitori", 0));
        radioButton_5->setText(QApplication::translate("HProdottiNew", "Capsule e tappi", 0));
        radioButton_6->setText(QApplication::translate("HProdottiNew", "Vasi", 0));
        rbBio->setText(QApplication::translate("HProdottiNew", "Bio", 0));
        checkBox->setText(QApplication::translate("HProdottiNew", "Solo prodotti attivi", 0));
        label->setText(QApplication::translate("HProdottiNew", "Cerca prodotto", 0));
        pushButton->setText(QApplication::translate("HProdottiNew", "Nuovo", 0));
        pbMod->setText(QApplication::translate("HProdottiNew", "Modifica prodotto selezionato", 0));
        pushButton_2->setText(QApplication::translate("HProdottiNew", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HProdottiNew: public Ui_HProdottiNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRODOTTINEW_H
