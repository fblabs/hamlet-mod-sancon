/********************************************************************************
** Form generated from reading UI file 'hnew_recipe_main.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEW_RECIPE_MAIN_H
#define UI_HNEW_RECIPE_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HNew_recipe_main
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_4;
    QGridLayout *gridLayout;
    QCheckBox *cb_what;
    QFormLayout *formLayout;
    QRadioButton *rbProdotto_finito;
    QRadioButton *rbSemilavorato;
    QFormLayout *formLayout_3;
    QFormLayout *formLayout_2;
    QPushButton *pbAddRecipeAndproduct;
    QPushButton *pbClose;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListView *lvProducts;
    QLineEdit *leSearchProduct;

    void setupUi(QWidget *HNew_recipe_main)
    {
        if (HNew_recipe_main->objectName().isEmpty())
            HNew_recipe_main->setObjectName(QString::fromUtf8("HNew_recipe_main"));
        HNew_recipe_main->setWindowModality(Qt::ApplicationModal);
        HNew_recipe_main->resize(529, 362);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HNew_recipe_main->sizePolicy().hasHeightForWidth());
        HNew_recipe_main->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(HNew_recipe_main);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cb_what = new QCheckBox(HNew_recipe_main);
        cb_what->setObjectName(QString::fromUtf8("cb_what"));
        cb_what->setChecked(false);

        gridLayout->addWidget(cb_what, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        rbProdotto_finito = new QRadioButton(HNew_recipe_main);
        rbProdotto_finito->setObjectName(QString::fromUtf8("rbProdotto_finito"));
        rbProdotto_finito->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, rbProdotto_finito);

        rbSemilavorato = new QRadioButton(HNew_recipe_main);
        rbSemilavorato->setObjectName(QString::fromUtf8("rbSemilavorato"));

        formLayout->setWidget(0, QFormLayout::FieldRole, rbSemilavorato);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);


        formLayout_4->setLayout(0, QFormLayout::LabelRole, gridLayout);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFormAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pbAddRecipeAndproduct = new QPushButton(HNew_recipe_main);
        pbAddRecipeAndproduct->setObjectName(QString::fromUtf8("pbAddRecipeAndproduct"));
        pbAddRecipeAndproduct->setMaximumSize(QSize(100, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/3D_Icons_Icon_256.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbAddRecipeAndproduct->setIcon(icon);
        pbAddRecipeAndproduct->setIconSize(QSize(32, 32));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, pbAddRecipeAndproduct);

        pbClose = new QPushButton(HNew_recipe_main);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        pbClose->setMaximumSize(QSize(100, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon1);
        pbClose->setIconSize(QSize(32, 32));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pbClose);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, formLayout_2);


        formLayout_4->setLayout(0, QFormLayout::FieldRole, formLayout_3);


        verticalLayout_2->addLayout(formLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(HNew_recipe_main);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lvProducts = new QListView(HNew_recipe_main);
        lvProducts->setObjectName(QString::fromUtf8("lvProducts"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lvProducts->sizePolicy().hasHeightForWidth());
        lvProducts->setSizePolicy(sizePolicy1);
        lvProducts->setMaximumSize(QSize(16777215, 200));

        verticalLayout->addWidget(lvProducts);


        verticalLayout_2->addLayout(verticalLayout);

        leSearchProduct = new QLineEdit(HNew_recipe_main);
        leSearchProduct->setObjectName(QString::fromUtf8("leSearchProduct"));
        leSearchProduct->setClearButtonEnabled(true);

        verticalLayout_2->addWidget(leSearchProduct);


        retranslateUi(HNew_recipe_main);

        QMetaObject::connectSlotsByName(HNew_recipe_main);
    } // setupUi

    void retranslateUi(QWidget *HNew_recipe_main)
    {
        HNew_recipe_main->setWindowTitle(QCoreApplication::translate("HNew_recipe_main", "Crea Ricetta", nullptr));
#if QT_CONFIG(tooltip)
        cb_what->setToolTip(QCoreApplication::translate("HNew_recipe_main", "Se  spuntato creao ricetta di un prodotto o semilavorato gi\303\240 esistent, se no crea prodotto contestualmente alla ricetta", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_what->setText(QCoreApplication::translate("HNew_recipe_main", "Crea prodotto", nullptr));
        rbProdotto_finito->setText(QCoreApplication::translate("HNew_recipe_main", "Prod. finito", nullptr));
        rbSemilavorato->setText(QCoreApplication::translate("HNew_recipe_main", "Semilavorato", nullptr));
#if QT_CONFIG(tooltip)
        pbAddRecipeAndproduct->setToolTip(QCoreApplication::translate("HNew_recipe_main", "Crea prodotto e ricetta", nullptr));
#endif // QT_CONFIG(tooltip)
        pbAddRecipeAndproduct->setText(QCoreApplication::translate("HNew_recipe_main", "Crea Ricetta", nullptr));
        pbClose->setText(QCoreApplication::translate("HNew_recipe_main", "Chiudi", nullptr));
        label->setText(QCoreApplication::translate("HNew_recipe_main", "Prodotti privi di ricetta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HNew_recipe_main: public Ui_HNew_recipe_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEW_RECIPE_MAIN_H
