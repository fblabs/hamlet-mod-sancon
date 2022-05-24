/********************************************************************************
** Form generated from reading UI file 'hmodricette.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODRICETTE_H
#define UI_HMODRICETTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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
    QPushButton *pbC4R;
    QPushButton *pushButton_4;
    QPushButton *pbRicingredient;
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
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HModRicette)
    {
        if (HModRicette->objectName().isEmpty())
            HModRicette->setObjectName(QString::fromUtf8("HModRicette"));
        HModRicette->setWindowModality(Qt::NonModal);
        HModRicette->resize(890, 700);
        HModRicette->setContextMenuPolicy(Qt::CustomContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HModRicette->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HModRicette);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(HModRicette);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_4->addWidget(label_2);

        cbRicette = new QComboBox(HModRicette);
        cbRicette->setObjectName(QString::fromUtf8("cbRicette"));
        cbRicette->setEditable(true);

        horizontalLayout_4->addWidget(cbRicette);

        pushButton_3 = new QPushButton(HModRicette);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);

        horizontalLayout_4->addWidget(pushButton_3);

        pbduplica = new QPushButton(HModRicette);
        pbduplica->setObjectName(QString::fromUtf8("pbduplica"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Notepad.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbduplica->setIcon(icon2);

        horizontalLayout_4->addWidget(pbduplica);

        pbC4R = new QPushButton(HModRicette);
        pbC4R->setObjectName(QString::fromUtf8("pbC4R"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Link64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbC4R->setIcon(icon3);

        horizontalLayout_4->addWidget(pbC4R);

        pushButton_4 = new QPushButton(HModRicette);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Map.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);

        horizontalLayout_4->addWidget(pushButton_4);

        pbRicingredient = new QPushButton(HModRicette);
        pbRicingredient->setObjectName(QString::fromUtf8("pbRicingredient"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Note64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbRicingredient->setIcon(icon5);

        horizontalLayout_4->addWidget(pbRicingredient);


        verticalLayout_2->addLayout(horizontalLayout_4);

        tbnote = new QTextBrowser(HModRicette);
        tbnote->setObjectName(QString::fromUtf8("tbnote"));
        tbnote->setMaximumSize(QSize(16777215, 120));
        tbnote->setReadOnly(false);

        verticalLayout_2->addWidget(tbnote);

        tableView = new QTableView(HModRicette);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setContextMenuPolicy(Qt::ActionsContextMenu);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(HModRicette);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        verticalLayout->addWidget(checkBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbAddRow = new QPushButton(HModRicette);
        pbAddRow->setObjectName(QString::fromUtf8("pbAddRow"));
        pbAddRow->setIcon(icon1);

        horizontalLayout_3->addWidget(pbAddRow);

        pbDeleteRow = new QPushButton(HModRicette);
        pbDeleteRow->setObjectName(QString::fromUtf8("pbDeleteRow"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbDeleteRow->setIcon(icon6);

        horizontalLayout_3->addWidget(pbDeleteRow);

        lbQtot = new QLabel(HModRicette);
        lbQtot->setObjectName(QString::fromUtf8("lbQtot"));
        lbQtot->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(lbQtot);

        leTotal = new QLineEdit(HModRicette);
        leTotal->setObjectName(QString::fromUtf8("leTotal"));
        leTotal->setMaximumSize(QSize(120, 16777215));
        leTotal->setClearButtonEnabled(true);

        horizontalLayout_3->addWidget(leTotal);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(HModRicette);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon7);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_6 = new QPushButton(HModRicette);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon8);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(HModRicette);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon9);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(HModRicette);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon10);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(HModRicette);

        QMetaObject::connectSlotsByName(HModRicette);
    } // setupUi

    void retranslateUi(QWidget *HModRicette)
    {
        HModRicette->setWindowTitle(QCoreApplication::translate("HModRicette", "Ricette", nullptr));
        label_2->setText(QCoreApplication::translate("HModRicette", "Ricette:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HModRicette", "Nuova Ricetta", nullptr));
        pbduplica->setText(QCoreApplication::translate("HModRicette", "Duplica Ricetta", nullptr));
        pbC4R->setText(QCoreApplication::translate("HModRicette", "Clienti associati", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HModRicette", "Associazioni ricette-clienti", nullptr));
        pbRicingredient->setText(QCoreApplication::translate("HModRicette", "Ricette per ingrediente", nullptr));
        checkBox->setText(QCoreApplication::translate("HModRicette", "Mostra in produzione", nullptr));
        pbAddRow->setText(QCoreApplication::translate("HModRicette", "Aggiungi ingrediente", nullptr));
        pbDeleteRow->setText(QCoreApplication::translate("HModRicette", "Rimuovi ingrediente", nullptr));
        lbQtot->setText(QCoreApplication::translate("HModRicette", "Quantit\303\240 totale:", nullptr));
        pushButton->setText(QCoreApplication::translate("HModRicette", "Salva", nullptr));
        pushButton_6->setText(QCoreApplication::translate("HModRicette", "Annnula", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HModRicette", "Stampa", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HModRicette", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HModRicette: public Ui_HModRicette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODRICETTE_H
