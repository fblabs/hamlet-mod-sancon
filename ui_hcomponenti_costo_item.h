/********************************************************************************
** Form generated from reading UI file 'hcomponenti_costo_item.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCOMPONENTI_COSTO_ITEM_H
#define UI_HCOMPONENTI_COSTO_ITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HComponenti_costo_Item
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *lbComponente;
    QLabel *label_2;
    QLineEdit *leCosto;
    QPushButton *pbOk;

    void setupUi(QWidget *HComponenti_costo_Item)
    {
        if (HComponenti_costo_Item->objectName().isEmpty())
            HComponenti_costo_Item->setObjectName(QString::fromUtf8("HComponenti_costo_Item"));
        HComponenti_costo_Item->resize(400, 111);
        verticalLayout = new QVBoxLayout(HComponenti_costo_Item);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HComponenti_costo_Item);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lbComponente = new QLabel(HComponenti_costo_Item);
        lbComponente->setObjectName(QString::fromUtf8("lbComponente"));
        lbComponente->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lbComponente);

        label_2 = new QLabel(HComponenti_costo_Item);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leCosto = new QLineEdit(HComponenti_costo_Item);
        leCosto->setObjectName(QString::fromUtf8("leCosto"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leCosto);


        verticalLayout->addLayout(formLayout);

        pbOk = new QPushButton(HComponenti_costo_Item);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));

        verticalLayout->addWidget(pbOk);


        retranslateUi(HComponenti_costo_Item);

        QMetaObject::connectSlotsByName(HComponenti_costo_Item);
    } // setupUi

    void retranslateUi(QWidget *HComponenti_costo_Item)
    {
        HComponenti_costo_Item->setWindowTitle(QCoreApplication::translate("HComponenti_costo_Item", "Aggiungi componente costo", nullptr));
        label->setText(QCoreApplication::translate("HComponenti_costo_Item", "Componente:", nullptr));
        lbComponente->setText(QString());
        label_2->setText(QCoreApplication::translate("HComponenti_costo_Item", "Costo:", nullptr));
        pbOk->setText(QCoreApplication::translate("HComponenti_costo_Item", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HComponenti_costo_Item: public Ui_HComponenti_costo_Item {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCOMPONENTI_COSTO_ITEM_H
