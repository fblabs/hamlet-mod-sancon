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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HContainer_generic_product
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cb_prodotti;
    QLabel *label_2;
    QLineEdit *leCosto;

    void setupUi(QWidget *HContainer_generic_product)
    {
        if (HContainer_generic_product->objectName().isEmpty())
            HContainer_generic_product->setObjectName(QString::fromUtf8("HContainer_generic_product"));
        HContainer_generic_product->resize(400, 101);
        verticalLayout = new QVBoxLayout(HContainer_generic_product);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HContainer_generic_product);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cb_prodotti = new QComboBox(HContainer_generic_product);
        cb_prodotti->setObjectName(QString::fromUtf8("cb_prodotti"));
        cb_prodotti->setEditable(true);
        cb_prodotti->setInsertPolicy(QComboBox::NoInsert);

        formLayout->setWidget(0, QFormLayout::FieldRole, cb_prodotti);

        label_2 = new QLabel(HContainer_generic_product);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leCosto = new QLineEdit(HContainer_generic_product);
        leCosto->setObjectName(QString::fromUtf8("leCosto"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leCosto);


        verticalLayout->addLayout(formLayout);


        retranslateUi(HContainer_generic_product);

        QMetaObject::connectSlotsByName(HContainer_generic_product);
    } // setupUi

    void retranslateUi(QWidget *HContainer_generic_product)
    {
        HContainer_generic_product->setWindowTitle(QCoreApplication::translate("HContainer_generic_product", "Aggiungi item", nullptr));
        label->setText(QCoreApplication::translate("HContainer_generic_product", "Prodotto:", nullptr));
        label_2->setText(QCoreApplication::translate("HContainer_generic_product", "Costo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HContainer_generic_product: public Ui_HContainer_generic_product {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCONTAINER_GENERIC_PRODUCT_H
