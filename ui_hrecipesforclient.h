/********************************************************************************
** Form generated from reading UI file 'hrecipesforclient.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HRECIPESFORCLIENT_H
#define UI_HRECIPESFORCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            HRecipesForClient->setObjectName(QStringLiteral("HRecipesForClient"));
        HRecipesForClient->resize(511, 410);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Link64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HRecipesForClient->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HRecipesForClient);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cbRecipes = new QComboBox(HRecipesForClient);
        cbRecipes->setObjectName(QStringLiteral("cbRecipes"));

        verticalLayout->addWidget(cbRecipes);

        tvClients = new QTableView(HRecipesForClient);
        tvClients->setObjectName(QStringLiteral("tvClients"));
        tvClients->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvClients->setAlternatingRowColors(true);
        tvClients->setSelectionMode(QAbstractItemView::SingleSelection);
        tvClients->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tvClients);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbPrint = new QPushButton(HRecipesForClient);
        pbPrint->setObjectName(QStringLiteral("pbPrint"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon1);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HRecipesForClient);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HRecipesForClient);

        QMetaObject::connectSlotsByName(HRecipesForClient);
    } // setupUi

    void retranslateUi(QWidget *HRecipesForClient)
    {
        HRecipesForClient->setWindowTitle(QApplication::translate("HRecipesForClient", "Clienti per ricetta", 0));
        pbPrint->setText(QApplication::translate("HRecipesForClient", "Stampa", 0));
        pbClose->setText(QApplication::translate("HRecipesForClient", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HRecipesForClient: public Ui_HRecipesForClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HRECIPESFORCLIENT_H
