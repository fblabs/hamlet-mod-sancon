/********************************************************************************
** Form generated from reading UI file 'hlastlots.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLASTLOTS_H
#define UI_HLASTLOTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HLastLots
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *leSearch;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *cbProducts;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *cbLastLots;
    QTableView *tvLots;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *leQua;
    QComboBox *cbUI;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HLastLots)
    {
        if (HLastLots->objectName().isEmpty())
            HLastLots->setObjectName(QString::fromUtf8("HLastLots"));
        HLastLots->setWindowModality(Qt::WindowModal);
        HLastLots->resize(332, 374);
        verticalLayout = new QVBoxLayout(HLastLots);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(HLastLots);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(80, 0));
        label_4->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_5->addWidget(label_4);

        leSearch = new QLineEdit(HLastLots);
        leSearch->setObjectName(QString::fromUtf8("leSearch"));
        leSearch->setClearButtonEnabled(true);

        horizontalLayout_5->addWidget(leSearch);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(HLastLots);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(label_2);

        cbProducts = new QComboBox(HLastLots);
        cbProducts->setObjectName(QString::fromUtf8("cbProducts"));
        cbProducts->setEditable(true);

        horizontalLayout->addWidget(cbProducts);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(HLastLots);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(label);

        cbLastLots = new QComboBox(HLastLots);
        cbLastLots->setObjectName(QString::fromUtf8("cbLastLots"));

        horizontalLayout_3->addWidget(cbLastLots);


        verticalLayout->addLayout(horizontalLayout_3);

        tvLots = new QTableView(HLastLots);
        tvLots->setObjectName(QString::fromUtf8("tvLots"));
        tvLots->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvLots->setAlternatingRowColors(true);
        tvLots->setSelectionMode(QAbstractItemView::SingleSelection);
        tvLots->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvLots->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvLots);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(HLastLots);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        leQua = new QLineEdit(HLastLots);
        leQua->setObjectName(QString::fromUtf8("leQua"));

        gridLayout->addWidget(leQua, 0, 1, 1, 1);

        cbUI = new QComboBox(HLastLots);
        cbUI->setObjectName(QString::fromUtf8("cbUI"));

        gridLayout->addWidget(cbUI, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(HLastLots);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(HLastLots);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HLastLots);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(HLastLots);
    } // setupUi

    void retranslateUi(QWidget *HLastLots)
    {
        HLastLots->setWindowTitle(QCoreApplication::translate("HLastLots", "Aggiungi lotto fuori ricettta", nullptr));
        label_4->setText(QCoreApplication::translate("HLastLots", "Cerca Lotto:", nullptr));
        label_2->setText(QCoreApplication::translate("HLastLots", "Prodotto:", nullptr));
        label->setText(QCoreApplication::translate("HLastLots", "Mostra:", nullptr));
        label_3->setText(QCoreApplication::translate("HLastLots", "Quantit\303\240:", nullptr));
        pushButton->setText(QCoreApplication::translate("HLastLots", "Aggiungi", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HLastLots", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HLastLots: public Ui_HLastLots {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLASTLOTS_H
