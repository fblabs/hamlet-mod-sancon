/********************************************************************************
** Form generated from reading UI file 'hcontainer_generic.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCONTAINER_GENERIC_H
#define UI_HCONTAINER_GENERIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HContainer_generic
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leItem;
    QLabel *label_2;
    QLineEdit *leCosto;

    void setupUi(QWidget *HContainer_generic)
    {
        if (HContainer_generic->objectName().isEmpty())
            HContainer_generic->setObjectName(QString::fromUtf8("HContainer_generic"));
        HContainer_generic->resize(400, 122);
        verticalLayout = new QVBoxLayout(HContainer_generic);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(HContainer_generic);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leItem = new QLineEdit(HContainer_generic);
        leItem->setObjectName(QString::fromUtf8("leItem"));

        gridLayout->addWidget(leItem, 0, 1, 1, 1);

        label_2 = new QLabel(HContainer_generic);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        leCosto = new QLineEdit(HContainer_generic);
        leCosto->setObjectName(QString::fromUtf8("leCosto"));

        gridLayout->addWidget(leCosto, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(HContainer_generic);

        QMetaObject::connectSlotsByName(HContainer_generic);
    } // setupUi

    void retranslateUi(QWidget *HContainer_generic)
    {
        HContainer_generic->setWindowTitle(QCoreApplication::translate("HContainer_generic", "Aggiungi item", nullptr));
        label->setText(QCoreApplication::translate("HContainer_generic", "Item:", nullptr));
        label_2->setText(QCoreApplication::translate("HContainer_generic", "Costo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HContainer_generic: public Ui_HContainer_generic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCONTAINER_GENERIC_H
