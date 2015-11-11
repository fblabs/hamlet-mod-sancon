/********************************************************************************
** Form generated from reading UI file 'hmodricette.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODRICETTE_H
#define UI_HMODRICETTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HModRicette
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *cbRicette;
    QPushButton *pushButton_3;
    QPushButton *pbduplica;
    QPushButton *pushButton_4;
    QTextBrowser *tbnote;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbAddRow;
    QPushButton *pbDeleteRow;
    QLabel *lbQtot;
    QLineEdit *leTotal;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HModRicette)
    {
        if (HModRicette->objectName().isEmpty())
            HModRicette->setObjectName(QStringLiteral("HModRicette"));
        HModRicette->setWindowModality(Qt::NonModal);
        HModRicette->resize(1248, 700);
        HModRicette->setContextMenuPolicy(Qt::CustomContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HModRicette->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HModRicette);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(HModRicette);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(label_2);

        cbRicette = new QComboBox(HModRicette);
        cbRicette->setObjectName(QStringLiteral("cbRicette"));
        cbRicette->setEditable(true);

        horizontalLayout_4->addWidget(cbRicette);

        pushButton_3 = new QPushButton(HModRicette);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);

        horizontalLayout_4->addWidget(pushButton_3);

        pbduplica = new QPushButton(HModRicette);
        pbduplica->setObjectName(QStringLiteral("pbduplica"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Notepad.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbduplica->setIcon(icon2);

        horizontalLayout_4->addWidget(pbduplica);

        pushButton_4 = new QPushButton(HModRicette);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Map.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);

        horizontalLayout_4->addWidget(pushButton_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        tbnote = new QTextBrowser(HModRicette);
        tbnote->setObjectName(QStringLiteral("tbnote"));
        tbnote->setMaximumSize(QSize(16777215, 120));
        tbnote->setReadOnly(false);

        verticalLayout_2->addWidget(tbnote);

        tableView = new QTableView(HModRicette);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setContextMenuPolicy(Qt::ActionsContextMenu);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox = new QCheckBox(HModRicette);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pbAddRow = new QPushButton(HModRicette);
        pbAddRow->setObjectName(QStringLiteral("pbAddRow"));
        pbAddRow->setIcon(icon1);

        horizontalLayout_3->addWidget(pbAddRow);

        pbDeleteRow = new QPushButton(HModRicette);
        pbDeleteRow->setObjectName(QStringLiteral("pbDeleteRow"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbDeleteRow->setIcon(icon4);

        horizontalLayout_3->addWidget(pbDeleteRow);

        lbQtot = new QLabel(HModRicette);
        lbQtot->setObjectName(QStringLiteral("lbQtot"));
        lbQtot->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(lbQtot);

        leTotal = new QLineEdit(HModRicette);
        leTotal->setObjectName(QStringLiteral("leTotal"));
        leTotal->setMaximumSize(QSize(120, 16777215));
        leTotal->setClearButtonEnabled(true);

        horizontalLayout_3->addWidget(leTotal);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(HModRicette);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_5 = new QPushButton(HModRicette);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon6);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(HModRicette);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon7);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(HModRicette);

        QMetaObject::connectSlotsByName(HModRicette);
    } // setupUi

    void retranslateUi(QWidget *HModRicette)
    {
        HModRicette->setWindowTitle(QApplication::translate("HModRicette", "Ricette", 0));
        label_2->setText(QApplication::translate("HModRicette", "Ricette:", 0));
        pushButton_3->setText(QApplication::translate("HModRicette", "Nuova Ricetta", 0));
        pbduplica->setText(QApplication::translate("HModRicette", "Duplica Ricetta", 0));
        pushButton_4->setText(QApplication::translate("HModRicette", "Associazioni ricette-clienti", 0));
        checkBox->setText(QApplication::translate("HModRicette", "Mostra in produzione", 0));
        pbAddRow->setText(QApplication::translate("HModRicette", "Aggiungi ingrediente", 0));
        pbDeleteRow->setText(QApplication::translate("HModRicette", "Rimuovi ingrediente", 0));
        lbQtot->setText(QApplication::translate("HModRicette", "Quantit\303\240 totale:", 0));
        pushButton->setText(QApplication::translate("HModRicette", "Salva", 0));
        pushButton_5->setText(QApplication::translate("HModRicette", "Stampa", 0));
        pushButton_2->setText(QApplication::translate("HModRicette", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HModRicette: public Ui_HModRicette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODRICETTE_H
