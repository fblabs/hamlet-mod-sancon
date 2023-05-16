/********************************************************************************
** Form generated from reading UI file 'hcontainer_generic_product.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCONTAINER_GENERIC_PRODUCT_H
#define UI_HCONTAINER_GENERIC_PRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HContainer_generic_product
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *leCosto;
    QComboBox *cb_prodotti;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *leAmount;

    void setupUi(QWidget *HContainer_generic_product)
    {
        if (HContainer_generic_product->objectName().isEmpty())
            HContainer_generic_product->setObjectName(QString::fromUtf8("HContainer_generic_product"));
        HContainer_generic_product->resize(400, 163);
        verticalLayout = new QVBoxLayout(HContainer_generic_product);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(HContainer_generic_product);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        leCosto = new QLineEdit(HContainer_generic_product);
        leCosto->setObjectName(QString::fromUtf8("leCosto"));

        gridLayout->addWidget(leCosto, 2, 1, 1, 1);

        cb_prodotti = new QComboBox(HContainer_generic_product);
        cb_prodotti->setObjectName(QString::fromUtf8("cb_prodotti"));
        cb_prodotti->setEditable(true);
        cb_prodotti->setInsertPolicy(QComboBox::NoInsert);

        gridLayout->addWidget(cb_prodotti, 0, 1, 1, 1);

        label = new QLabel(HContainer_generic_product);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(HContainer_generic_product);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        leAmount = new QLineEdit(HContainer_generic_product);
        leAmount->setObjectName(QString::fromUtf8("leAmount"));

        gridLayout->addWidget(leAmount, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(HContainer_generic_product);

        QMetaObject::connectSlotsByName(HContainer_generic_product);
    } // setupUi

    void retranslateUi(QWidget *HContainer_generic_product)
    {
        HContainer_generic_product->setWindowTitle(QCoreApplication::translate("HContainer_generic_product", "Aggiungi item", nullptr));
        label_2->setText(QCoreApplication::translate("HContainer_generic_product", "Costo", nullptr));
        label->setText(QCoreApplication::translate("HContainer_generic_product", "Prodotto:", nullptr));
        label_3->setText(QCoreApplication::translate("HContainer_generic_product", "Quantit\303\240", nullptr));
        leAmount->setText(QCoreApplication::translate("HContainer_generic_product", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HContainer_generic_product: public Ui_HContainer_generic_product {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCONTAINER_GENERIC_PRODUCT_H
