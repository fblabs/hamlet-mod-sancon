/********************************************************************************
** Form generated from reading UI file 'hnewproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWPRODUCT_H
#define UI_HNEWPRODUCT_H

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

class Ui_HNewProduct
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leDescrizione;
    QLabel *label_2;
    QComboBox *comboBox;
    QCheckBox *cbAllergenico;
    QCheckBox *cbBio;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSave;
    QPushButton *pbCancel;

    void setupUi(QWidget *HNewProduct)
    {
        if (HNewProduct->objectName().isEmpty())
            HNewProduct->setObjectName(QStringLiteral("HNewProduct"));
        HNewProduct->setWindowModality(Qt::ApplicationModal);
        HNewProduct->resize(547, 170);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNewProduct->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HNewProduct);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HNewProduct);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leDescrizione = new QLineEdit(HNewProduct);
        leDescrizione->setObjectName(QStringLiteral("leDescrizione"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leDescrizione);

        label_2 = new QLabel(HNewProduct);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(HNewProduct);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        cbAllergenico = new QCheckBox(HNewProduct);
        cbAllergenico->setObjectName(QStringLiteral("cbAllergenico"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cbAllergenico);

        cbBio = new QCheckBox(HNewProduct);
        cbBio->setObjectName(QStringLiteral("cbBio"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cbBio);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbSave = new QPushButton(HNewProduct);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon1);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pbCancel = new QPushButton(HNewProduct);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCancel->setIcon(icon2);
        pbCancel->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbCancel);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(leDescrizione, comboBox);
        QWidget::setTabOrder(comboBox, pbSave);
        QWidget::setTabOrder(pbSave, pbCancel);

        retranslateUi(HNewProduct);

        QMetaObject::connectSlotsByName(HNewProduct);
    } // setupUi

    void retranslateUi(QWidget *HNewProduct)
    {
        HNewProduct->setWindowTitle(QApplication::translate("HNewProduct", "Nuovo Prodotto", 0));
        label->setText(QApplication::translate("HNewProduct", "Descrizione", 0));
        label_2->setText(QApplication::translate("HNewProduct", "Tipo", 0));
        cbAllergenico->setText(QApplication::translate("HNewProduct", "Allergene", 0));
        cbBio->setText(QApplication::translate("HNewProduct", "Bio", 0));
        pbSave->setText(QApplication::translate("HNewProduct", "Salva", 0));
        pbCancel->setText(QApplication::translate("HNewProduct", "Annulla", 0));
    } // retranslateUi

};

namespace Ui {
    class HNewProduct: public Ui_HNewProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWPRODUCT_H
