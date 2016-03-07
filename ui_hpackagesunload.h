/********************************************************************************
** Form generated from reading UI file 'hpackagesunload.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPACKAGESUNLOAD_H
#define UI_HPACKAGESUNLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HPackagesUnload
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cbClienti;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QComboBox *cbProdotti;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTableView *tvLots;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QLineEdit *leQuantita;
    QLineEdit *leNote;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HPackagesUnload)
    {
        if (HPackagesUnload->objectName().isEmpty())
            HPackagesUnload->setObjectName(QStringLiteral("HPackagesUnload"));
        HPackagesUnload->resize(536, 430);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HPackagesUnload->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(HPackagesUnload);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HPackagesUnload);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbClienti = new QComboBox(HPackagesUnload);
        cbClienti->setObjectName(QStringLiteral("cbClienti"));
        cbClienti->setEnabled(true);
        cbClienti->setMouseTracking(false);
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        formLayout->setWidget(0, QFormLayout::FieldRole, cbClienti);


        verticalLayout_2->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(HPackagesUnload);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        cbProdotti = new QComboBox(HPackagesUnload);
        cbProdotti->setObjectName(QStringLiteral("cbProdotti"));
        cbProdotti->setMouseTracking(false);
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);
        cbProdotti->setMinimumContentsLength(10);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, cbProdotti);


        verticalLayout_2->addLayout(formLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(HPackagesUnload);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        tvLots = new QTableView(HPackagesUnload);
        tvLots->setObjectName(QStringLiteral("tvLots"));
        tvLots->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvLots->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tvLots);


        verticalLayout_2->addLayout(verticalLayout);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_4 = new QLabel(HPackagesUnload);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_4);

        leQuantita = new QLineEdit(HPackagesUnload);
        leQuantita->setObjectName(QStringLiteral("leQuantita"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, leQuantita);

        leNote = new QLineEdit(HPackagesUnload);
        leNote->setObjectName(QStringLiteral("leNote"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, leNote);

        label_5 = new QLabel(HPackagesUnload);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_5);


        verticalLayout_2->addLayout(formLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton = new QPushButton(HPackagesUnload);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(HPackagesUnload);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        verticalLayout_3->addWidget(pushButton_2);


        retranslateUi(HPackagesUnload);

        QMetaObject::connectSlotsByName(HPackagesUnload);
    } // setupUi

    void retranslateUi(QWidget *HPackagesUnload)
    {
        HPackagesUnload->setWindowTitle(QApplication::translate("HPackagesUnload", "Scarico Packages", 0));
        label->setText(QApplication::translate("HPackagesUnload", "Cliente:", 0));
        label_2->setText(QApplication::translate("HPackagesUnload", "Prodotto:", 0));
        label_3->setText(QApplication::translate("HPackagesUnload", "Packages:", 0));
        label_4->setText(QApplication::translate("HPackagesUnload", "Quantit\303\240:(pz)", 0));
        label_5->setText(QApplication::translate("HPackagesUnload", "Note:", 0));
        pushButton->setText(QApplication::translate("HPackagesUnload", "Scarica", 0));
        pushButton_2->setText(QApplication::translate("HPackagesUnload", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HPackagesUnload: public Ui_HPackagesUnload {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPACKAGESUNLOAD_H
