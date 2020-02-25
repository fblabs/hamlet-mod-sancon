/********************************************************************************
** Form generated from reading UI file 'hmodproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODPRODUCT_H
#define UI_HMODPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HModProduct
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leDescription;
    QLabel *label_2;
    QComboBox *cbType;
    QLabel *label_3;
    QLineEdit *lePrice;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cbAllergene;
    QCheckBox *cbActive;
    QCheckBox *cbBio;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HModProduct)
    {
        if (HModProduct->objectName().isEmpty())
            HModProduct->setObjectName(QStringLiteral("HModProduct"));
        HModProduct->setWindowModality(Qt::ApplicationModal);
        HModProduct->resize(499, 195);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Eye64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HModProduct->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HModProduct);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HModProduct);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(60, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leDescription = new QLineEdit(HModProduct);
        leDescription->setObjectName(QStringLiteral("leDescription"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leDescription);

        label_2 = new QLabel(HModProduct);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(60, 16777215));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        cbType = new QComboBox(HModProduct);
        cbType->setObjectName(QStringLiteral("cbType"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cbType);

        label_3 = new QLabel(HModProduct);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lePrice = new QLineEdit(HModProduct);
        lePrice->setObjectName(QStringLiteral("lePrice"));
        lePrice->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, lePrice);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cbAllergene = new QCheckBox(HModProduct);
        cbAllergene->setObjectName(QStringLiteral("cbAllergene"));

        horizontalLayout->addWidget(cbAllergene);

        cbActive = new QCheckBox(HModProduct);
        cbActive->setObjectName(QStringLiteral("cbActive"));

        horizontalLayout->addWidget(cbActive);

        cbBio = new QCheckBox(HModProduct);
        cbBio->setObjectName(QStringLiteral("cbBio"));

        horizontalLayout->addWidget(cbBio);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pbSave = new QPushButton(HModProduct);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon1);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbSave);

        pbClose = new QPushButton(HModProduct);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(HModProduct);

        QMetaObject::connectSlotsByName(HModProduct);
    } // setupUi

    void retranslateUi(QWidget *HModProduct)
    {
        HModProduct->setWindowTitle(QApplication::translate("HModProduct", "Modifica Prodotto", 0));
        label->setText(QApplication::translate("HModProduct", "Descrizione", 0));
        label_2->setText(QApplication::translate("HModProduct", "Tipo:", 0));
        label_3->setText(QApplication::translate("HModProduct", "Prezzo:", 0));
        cbAllergene->setText(QApplication::translate("HModProduct", "Allergene", 0));
        cbActive->setText(QApplication::translate("HModProduct", "Attivo", 0));
        cbBio->setText(QApplication::translate("HModProduct", "Bio", 0));
        pbSave->setText(QApplication::translate("HModProduct", "Salva", 0));
        pbClose->setText(QApplication::translate("HModProduct", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HModProduct: public Ui_HModProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODPRODUCT_H
