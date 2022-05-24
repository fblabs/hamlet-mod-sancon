/********************************************************************************
** Form generated from reading UI file 'hassociazioni.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HASSOCIAZIONI_H
#define UI_HASSOCIAZIONI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HAssociazioni
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cbClienti;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *cbRicette;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pbPrint;
    QPushButton *pushButton;

    void setupUi(QWidget *HAssociazioni)
    {
        if (HAssociazioni->objectName().isEmpty())
            HAssociazioni->setObjectName(QString::fromUtf8("HAssociazioni"));
        HAssociazioni->setWindowModality(Qt::NonModal);
        HAssociazioni->resize(726, 633);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Map.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HAssociazioni->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HAssociazioni);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(HAssociazioni);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(35, 16777215));

        horizontalLayout_2->addWidget(label_2);

        cbClienti = new QComboBox(HAssociazioni);
        cbClienti->setObjectName(QString::fromUtf8("cbClienti"));
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(cbClienti);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(HAssociazioni);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableView);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(HAssociazioni);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_4->addWidget(label_3);

        cbRicette = new QComboBox(HAssociazioni);
        cbRicette->setObjectName(QString::fromUtf8("cbRicette"));

        horizontalLayout_4->addWidget(cbRicette);

        pushButton_2 = new QPushButton(HAssociazioni);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HAssociazioni);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_5 = new QPushButton(HAssociazioni);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Bullhorn.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(HAssociazioni);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon4);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(HAssociazioni);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Folder.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon5);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_4);

        pbPrint = new QPushButton(HAssociazioni);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon6);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbPrint);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(HAssociazioni);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon7);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton);


        retranslateUi(HAssociazioni);

        QMetaObject::connectSlotsByName(HAssociazioni);
    } // setupUi

    void retranslateUi(QWidget *HAssociazioni)
    {
        HAssociazioni->setWindowTitle(QCoreApplication::translate("HAssociazioni", "Associazioni prodotti-ricette", nullptr));
        label_2->setText(QCoreApplication::translate("HAssociazioni", "Clienti:", nullptr));
        label_3->setText(QCoreApplication::translate("HAssociazioni", "Ricette:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HAssociazioni", "Aggiungi associazione", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HAssociazioni", "rimuovi associazione", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HAssociazioni", "Rendi visibile", nullptr));
        pushButton_6->setText(QCoreApplication::translate("HAssociazioni", "Rendi non visibile", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HAssociazioni", "Scheda", nullptr));
        pbPrint->setText(QCoreApplication::translate("HAssociazioni", "Stampa", nullptr));
        pushButton->setText(QCoreApplication::translate("HAssociazioni", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HAssociazioni: public Ui_HAssociazioni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HASSOCIAZIONI_H
