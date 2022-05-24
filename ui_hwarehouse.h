/********************************************************************************
** Form generated from reading UI file 'hwarehouse.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HWAREHOUSE_H
#define UI_HWAREHOUSE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HWarehouse
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QDateEdit *deDateFrom;
    QSpacerItem *horizontalSpacer;
    QDateEdit *deDateTo;
    QLabel *label_2;
    QTableView *tableView;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButtonProd;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pbMod;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HWarehouse)
    {
        if (HWarehouse->objectName().isEmpty())
            HWarehouse->setObjectName(QString::fromUtf8("HWarehouse"));
        HWarehouse->setWindowModality(Qt::NonModal);
        HWarehouse->resize(1282, 741);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/modlots.png"), QSize(), QIcon::Normal, QIcon::Off);
        HWarehouse->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HWarehouse);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(HWarehouse);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        deDateFrom = new QDateEdit(HWarehouse);
        deDateFrom->setObjectName(QString::fromUtf8("deDateFrom"));
        deDateFrom->setCalendarPopup(true);

        gridLayout->addWidget(deDateFrom, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        deDateTo = new QDateEdit(HWarehouse);
        deDateTo->setObjectName(QString::fromUtf8("deDateTo"));
        deDateTo->setCalendarPopup(true);

        gridLayout->addWidget(deDateTo, 0, 3, 1, 1);

        label_2 = new QLabel(HWarehouse);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        tableView = new QTableView(HWarehouse);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        splitter = new QSplitter(HWarehouse);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setChecked(true);

        horizontalLayout_3->addWidget(radioButton_2);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_3->addWidget(radioButton);

        radioButtonProd = new QRadioButton(layoutWidget);
        radioButtonProd->setObjectName(QString::fromUtf8("radioButtonProd"));

        horizontalLayout_3->addWidget(radioButtonProd);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(120, 0));
        lineEdit->setClearButtonEnabled(true);

        horizontalLayout_3->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(688, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        splitter->addWidget(layoutWidget);

        verticalLayout->addWidget(splitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(HWarehouse);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pbMod = new QPushButton(HWarehouse);
        pbMod->setObjectName(QString::fromUtf8("pbMod"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Monitoring64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbMod->setIcon(icon2);
        pbMod->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbMod);

        pushButton_5 = new QPushButton(HWarehouse);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(HWarehouse);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HWarehouse);

        QMetaObject::connectSlotsByName(HWarehouse);
    } // setupUi

    void retranslateUi(QWidget *HWarehouse)
    {
        HWarehouse->setWindowTitle(QCoreApplication::translate("HWarehouse", "Movimenti", nullptr));
        label->setText(QCoreApplication::translate("HWarehouse", "Dal:", nullptr));
        label_2->setText(QCoreApplication::translate("HWarehouse", "Al:", nullptr));
        label_4->setText(QCoreApplication::translate("HWarehouse", "Cerca:", nullptr));
        radioButton_2->setText(QCoreApplication::translate("HWarehouse", "Tutto", nullptr));
        radioButton->setText(QCoreApplication::translate("HWarehouse", "Lotto", nullptr));
        radioButtonProd->setText(QCoreApplication::translate("HWarehouse", "Prodotto", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HWarehouse", "Nuova operazione", nullptr));
        pbMod->setText(QCoreApplication::translate("HWarehouse", "Modifica operazione selezionata", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HWarehouse", "Scarico Packages", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HWarehouse", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HWarehouse: public Ui_HWarehouse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HWAREHOUSE_H
