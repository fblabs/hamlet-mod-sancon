/********************************************************************************
** Form generated from reading UI file 'hcalcolo_costi_item_set.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCALCOLO_COSTI_ITEM_SET_H
#define UI_HCALCOLO_COSTI_ITEM_SET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HCalcolo_costi_item_set
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
    QHBoxLayout *horizontalLayout;
    QPushButton *pbOk;
    QPushButton *pbClose;

    void setupUi(QWidget *HCalcolo_costi_item_set)
    {
        if (HCalcolo_costi_item_set->objectName().isEmpty())
            HCalcolo_costi_item_set->setObjectName(QString::fromUtf8("HCalcolo_costi_item_set"));
        HCalcolo_costi_item_set->resize(500, 300);
        verticalLayout = new QVBoxLayout(HCalcolo_costi_item_set);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbProdotti = new QComboBox(HCalcolo_costi_item_set);
        cbProdotti->setObjectName(QString::fromUtf8("cbProdotti"));
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout->addWidget(cbProdotti);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lb_costo = new QLabel(HCalcolo_costi_item_set);
        lb_costo->setObjectName(QString::fromUtf8("lb_costo"));
        lb_costo->setMinimumSize(QSize(60, 0));
        lb_costo->setMaximumSize(QSize(70, 16777215));

        formLayout->setWidget(0, QFormLayout::LabelRole, lb_costo);

        le_costo = new QLineEdit(HCalcolo_costi_item_set);
        le_costo->setObjectName(QString::fromUtf8("le_costo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, le_costo);


        verticalLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        lbAmount = new QLabel(HCalcolo_costi_item_set);
        lbAmount->setObjectName(QString::fromUtf8("lbAmount"));
        lbAmount->setMinimumSize(QSize(70, 0));
        lbAmount->setMaximumSize(QSize(70, 16777215));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, lbAmount);

        leAmount = new QLineEdit(HCalcolo_costi_item_set);
        leAmount->setObjectName(QString::fromUtf8("leAmount"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leAmount);


        verticalLayout->addLayout(formLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        lb_result = new QLabel(HCalcolo_costi_item_set);
        lb_result->setObjectName(QString::fromUtf8("lb_result"));
        lb_result->setMinimumSize(QSize(70, 0));
        lb_result->setMaximumSize(QSize(70, 16777215));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, lb_result);

        leResult = new QLineEdit(HCalcolo_costi_item_set);
        leResult->setObjectName(QString::fromUtf8("leResult"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, leResult);


        verticalLayout->addLayout(formLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbOk = new QPushButton(HCalcolo_costi_item_set);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbOk->setIcon(icon);

        horizontalLayout->addWidget(pbOk);

        pbClose = new QPushButton(HCalcolo_costi_item_set);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon1);

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HCalcolo_costi_item_set);

        QMetaObject::connectSlotsByName(HCalcolo_costi_item_set);
    } // setupUi

    void retranslateUi(QWidget *HCalcolo_costi_item_set)
    {
        HCalcolo_costi_item_set->setWindowTitle(QCoreApplication::translate("HCalcolo_costi_item_set", "Form", nullptr));
        lb_costo->setText(QCoreApplication::translate("HCalcolo_costi_item_set", "Costo/unit\303\240:", nullptr));
        lbAmount->setText(QCoreApplication::translate("HCalcolo_costi_item_set", "Quantit\303\240:", nullptr));
        lb_result->setText(QCoreApplication::translate("HCalcolo_costi_item_set", "Costo:", nullptr));
        pbOk->setText(QCoreApplication::translate("HCalcolo_costi_item_set", "OK", nullptr));
        pbClose->setText(QCoreApplication::translate("HCalcolo_costi_item_set", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HCalcolo_costi_item_set: public Ui_HCalcolo_costi_item_set {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCALCOLO_COSTI_ITEM_SET_H
