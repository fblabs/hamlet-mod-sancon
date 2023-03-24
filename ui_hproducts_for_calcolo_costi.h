/********************************************************************************
** Form generated from reading UI file 'hproducts_for_calcolo_costi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPRODUCTS_FOR_CALCOLO_COSTI_H
#define UI_HPRODUCTS_FOR_CALCOLO_COSTI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HProducts_for_calcolo_costi
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *cbTipologie;
    QCheckBox *chkGeneric;
    QSpacerItem *horizontalSpacer;
    QWidget *container_widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbAdd;
    QPushButton *pbClose;

    void setupUi(QWidget *HProducts_for_calcolo_costi)
    {
        if (HProducts_for_calcolo_costi->objectName().isEmpty())
            HProducts_for_calcolo_costi->setObjectName(QString::fromUtf8("HProducts_for_calcolo_costi"));
        HProducts_for_calcolo_costi->setWindowModality(Qt::ApplicationModal);
        HProducts_for_calcolo_costi->resize(457, 378);
        verticalLayout = new QVBoxLayout(HProducts_for_calcolo_costi);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(HProducts_for_calcolo_costi);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        cbTipologie = new QComboBox(HProducts_for_calcolo_costi);
        cbTipologie->setObjectName(QString::fromUtf8("cbTipologie"));
        cbTipologie->setMinimumSize(QSize(150, 0));
        cbTipologie->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(cbTipologie, 1, 3, 1, 1);

        chkGeneric = new QCheckBox(HProducts_for_calcolo_costi);
        chkGeneric->setObjectName(QString::fromUtf8("chkGeneric"));
        chkGeneric->setMaximumSize(QSize(100, 16777215));
        chkGeneric->setChecked(false);

        gridLayout->addWidget(chkGeneric, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        container_widget = new QWidget(HProducts_for_calcolo_costi);
        container_widget->setObjectName(QString::fromUtf8("container_widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(container_widget->sizePolicy().hasHeightForWidth());
        container_widget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(container_widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbAdd = new QPushButton(HProducts_for_calcolo_costi);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));

        horizontalLayout->addWidget(pbAdd);

        pbClose = new QPushButton(HProducts_for_calcolo_costi);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HProducts_for_calcolo_costi);

        QMetaObject::connectSlotsByName(HProducts_for_calcolo_costi);
    } // setupUi

    void retranslateUi(QWidget *HProducts_for_calcolo_costi)
    {
        HProducts_for_calcolo_costi->setWindowTitle(QCoreApplication::translate("HProducts_for_calcolo_costi", "Aggiungi componente costo", nullptr));
        label_2->setText(QCoreApplication::translate("HProducts_for_calcolo_costi", "Tipo:", nullptr));
        chkGeneric->setText(QCoreApplication::translate("HProducts_for_calcolo_costi", "Prodotti", nullptr));
        pbAdd->setText(QCoreApplication::translate("HProducts_for_calcolo_costi", "Aggiungi", nullptr));
        pbClose->setText(QCoreApplication::translate("HProducts_for_calcolo_costi", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HProducts_for_calcolo_costi: public Ui_HProducts_for_calcolo_costi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRODUCTS_FOR_CALCOLO_COSTI_H
