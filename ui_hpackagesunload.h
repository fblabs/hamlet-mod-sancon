/********************************************************************************
** Form generated from reading UI file 'hpackagesunload.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPACKAGESUNLOAD_H
#define UI_HPACKAGESUNLOAD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HPackagesUnload)
    {
        if (HPackagesUnload->objectName().isEmpty())
            HPackagesUnload->setObjectName(QString::fromUtf8("HPackagesUnload"));
        HPackagesUnload->resize(1060, 562);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HPackagesUnload->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(HPackagesUnload);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HPackagesUnload);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));
        label->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbClienti = new QComboBox(HPackagesUnload);
        cbClienti->setObjectName(QString::fromUtf8("cbClienti"));
        cbClienti->setEnabled(true);
        cbClienti->setMouseTracking(false);
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        formLayout->setWidget(0, QFormLayout::FieldRole, cbClienti);


        verticalLayout_2->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_2 = new QLabel(HPackagesUnload);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        cbProdotti = new QComboBox(HPackagesUnload);
        cbProdotti->setObjectName(QString::fromUtf8("cbProdotti"));
        cbProdotti->setMouseTracking(false);
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);
        cbProdotti->setMinimumContentsLength(10);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, cbProdotti);


        verticalLayout_2->addLayout(formLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(HPackagesUnload);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(80, 0));

        verticalLayout->addWidget(label_3);

        tvLots = new QTableView(HPackagesUnload);
        tvLots->setObjectName(QString::fromUtf8("tvLots"));
        tvLots->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tvLots->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvLots->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvLots->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvLots);


        verticalLayout_2->addLayout(verticalLayout);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_4 = new QLabel(HPackagesUnload);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_4);

        leQuantita = new QLineEdit(HPackagesUnload);
        leQuantita->setObjectName(QString::fromUtf8("leQuantita"));
        leQuantita->setMaximumSize(QSize(150, 16777215));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, leQuantita);

        leNote = new QLineEdit(HPackagesUnload);
        leNote->setObjectName(QString::fromUtf8("leNote"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, leNote);

        label_5 = new QLabel(HPackagesUnload);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(3, QFormLayout::FieldRole, verticalSpacer);


        verticalLayout_2->addLayout(formLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton = new QPushButton(HPackagesUnload);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(HPackagesUnload);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        verticalLayout_3->addWidget(pushButton_2);


        retranslateUi(HPackagesUnload);

        QMetaObject::connectSlotsByName(HPackagesUnload);
    } // setupUi

    void retranslateUi(QWidget *HPackagesUnload)
    {
        HPackagesUnload->setWindowTitle(QCoreApplication::translate("HPackagesUnload", "Scarico Packages", nullptr));
        label->setText(QCoreApplication::translate("HPackagesUnload", "Cliente:", nullptr));
        label_2->setText(QCoreApplication::translate("HPackagesUnload", "Prodotto:", nullptr));
        label_3->setText(QCoreApplication::translate("HPackagesUnload", "Packages:", nullptr));
        label_4->setText(QCoreApplication::translate("HPackagesUnload", "Quantit\303\240:(pz)", nullptr));
        label_5->setText(QCoreApplication::translate("HPackagesUnload", "Note:", nullptr));
        pushButton->setText(QCoreApplication::translate("HPackagesUnload", "Scarica", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HPackagesUnload", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HPackagesUnload: public Ui_HPackagesUnload {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPACKAGESUNLOAD_H
