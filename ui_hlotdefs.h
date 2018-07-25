/********************************************************************************
** Form generated from reading UI file 'hlotdefs.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLOTDEFS_H
#define UI_HLOTDEFS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HLotti
{
public:
    QAction *actionCopia_il_testo;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chbT;
    QComboBox *cbTipiLot;
    QCheckBox *chbP;
    QComboBox *cbProdotti;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDateEdit *datadal;
    QLabel *label_2;
    QDateEdit *dataal;
    QPushButton *pushButton_5;
    QTableView *twLots;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HLotti)
    {
        if (HLotti->objectName().isEmpty())
            HLotti->setObjectName(QStringLiteral("HLotti"));
        HLotti->setWindowModality(Qt::NonModal);
        HLotti->resize(797, 539);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Cube.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HLotti->setWindowIcon(icon);
        actionCopia_il_testo = new QAction(HLotti);
        actionCopia_il_testo->setObjectName(QStringLiteral("actionCopia_il_testo"));
        verticalLayout_3 = new QVBoxLayout(HLotti);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        chbT = new QCheckBox(HLotti);
        chbT->setObjectName(QStringLiteral("chbT"));
        chbT->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(chbT);

        cbTipiLot = new QComboBox(HLotti);
        cbTipiLot->setObjectName(QStringLiteral("cbTipiLot"));

        horizontalLayout_2->addWidget(cbTipiLot);

        chbP = new QCheckBox(HLotti);
        chbP->setObjectName(QStringLiteral("chbP"));
        chbP->setMaximumSize(QSize(66, 16777215));

        horizontalLayout_2->addWidget(chbP);

        cbProdotti = new QComboBox(HLotti);
        cbProdotti->setObjectName(QStringLiteral("cbProdotti"));
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(cbProdotti);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(HLotti);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_3->addWidget(label);

        datadal = new QDateEdit(HLotti);
        datadal->setObjectName(QStringLiteral("datadal"));

        horizontalLayout_3->addWidget(datadal);

        label_2 = new QLabel(HLotti);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_3->addWidget(label_2);

        dataal = new QDateEdit(HLotti);
        dataal->setObjectName(QStringLiteral("dataal"));

        horizontalLayout_3->addWidget(dataal);

        pushButton_5 = new QPushButton(HLotti);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButton_5);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        twLots = new QTableView(HLotti);
        twLots->setObjectName(QStringLiteral("twLots"));
        twLots->setEnabled(true);
        twLots->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        twLots->setAlternatingRowColors(true);
        twLots->setSelectionMode(QAbstractItemView::SingleSelection);
        twLots->setSelectionBehavior(QAbstractItemView::SelectRows);
        twLots->setSortingEnabled(true);
        twLots->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(twLots);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_7 = new QPushButton(HLotti);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon2);
        pushButton_7->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_7);

        pushButton_4 = new QPushButton(HLotti);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(HLotti);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon4);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_3 = new QPushButton(HLotti);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon5);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(HLotti);

        QMetaObject::connectSlotsByName(HLotti);
    } // setupUi

    void retranslateUi(QWidget *HLotti)
    {
        HLotti->setWindowTitle(QApplication::translate("HLotti", "Lotti", 0));
        actionCopia_il_testo->setText(QApplication::translate("HLotti", "Copia il testo", 0));
        actionCopia_il_testo->setShortcut(QApplication::translate("HLotti", "Alt+C", 0));
        chbT->setText(QApplication::translate("HLotti", "Tipo:", 0));
        chbP->setText(QApplication::translate("HLotti", "Prodotto:", 0));
        label->setText(QApplication::translate("HLotti", "Dal:", 0));
        label_2->setText(QApplication::translate("HLotti", "Al:", 0));
        pushButton_5->setText(QApplication::translate("HLotti", "Cerca", 0));
        pushButton_7->setText(QApplication::translate("HLotti", "Modifica", 0));
        pushButton_4->setText(QApplication::translate("HLotti", "Nuova operazione", 0));
        pushButton_6->setText(QApplication::translate("HLotti", "Stampa", 0));
        pushButton_3->setText(QApplication::translate("HLotti", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HLotti: public Ui_HLotti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOTDEFS_H
