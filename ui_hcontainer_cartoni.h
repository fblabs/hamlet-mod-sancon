/********************************************************************************
** Form generated from reading UI file 'hcontainer_cartoni.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCONTAINER_CARTONI_H
#define UI_HCONTAINER_CARTONI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HContainer_cartoni
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cbCartoni;
    QLabel *label_3;
    QLineEdit *le_costo_cartone;
    QLabel *label_2;
    QLineEdit *le_pezzi;
    QPushButton *pbCalculate;
    QLabel *label_4;
    QLineEdit *le_costo_per_pezzo;

    void setupUi(QWidget *HContainer_cartoni)
    {
        if (HContainer_cartoni->objectName().isEmpty())
            HContainer_cartoni->setObjectName(QString::fromUtf8("HContainer_cartoni"));
        HContainer_cartoni->resize(316, 149);
        verticalLayout = new QVBoxLayout(HContainer_cartoni);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(HContainer_cartoni);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cbCartoni = new QComboBox(HContainer_cartoni);
        cbCartoni->setObjectName(QString::fromUtf8("cbCartoni"));
        cbCartoni->setEnabled(true);
        cbCartoni->setEditable(true);
        cbCartoni->setInsertPolicy(QComboBox::NoInsert);

        gridLayout->addWidget(cbCartoni, 0, 1, 1, 1);

        label_3 = new QLabel(HContainer_cartoni);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        le_costo_cartone = new QLineEdit(HContainer_cartoni);
        le_costo_cartone->setObjectName(QString::fromUtf8("le_costo_cartone"));

        gridLayout->addWidget(le_costo_cartone, 1, 1, 1, 1);

        label_2 = new QLabel(HContainer_cartoni);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        le_pezzi = new QLineEdit(HContainer_cartoni);
        le_pezzi->setObjectName(QString::fromUtf8("le_pezzi"));

        gridLayout->addWidget(le_pezzi, 2, 1, 1, 1);

        pbCalculate = new QPushButton(HContainer_cartoni);
        pbCalculate->setObjectName(QString::fromUtf8("pbCalculate"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Monitoring64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCalculate->setIcon(icon);

        gridLayout->addWidget(pbCalculate, 2, 2, 1, 1);

        label_4 = new QLabel(HContainer_cartoni);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        le_costo_per_pezzo = new QLineEdit(HContainer_cartoni);
        le_costo_per_pezzo->setObjectName(QString::fromUtf8("le_costo_per_pezzo"));

        gridLayout->addWidget(le_costo_per_pezzo, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(HContainer_cartoni);

        QMetaObject::connectSlotsByName(HContainer_cartoni);
    } // setupUi

    void retranslateUi(QWidget *HContainer_cartoni)
    {
        HContainer_cartoni->setWindowTitle(QCoreApplication::translate("HContainer_cartoni", "Aggiungi item", nullptr));
        label->setText(QCoreApplication::translate("HContainer_cartoni", "Cartone:", nullptr));
        label_3->setText(QCoreApplication::translate("HContainer_cartoni", "Costo cartone:", nullptr));
        label_2->setText(QCoreApplication::translate("HContainer_cartoni", "Pezzi x cartone:", nullptr));
        pbCalculate->setText(QString());
        label_4->setText(QCoreApplication::translate("HContainer_cartoni", "Costo per pezzo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HContainer_cartoni: public Ui_HContainer_cartoni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCONTAINER_CARTONI_H
