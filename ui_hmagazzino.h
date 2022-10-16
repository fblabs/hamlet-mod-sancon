/********************************************************************************
** Form generated from reading UI file 'hmagazzino.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMAGAZZINO_H
#define UI_HMAGAZZINO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HMagazzino
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *deFrom;
    QLabel *label_2;
    QDateEdit *deTo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QCheckBox *cbP;
    QComboBox *cbProdotti;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbC;
    QCheckBox *cbS;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_3;
    QPushButton *pbLotInfo;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QWidget *HMagazzino)
    {
        if (HMagazzino->objectName().isEmpty())
            HMagazzino->setObjectName(QString::fromUtf8("HMagazzino"));
        HMagazzino->resize(1138, 656);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/fork-1-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HMagazzino->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HMagazzino);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HMagazzino);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        deFrom = new QDateEdit(HMagazzino);
        deFrom->setObjectName(QString::fromUtf8("deFrom"));
        deFrom->setCalendarPopup(true);

        horizontalLayout->addWidget(deFrom);

        label_2 = new QLabel(HMagazzino);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        deTo = new QDateEdit(HMagazzino);
        deTo->setObjectName(QString::fromUtf8("deTo"));
        deTo->setCalendarPopup(true);

        horizontalLayout->addWidget(deTo);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(HMagazzino);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        cbP = new QCheckBox(HMagazzino);
        cbP->setObjectName(QString::fromUtf8("cbP"));

        horizontalLayout_2->addWidget(cbP);

        cbProdotti = new QComboBox(HMagazzino);
        cbProdotti->setObjectName(QString::fromUtf8("cbProdotti"));
        cbProdotti->setEnabled(true);
        cbProdotti->setMinimumSize(QSize(400, 0));
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(cbProdotti);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cbC = new QCheckBox(HMagazzino);
        cbC->setObjectName(QString::fromUtf8("cbC"));
        cbC->setChecked(true);

        horizontalLayout_3->addWidget(cbC);

        cbS = new QCheckBox(HMagazzino);
        cbS->setObjectName(QString::fromUtf8("cbS"));
        cbS->setChecked(true);

        horizontalLayout_3->addWidget(cbS);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        tableView = new QTableView(HMagazzino);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_3 = new QPushButton(HMagazzino);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);

        horizontalLayout_5->addWidget(pushButton_3);

        pbLotInfo = new QPushButton(HMagazzino);
        pbLotInfo->setObjectName(QString::fromUtf8("pbLotInfo"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Wood-4-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbLotInfo->setIcon(icon2);

        horizontalLayout_5->addWidget(pbLotInfo);

        pushButton_2 = new QPushButton(HMagazzino);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Monitoring64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);

        horizontalLayout_5->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(HMagazzino);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Upload.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);

        horizontalLayout_5->addWidget(pushButton_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(HMagazzino);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);

        horizontalLayout_5->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(HMagazzino);

        QMetaObject::connectSlotsByName(HMagazzino);
    } // setupUi

    void retranslateUi(QWidget *HMagazzino)
    {
        HMagazzino->setWindowTitle(QCoreApplication::translate("HMagazzino", "Movimentazione Magazzino", nullptr));
        label->setText(QCoreApplication::translate("HMagazzino", "TRA IL:", nullptr));
        label_2->setText(QCoreApplication::translate("HMagazzino", "E IL:", nullptr));
        label_3->setText(QCoreApplication::translate("HMagazzino", "PRODOTTO:", nullptr));
        cbP->setText(QString());
        cbC->setText(QCoreApplication::translate("HMagazzino", "CARICO", nullptr));
        cbS->setText(QCoreApplication::translate("HMagazzino", "SCARICO", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HMagazzino", "Nuova operazione", nullptr));
        pbLotInfo->setText(QCoreApplication::translate("HMagazzino", "Informazioni su lotto", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HMagazzino", "Modifica operazione selezionata", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HMagazzino", "Scarico packages", nullptr));
        pushButton->setText(QCoreApplication::translate("HMagazzino", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HMagazzino: public Ui_HMagazzino {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMAGAZZINO_H
