/********************************************************************************
** Form generated from reading UI file 'hnewproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
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
    QCheckBox *cbAttivo;
    QCheckBox *cbCreaRicetta;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pbSaveAndCreate;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HNewProduct)
    {
        if (HNewProduct->objectName().isEmpty())
            HNewProduct->setObjectName(QStringLiteral("HNewProduct"));
        HNewProduct->setWindowModality(Qt::ApplicationModal);
        HNewProduct->resize(488, 208);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNewProduct->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HNewProduct);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HNewProduct);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, label);

        leDescrizione = new QLineEdit(HNewProduct);
        leDescrizione->setObjectName(QStringLiteral("leDescrizione"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leDescrizione);

        label_2 = new QLabel(HNewProduct);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(HNewProduct);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        cbAllergenico = new QCheckBox(HNewProduct);
        cbAllergenico->setObjectName(QStringLiteral("cbAllergenico"));

        formLayout->setWidget(4, QFormLayout::FieldRole, cbAllergenico);

        cbAttivo = new QCheckBox(HNewProduct);
        cbAttivo->setObjectName(QStringLiteral("cbAttivo"));

        formLayout->setWidget(5, QFormLayout::FieldRole, cbAttivo);

        cbCreaRicetta = new QCheckBox(HNewProduct);
        cbCreaRicetta->setObjectName(QStringLiteral("cbCreaRicetta"));

        formLayout->setWidget(6, QFormLayout::FieldRole, cbCreaRicetta);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(HNewProduct);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pbSaveAndCreate = new QPushButton(HNewProduct);
        pbSaveAndCreate->setObjectName(QStringLiteral("pbSaveAndCreate"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbSaveAndCreate->setIcon(icon2);
        pbSaveAndCreate->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSaveAndCreate);

        pushButton_2 = new QPushButton(HNewProduct);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(leDescrizione, comboBox);
        QWidget::setTabOrder(comboBox, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(HNewProduct);

        QMetaObject::connectSlotsByName(HNewProduct);
    } // setupUi

    void retranslateUi(QWidget *HNewProduct)
    {
        HNewProduct->setWindowTitle(QApplication::translate("HNewProduct", "Form", 0));
        label->setText(QApplication::translate("HNewProduct", "Dascrizione", 0));
        label_2->setText(QApplication::translate("HNewProduct", "Tipo", 0));
        cbAllergenico->setText(QApplication::translate("HNewProduct", "Allergenico", 0));
        cbAttivo->setText(QApplication::translate("HNewProduct", "Attivo", 0));
        cbCreaRicetta->setText(QApplication::translate("HNewProduct", "Crea ricetta", 0));
        pushButton->setText(QApplication::translate("HNewProduct", "Salva", 0));
        pbSaveAndCreate->setText(QApplication::translate("HNewProduct", "Salva e crea ricetta", 0));
        pushButton_2->setText(QApplication::translate("HNewProduct", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HNewProduct: public Ui_HNewProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWPRODUCT_H
