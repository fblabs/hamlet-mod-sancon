/********************************************************************************
** Form generated from reading UI file 'hrecipesforclient.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HRECIPESFORCLIENT_H
#define UI_HRECIPESFORCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HRecipesForClient
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *cbRecipes;
    QTableView *tvClients;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HRecipesForClient)
    {
        if (HRecipesForClient->objectName().isEmpty())
            HRecipesForClient->setObjectName(QString::fromUtf8("HRecipesForClient"));
        HRecipesForClient->resize(511, 410);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Link64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HRecipesForClient->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HRecipesForClient);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbRecipes = new QComboBox(HRecipesForClient);
        cbRecipes->setObjectName(QString::fromUtf8("cbRecipes"));
        cbRecipes->setEditable(true);
        cbRecipes->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout->addWidget(cbRecipes);

        tvClients = new QTableView(HRecipesForClient);
        tvClients->setObjectName(QString::fromUtf8("tvClients"));
        tvClients->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvClients->setAlternatingRowColors(true);
        tvClients->setSelectionMode(QAbstractItemView::SingleSelection);
        tvClients->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tvClients);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbPrint = new QPushButton(HRecipesForClient);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon1);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HRecipesForClient);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HRecipesForClient);

        QMetaObject::connectSlotsByName(HRecipesForClient);
    } // setupUi

    void retranslateUi(QWidget *HRecipesForClient)
    {
        HRecipesForClient->setWindowTitle(QCoreApplication::translate("HRecipesForClient", "Clienti per ricetta", nullptr));
        pbPrint->setText(QCoreApplication::translate("HRecipesForClient", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HRecipesForClient", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HRecipesForClient: public Ui_HRecipesForClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HRECIPESFORCLIENT_H
