/********************************************************************************
** Form generated from reading UI file 'hcalcolo_costi_item.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCALCOLO_COSTI_ITEM_H
#define UI_HCALCOLO_COSTI_ITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HCalcolo_costi_item
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *cbProdotti;
    QFormLayout *formLayout;
    QLabel *lb_costo;
    QLineEdit *le_costo;
    QFormLayout *formLayout_2;
    QLabel *lbAmount;
    QLineEdit *leAmount;
    QFormLayout *formLayout_3;
    QLabel *lb_result;
    QLineEdit *leResult;

    void setupUi(QWidget *HCalcolo_costi_item)
    {
        if (HCalcolo_costi_item->objectName().isEmpty())
            HCalcolo_costi_item->setObjectName(QString::fromUtf8("HCalcolo_costi_item"));
        HCalcolo_costi_item->setWindowModality(Qt::ApplicationModal);
        HCalcolo_costi_item->resize(400, 163);
        verticalLayout = new QVBoxLayout(HCalcolo_costi_item);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbProdotti = new QComboBox(HCalcolo_costi_item);
        cbProdotti->setObjectName(QString::fromUtf8("cbProdotti"));
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout->addWidget(cbProdotti);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lb_costo = new QLabel(HCalcolo_costi_item);
        lb_costo->setObjectName(QString::fromUtf8("lb_costo"));
        lb_costo->setMinimumSize(QSize(60, 0));
        lb_costo->setMaximumSize(QSize(70, 16777215));

        formLayout->setWidget(0, QFormLayout::LabelRole, lb_costo);

        le_costo = new QLineEdit(HCalcolo_costi_item);
        le_costo->setObjectName(QString::fromUtf8("le_costo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, le_costo);


        verticalLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        lbAmount = new QLabel(HCalcolo_costi_item);
        lbAmount->setObjectName(QString::fromUtf8("lbAmount"));
        lbAmount->setMinimumSize(QSize(70, 0));
        lbAmount->setMaximumSize(QSize(70, 16777215));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, lbAmount);

        leAmount = new QLineEdit(HCalcolo_costi_item);
        leAmount->setObjectName(QString::fromUtf8("leAmount"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leAmount);


        verticalLayout->addLayout(formLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        lb_result = new QLabel(HCalcolo_costi_item);
        lb_result->setObjectName(QString::fromUtf8("lb_result"));
        lb_result->setMinimumSize(QSize(70, 0));
        lb_result->setMaximumSize(QSize(70, 16777215));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, lb_result);

        leResult = new QLineEdit(HCalcolo_costi_item);
        leResult->setObjectName(QString::fromUtf8("leResult"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, leResult);


        verticalLayout->addLayout(formLayout_3);


        retranslateUi(HCalcolo_costi_item);

        QMetaObject::connectSlotsByName(HCalcolo_costi_item);
    } // setupUi

    void retranslateUi(QWidget *HCalcolo_costi_item)
    {
        HCalcolo_costi_item->setWindowTitle(QCoreApplication::translate("HCalcolo_costi_item", "Aggiungi item", nullptr));
        lb_costo->setText(QCoreApplication::translate("HCalcolo_costi_item", "Costo/unit\303\240:", nullptr));
        lbAmount->setText(QCoreApplication::translate("HCalcolo_costi_item", "Quantit\303\240:", nullptr));
        lb_result->setText(QCoreApplication::translate("HCalcolo_costi_item", "Costo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HCalcolo_costi_item: public Ui_HCalcolo_costi_item {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCALCOLO_COSTI_ITEM_H
