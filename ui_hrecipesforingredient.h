/********************************************************************************
** Form generated from reading UI file 'hrecipesforingredient.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HRECIPESFORINGREDIENT_H
#define UI_HRECIPESFORINGREDIENT_H

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

class Ui_HRecipesForIngredient
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbIngredients;
    QTableView *tvResult;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HRecipesForIngredient)
    {
        if (HRecipesForIngredient->objectName().isEmpty())
            HRecipesForIngredient->setObjectName(QString::fromUtf8("HRecipesForIngredient"));
        HRecipesForIngredient->resize(700, 734);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Note64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HRecipesForIngredient->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HRecipesForIngredient);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HRecipesForIngredient);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(label);

        cbIngredients = new QComboBox(HRecipesForIngredient);
        cbIngredients->setObjectName(QString::fromUtf8("cbIngredients"));
        cbIngredients->setEditable(true);
        cbIngredients->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbIngredients);


        verticalLayout->addLayout(horizontalLayout);

        tvResult = new QTableView(HRecipesForIngredient);
        tvResult->setObjectName(QString::fromUtf8("tvResult"));
        tvResult->setAlternatingRowColors(true);
        tvResult->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvResult);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbPrint = new QPushButton(HRecipesForIngredient);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon1);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbPrint);

        pbClose = new QPushButton(HRecipesForIngredient);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HRecipesForIngredient);

        QMetaObject::connectSlotsByName(HRecipesForIngredient);
    } // setupUi

    void retranslateUi(QWidget *HRecipesForIngredient)
    {
        HRecipesForIngredient->setWindowTitle(QCoreApplication::translate("HRecipesForIngredient", "Ricette per Ingrediente", nullptr));
        label->setText(QCoreApplication::translate("HRecipesForIngredient", "Ingredienti:", nullptr));
        pbPrint->setText(QCoreApplication::translate("HRecipesForIngredient", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HRecipesForIngredient", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HRecipesForIngredient: public Ui_HRecipesForIngredient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HRECIPESFORINGREDIENT_H
