/********************************************************************************
** Form generated from reading UI file 'hwarehousedetails.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HWAREHOUSEDETAILS_H
#define UI_HWAREHOUSEDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HWarehouseDetails
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leFornitore;
    QLabel *label_2;
    QLineEdit *leScadenza;
    QLabel *label_3;
    QLineEdit *leLotFornitore;
    QPushButton *pushButton;

    void setupUi(QWidget *HWarehouseDetails)
    {
        if (HWarehouseDetails->objectName().isEmpty())
            HWarehouseDetails->setObjectName(QStringLiteral("HWarehouseDetails"));
        HWarehouseDetails->setWindowModality(Qt::ApplicationModal);
        HWarehouseDetails->resize(400, 138);
        verticalLayout = new QVBoxLayout(HWarehouseDetails);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HWarehouseDetails);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leFornitore = new QLineEdit(HWarehouseDetails);
        leFornitore->setObjectName(QStringLiteral("leFornitore"));
        leFornitore->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leFornitore->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, leFornitore);

        label_2 = new QLabel(HWarehouseDetails);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        leScadenza = new QLineEdit(HWarehouseDetails);
        leScadenza->setObjectName(QStringLiteral("leScadenza"));
        leScadenza->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leScadenza->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, leScadenza);

        label_3 = new QLabel(HWarehouseDetails);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        leLotFornitore = new QLineEdit(HWarehouseDetails);
        leLotFornitore->setObjectName(QStringLiteral("leLotFornitore"));
        leLotFornitore->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leLotFornitore->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, leLotFornitore);


        verticalLayout->addLayout(formLayout);

        pushButton = new QPushButton(HWarehouseDetails);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton);


        retranslateUi(HWarehouseDetails);

        QMetaObject::connectSlotsByName(HWarehouseDetails);
    } // setupUi

    void retranslateUi(QWidget *HWarehouseDetails)
    {
        HWarehouseDetails->setWindowTitle(QString());
        label->setText(QApplication::translate("HWarehouseDetails", "Fornitore:", 0));
        label_2->setText(QApplication::translate("HWarehouseDetails", "Scadenza:", 0));
        label_3->setText(QApplication::translate("HWarehouseDetails", "Lotto Fornitore:", 0));
        pushButton->setText(QApplication::translate("HWarehouseDetails", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HWarehouseDetails: public Ui_HWarehouseDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HWAREHOUSEDETAILS_H
