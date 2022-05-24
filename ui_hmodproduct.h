/********************************************************************************
** Form generated from reading UI file 'hmodproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODPRODUCT_H
#define UI_HMODPRODUCT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HModProduct
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lePrice;
    QLabel *label_3;
    QComboBox *cbType;
    QDateEdit *deLastUpdate;
    QLineEdit *leDescription;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cbAllergene;
    QCheckBox *cbActive;
    QCheckBox *cbBio;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HModProduct)
    {
        if (HModProduct->objectName().isEmpty())
            HModProduct->setObjectName(QString::fromUtf8("HModProduct"));
        HModProduct->setWindowModality(Qt::ApplicationModal);
        HModProduct->resize(499, 234);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Eye64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HModProduct->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HModProduct);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(HModProduct);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label = new QLabel(HModProduct);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 0));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(HModProduct);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lePrice = new QLineEdit(HModProduct);
        lePrice->setObjectName(QString::fromUtf8("lePrice"));
        lePrice->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(lePrice, 4, 1, 1, 1);

        label_3 = new QLabel(HModProduct);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        cbType = new QComboBox(HModProduct);
        cbType->setObjectName(QString::fromUtf8("cbType"));

        gridLayout->addWidget(cbType, 1, 1, 1, 1);

        deLastUpdate = new QDateEdit(HModProduct);
        deLastUpdate->setObjectName(QString::fromUtf8("deLastUpdate"));
        deLastUpdate->setMaximumSize(QSize(100, 16777215));
        deLastUpdate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        deLastUpdate->setAccelerated(true);
        deLastUpdate->setKeyboardTracking(false);
        deLastUpdate->setDateTime(QDateTime(QDate(2022, 1, 1), QTime(0, 0, 0)));
        deLastUpdate->setCalendarPopup(true);

        gridLayout->addWidget(deLastUpdate, 5, 1, 1, 1);

        leDescription = new QLineEdit(HModProduct);
        leDescription->setObjectName(QString::fromUtf8("leDescription"));

        gridLayout->addWidget(leDescription, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cbAllergene = new QCheckBox(HModProduct);
        cbAllergene->setObjectName(QString::fromUtf8("cbAllergene"));

        horizontalLayout->addWidget(cbAllergene);

        cbActive = new QCheckBox(HModProduct);
        cbActive->setObjectName(QString::fromUtf8("cbActive"));

        horizontalLayout->addWidget(cbActive);

        cbBio = new QCheckBox(HModProduct);
        cbBio->setObjectName(QString::fromUtf8("cbBio"));

        horizontalLayout->addWidget(cbBio);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbSave = new QPushButton(HModProduct);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon1);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbSave);

        pbClose = new QPushButton(HModProduct);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(HModProduct);

        QMetaObject::connectSlotsByName(HModProduct);
    } // setupUi

    void retranslateUi(QWidget *HModProduct)
    {
        HModProduct->setWindowTitle(QCoreApplication::translate("HModProduct", "Modifica Prodotto", nullptr));
        label_4->setText(QCoreApplication::translate("HModProduct", "<html><head/><body><p>Ultimo <br>aggiornamento</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("HModProduct", "Descrizione", nullptr));
        label_2->setText(QCoreApplication::translate("HModProduct", "Tipo:", nullptr));
        label_3->setText(QCoreApplication::translate("HModProduct", "Prezzo:", nullptr));
        deLastUpdate->setSpecialValueText(QCoreApplication::translate("HModProduct", "---", nullptr));
        cbAllergene->setText(QCoreApplication::translate("HModProduct", "Allergene", nullptr));
        cbActive->setText(QCoreApplication::translate("HModProduct", "Attivo", nullptr));
        cbBio->setText(QCoreApplication::translate("HModProduct", "Bio", nullptr));
        pbSave->setText(QCoreApplication::translate("HModProduct", "Salva", nullptr));
        pbClose->setText(QCoreApplication::translate("HModProduct", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HModProduct: public Ui_HModProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODPRODUCT_H
