/********************************************************************************
** Form generated from reading UI file 'hcartoni.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCARTONI_H
#define UI_HCARTONI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HCartoni
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_3;
    QLabel *label_13;
    QComboBox *cbCartoni;
    QLabel *label_15;
    QLineEdit *leCosto_unitario_cartone;
    QLabel *label_14;
    QLineEdit *leVasi_per_cartone;
    QLabel *label_16;
    QLineEdit *leCostoper_vaso;
    QPushButton *pbAdd;

    void setupUi(QWidget *HCartoni)
    {
        if (HCartoni->objectName().isEmpty())
            HCartoni->setObjectName(QString::fromUtf8("HCartoni"));
        HCartoni->resize(400, 300);
        verticalLayout = new QVBoxLayout(HCartoni);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_13 = new QLabel(HCartoni);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(80, 0));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_13);

        cbCartoni = new QComboBox(HCartoni);
        cbCartoni->setObjectName(QString::fromUtf8("cbCartoni"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cbCartoni);

        label_15 = new QLabel(HCartoni);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_15);

        leCosto_unitario_cartone = new QLineEdit(HCartoni);
        leCosto_unitario_cartone->setObjectName(QString::fromUtf8("leCosto_unitario_cartone"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, leCosto_unitario_cartone);

        label_14 = new QLabel(HCartoni);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_14);

        leVasi_per_cartone = new QLineEdit(HCartoni);
        leVasi_per_cartone->setObjectName(QString::fromUtf8("leVasi_per_cartone"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, leVasi_per_cartone);

        label_16 = new QLabel(HCartoni);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_16);

        leCostoper_vaso = new QLineEdit(HCartoni);
        leCostoper_vaso->setObjectName(QString::fromUtf8("leCostoper_vaso"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, leCostoper_vaso);

        pbAdd = new QPushButton(HCartoni);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, pbAdd);


        verticalLayout->addLayout(formLayout_3);


        retranslateUi(HCartoni);

        QMetaObject::connectSlotsByName(HCartoni);
    } // setupUi

    void retranslateUi(QWidget *HCartoni)
    {
        HCartoni->setWindowTitle(QCoreApplication::translate("HCartoni", "Form", nullptr));
        label_13->setText(QCoreApplication::translate("HCartoni", "Cartoni:", nullptr));
        label_15->setText(QCoreApplication::translate("HCartoni", "Costo unitario", nullptr));
        label_14->setText(QCoreApplication::translate("HCartoni", "Vasi per cartone", nullptr));
        label_16->setText(QCoreApplication::translate("HCartoni", "Costo per vaso", nullptr));
        pbAdd->setText(QCoreApplication::translate("HCartoni", "Aggiungi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HCartoni: public Ui_HCartoni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCARTONI_H
