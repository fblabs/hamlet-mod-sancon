/********************************************************************************
** Form generated from reading UI file 'hnewproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWPRODUCT_H
#define UI_HNEWPRODUCT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
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
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QFormLayout *formLayout_3;
    QCheckBox *cbAllergenico;
    QCheckBox *cbAllergeneUSA;
    QCheckBox *cbBio;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSave;
    QPushButton *pbCancel;

    void setupUi(QWidget *HNewProduct)
    {
        if (HNewProduct->objectName().isEmpty())
            HNewProduct->setObjectName(QString::fromUtf8("HNewProduct"));
        HNewProduct->setWindowModality(Qt::ApplicationModal);
        HNewProduct->resize(547, 176);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNewProduct->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HNewProduct);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HNewProduct);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leDescrizione = new QLineEdit(HNewProduct);
        leDescrizione->setObjectName(QString::fromUtf8("leDescrizione"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leDescrizione);


        verticalLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_2 = new QLabel(HNewProduct);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(HNewProduct);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBox);


        verticalLayout->addLayout(formLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        cbAllergenico = new QCheckBox(HNewProduct);
        cbAllergenico->setObjectName(QString::fromUtf8("cbAllergenico"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, cbAllergenico);

        cbAllergeneUSA = new QCheckBox(HNewProduct);
        cbAllergeneUSA->setObjectName(QString::fromUtf8("cbAllergeneUSA"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cbAllergeneUSA);


        verticalLayout->addLayout(formLayout_3);

        cbBio = new QCheckBox(HNewProduct);
        cbBio->setObjectName(QString::fromUtf8("cbBio"));

        verticalLayout->addWidget(cbBio);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbSave = new QPushButton(HNewProduct);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon1);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pbCancel = new QPushButton(HNewProduct);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
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
        HNewProduct->setWindowTitle(QCoreApplication::translate("HNewProduct", "Nuovo Prodotto", nullptr));
        label->setText(QCoreApplication::translate("HNewProduct", "Descrizione", nullptr));
        label_2->setText(QCoreApplication::translate("HNewProduct", "Tipo", nullptr));
        cbAllergenico->setText(QCoreApplication::translate("HNewProduct", "Allergene", nullptr));
        cbAllergeneUSA->setText(QCoreApplication::translate("HNewProduct", "Allergene USA", nullptr));
        cbBio->setText(QCoreApplication::translate("HNewProduct", "Bio", nullptr));
        pbSave->setText(QCoreApplication::translate("HNewProduct", "Salva", nullptr));
        pbCancel->setText(QCoreApplication::translate("HNewProduct", "Annulla", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HNewProduct: public Ui_HNewProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWPRODUCT_H
