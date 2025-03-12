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
#include <QtWidgets/QGridLayout>
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
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *leDescrizione;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *comboBox;
    QGridLayout *gridLayout;
    QCheckBox *cbAllergenico;
    QCheckBox *cbAllergene_usa;
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
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(HNewProduct);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        leDescrizione = new QLineEdit(HNewProduct);
        leDescrizione->setObjectName(QString::fromUtf8("leDescrizione"));

        horizontalLayout_2->addWidget(leDescrizione);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(HNewProduct);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        comboBox = new QComboBox(HNewProduct);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbAllergenico = new QCheckBox(HNewProduct);
        cbAllergenico->setObjectName(QString::fromUtf8("cbAllergenico"));

        gridLayout->addWidget(cbAllergenico, 0, 0, 1, 1);

        cbAllergene_usa = new QCheckBox(HNewProduct);
        cbAllergene_usa->setObjectName(QString::fromUtf8("cbAllergene_usa"));

        gridLayout->addWidget(cbAllergene_usa, 0, 1, 1, 1);

        cbBio = new QCheckBox(HNewProduct);
        cbBio->setObjectName(QString::fromUtf8("cbBio"));

        gridLayout->addWidget(cbBio, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

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
        cbAllergene_usa->setText(QCoreApplication::translate("HNewProduct", "Allergene USA", nullptr));
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
