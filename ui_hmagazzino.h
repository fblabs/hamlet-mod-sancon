/********************************************************************************
** Form generated from reading UI file 'hmagazzino.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMAGAZZINO_H
#define UI_HMAGAZZINO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
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

class Ui_HMagazzino
{
public:
    QAction *actionNew_operation;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QDateEdit *dtDateFrom;
    QLabel *label_2;
    QDateEdit *dtDateTo;
    QLabel *label;
    QPushButton *pushButton_6;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btsearch;
    QRadioButton *radioButton;
    QRadioButton *rblot;
    QRadioButton *rbprod;
    QLineEdit *leLot;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HMagazzino)
    {
        if (HMagazzino->objectName().isEmpty())
            HMagazzino->setObjectName(QStringLiteral("HMagazzino"));
        HMagazzino->setWindowModality(Qt::ApplicationModal);
        HMagazzino->resize(1216, 762);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Links.png"), QSize(), QIcon::Normal, QIcon::Off);
        HMagazzino->setWindowIcon(icon);
        actionNew_operation = new QAction(HMagazzino);
        actionNew_operation->setObjectName(QStringLiteral("actionNew_operation"));
        verticalLayout_2 = new QVBoxLayout(HMagazzino);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        dtDateFrom = new QDateEdit(HMagazzino);
        dtDateFrom->setObjectName(QStringLiteral("dtDateFrom"));

        gridLayout->addWidget(dtDateFrom, 0, 1, 1, 1);

        label_2 = new QLabel(HMagazzino);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        dtDateTo = new QDateEdit(HMagazzino);
        dtDateTo->setObjectName(QStringLiteral("dtDateTo"));

        gridLayout->addWidget(dtDateTo, 0, 3, 1, 1);

        label = new QLabel(HMagazzino);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(HMagazzino);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setCheckable(false);

        gridLayout->addWidget(pushButton_6, 0, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        tableView = new QTableView(HMagazzino);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setAutoFillBackground(true);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setVisible(true);
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setCascadingSectionResizes(false);
        tableView->verticalHeader()->setHighlightSections(false);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btsearch = new QPushButton(HMagazzino);
        btsearch->setObjectName(QStringLiteral("btsearch"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        btsearch->setIcon(icon2);
        btsearch->setCheckable(true);
        btsearch->setFlat(false);

        horizontalLayout_2->addWidget(btsearch);

        radioButton = new QRadioButton(HMagazzino);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_2->addWidget(radioButton);

        rblot = new QRadioButton(HMagazzino);
        rblot->setObjectName(QStringLiteral("rblot"));
        rblot->setChecked(true);

        horizontalLayout_2->addWidget(rblot);

        rbprod = new QRadioButton(HMagazzino);
        rbprod->setObjectName(QStringLiteral("rbprod"));

        horizontalLayout_2->addWidget(rbprod);

        leLot = new QLineEdit(HMagazzino);
        leLot->setObjectName(QStringLiteral("leLot"));

        horizontalLayout_2->addWidget(leLot);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(HMagazzino);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(HMagazzino);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(HMagazzino);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon5);
        pushButton_2->setIconSize(QSize(32, 32));
        pushButton_2->setAutoDefault(true);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HMagazzino);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(HMagazzino);
        QObject::connect(pushButton_3, SIGNAL(clicked()), HMagazzino, SLOT(close()));
        QObject::connect(leLot, SIGNAL(textChanged(QString)), HMagazzino, SLOT(cercaLot()));
        QObject::connect(rblot, SIGNAL(clicked()), HMagazzino, SLOT(cercaLot()));
        QObject::connect(rbprod, SIGNAL(clicked()), HMagazzino, SLOT(cercaLot()));
        QObject::connect(actionNew_operation, SIGNAL(triggered()), HMagazzino, SLOT(cercaLot()));

        QMetaObject::connectSlotsByName(HMagazzino);
    } // setupUi

    void retranslateUi(QWidget *HMagazzino)
    {
        HMagazzino->setWindowTitle(QApplication::translate("HMagazzino", "Magazzino", 0));
        actionNew_operation->setText(QApplication::translate("HMagazzino", "new operation", 0));
        actionNew_operation->setShortcut(QApplication::translate("HMagazzino", "F2", 0));
        label_2->setText(QApplication::translate("HMagazzino", "Al:", 0));
        label->setText(QApplication::translate("HMagazzino", "Dal:", 0));
        pushButton_6->setText(QApplication::translate("HMagazzino", "Filtra", 0));
        btsearch->setText(QApplication::translate("HMagazzino", "Cerca", 0));
        radioButton->setText(QApplication::translate("HMagazzino", "Operazione", 0));
        rblot->setText(QApplication::translate("HMagazzino", "Lotto", 0));
        rbprod->setText(QApplication::translate("HMagazzino", "Prodotto", 0));
        pushButton->setText(QApplication::translate("HMagazzino", "Nuova operazione", 0));
        pushButton_4->setText(QApplication::translate("HMagazzino", "&Annulla Modifiche", 0));
        pushButton_2->setText(QApplication::translate("HMagazzino", "Salva", 0));
        pushButton_3->setText(QApplication::translate("HMagazzino", "&Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HMagazzino: public Ui_HMagazzino {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMAGAZZINO_H
