/********************************************************************************
** Form generated from reading UI file 'hmagazzino.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMAGAZZINO_H
#define UI_HMAGAZZINO_H

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
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QWidget *HMagazzino)
    {
        if (HMagazzino->objectName().isEmpty())
            HMagazzino->setObjectName(QStringLiteral("HMagazzino"));
        HMagazzino->resize(1138, 656);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/fork-1-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HMagazzino->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HMagazzino);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HMagazzino);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        deFrom = new QDateEdit(HMagazzino);
        deFrom->setObjectName(QStringLiteral("deFrom"));
        deFrom->setCalendarPopup(true);

        horizontalLayout->addWidget(deFrom);

        label_2 = new QLabel(HMagazzino);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        deTo = new QDateEdit(HMagazzino);
        deTo->setObjectName(QStringLiteral("deTo"));
        deTo->setCalendarPopup(true);

        horizontalLayout->addWidget(deTo);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(HMagazzino);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        cbP = new QCheckBox(HMagazzino);
        cbP->setObjectName(QStringLiteral("cbP"));

        horizontalLayout_2->addWidget(cbP);

        cbProdotti = new QComboBox(HMagazzino);
        cbProdotti->setObjectName(QStringLiteral("cbProdotti"));
        cbProdotti->setEnabled(true);
        cbProdotti->setMinimumSize(QSize(400, 0));
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(cbProdotti);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        cbC = new QCheckBox(HMagazzino);
        cbC->setObjectName(QStringLiteral("cbC"));
        cbC->setChecked(true);

        horizontalLayout_3->addWidget(cbC);

        cbS = new QCheckBox(HMagazzino);
        cbS->setObjectName(QStringLiteral("cbS"));
        cbS->setChecked(true);

        horizontalLayout_3->addWidget(cbS);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        tableView = new QTableView(HMagazzino);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_3 = new QPushButton(HMagazzino);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);

        horizontalLayout_5->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(HMagazzino);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Monitoring64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);

        horizontalLayout_5->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(HMagazzino);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Upload.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);

        horizontalLayout_5->addWidget(pushButton_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(HMagazzino);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);

        horizontalLayout_5->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(HMagazzino);

        QMetaObject::connectSlotsByName(HMagazzino);
    } // setupUi

    void retranslateUi(QWidget *HMagazzino)
    {
        HMagazzino->setWindowTitle(QApplication::translate("HMagazzino", "Movimentazione Magazzino", 0));
        label->setText(QApplication::translate("HMagazzino", "TRA IL:", 0));
        label_2->setText(QApplication::translate("HMagazzino", "E IL:", 0));
        label_3->setText(QApplication::translate("HMagazzino", "PRODOTTO:", 0));
        cbP->setText(QString());
        cbC->setText(QApplication::translate("HMagazzino", "CARICO", 0));
        cbS->setText(QApplication::translate("HMagazzino", "SCARICO", 0));
        pushButton_3->setText(QApplication::translate("HMagazzino", "Nuova operazione", 0));
        pushButton_2->setText(QApplication::translate("HMagazzino", "Modifica operazione selezionata", 0));
        pushButton_4->setText(QApplication::translate("HMagazzino", "Scarico packages", 0));
        pushButton->setText(QApplication::translate("HMagazzino", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HMagazzino: public Ui_HMagazzino {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMAGAZZINO_H
