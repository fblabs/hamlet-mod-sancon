/********************************************************************************
** Form generated from reading UI file 'hnewop.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWOP_H
#define UI_HNEWOP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HNewOp
{
public:
    QLabel *label_5;
    QListView *lvprodotti;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout_6;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QComboBox *cbTipoLotto;
    QFormLayout *formLayout_5;
    QLabel *label;
    QComboBox *cbUm;
    QGridLayout *gridLayout;
    QFormLayout *formLayout_4;
    QLabel *label_10;
    QLineEdit *leG;
    QLineEdit *leM;
    QLineEdit *leY;
    QFormLayout *formLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *leLot;
    QLineEdit *leQuantity;
    QLineEdit *leLotFornitore;
    QLineEdit *leNote;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *HNewOp)
    {
        if (HNewOp->objectName().isEmpty())
            HNewOp->setObjectName(QString::fromUtf8("HNewOp"));
        HNewOp->resize(1221, 688);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Upload.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNewOp->setWindowIcon(icon);
        label_5 = new QLabel(HNewOp);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 407, 73, 16));
        lvprodotti = new QListView(HNewOp);
        lvprodotti->setObjectName(QString::fromUtf8("lvprodotti"));
        lvprodotti->setGeometry(QRect(10, 244, 1201, 157));
        layoutWidget = new QWidget(HNewOp);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 471, 200));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout_7->addLayout(horizontalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);

        cbTipoLotto = new QComboBox(layoutWidget);
        cbTipoLotto->setObjectName(QString::fromUtf8("cbTipoLotto"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cbTipoLotto);


        formLayout_6->setLayout(0, QFormLayout::LabelRole, formLayout_3);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label);

        cbUm = new QComboBox(layoutWidget);
        cbUm->setObjectName(QString::fromUtf8("cbUm"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, cbUm);


        formLayout_6->setLayout(0, QFormLayout::FieldRole, formLayout_5);


        verticalLayout_6->addLayout(formLayout_6);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_10);

        leG = new QLineEdit(layoutWidget);
        leG->setObjectName(QString::fromUtf8("leG"));
        leG->setReadOnly(false);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, leG);


        gridLayout->addLayout(formLayout_4, 0, 0, 1, 1);

        leM = new QLineEdit(layoutWidget);
        leM->setObjectName(QString::fromUtf8("leM"));
        leM->setReadOnly(false);

        gridLayout->addWidget(leM, 0, 1, 1, 1);

        leY = new QLineEdit(layoutWidget);
        leY->setObjectName(QString::fromUtf8("leY"));
        leY->setReadOnly(false);

        gridLayout->addWidget(leY, 0, 2, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_4->addWidget(label_11);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_4->addWidget(label_7);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        leLot = new QLineEdit(layoutWidget);
        leLot->setObjectName(QString::fromUtf8("leLot"));

        verticalLayout_5->addWidget(leLot);

        leQuantity = new QLineEdit(layoutWidget);
        leQuantity->setObjectName(QString::fromUtf8("leQuantity"));
        leQuantity->setReadOnly(false);

        verticalLayout_5->addWidget(leQuantity);

        leLotFornitore = new QLineEdit(layoutWidget);
        leLotFornitore->setObjectName(QString::fromUtf8("leLotFornitore"));
        leLotFornitore->setReadOnly(false);
        leLotFornitore->setClearButtonEnabled(true);

        verticalLayout_5->addWidget(leLotFornitore);

        leNote = new QLineEdit(layoutWidget);
        leNote->setObjectName(QString::fromUtf8("leNote"));

        verticalLayout_5->addWidget(leNote);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, verticalLayout_5);


        gridLayout->addLayout(formLayout_2, 1, 0, 1, 2);


        verticalLayout_6->addLayout(gridLayout);


        verticalLayout_7->addLayout(verticalLayout_6);

        layoutWidget1 = new QWidget(HNewOp);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 219, 118, 19));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_3->addWidget(radioButton_2);

        layoutWidget2 = new QWidget(HNewOp);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 452, 1201, 186));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        listView = new QListView(layoutWidget2);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout_2->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout_2->addLayout(horizontalLayout);

        layoutWidget3 = new QWidget(HNewOp);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 644, 158, 42));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_2);

        lineEdit = new QLineEdit(HNewOp);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 426, 133, 20));
        QWidget::setTabOrder(leG, leM);
        QWidget::setTabOrder(leM, leY);
        QWidget::setTabOrder(leY, leLotFornitore);
        QWidget::setTabOrder(leLotFornitore, leQuantity);
        QWidget::setTabOrder(leQuantity, listView);
        QWidget::setTabOrder(listView, cbUm);
        QWidget::setTabOrder(cbUm, cbTipoLotto);
        QWidget::setTabOrder(cbTipoLotto, lvprodotti);

        retranslateUi(HNewOp);

        QMetaObject::connectSlotsByName(HNewOp);
    } // setupUi

    void retranslateUi(QWidget *HNewOp)
    {
        HNewOp->setWindowTitle(QCoreApplication::translate("HNewOp", "Nuova Operazione", nullptr));
        label_5->setText(QCoreApplication::translate("HNewOp", "Cerca prodotto", nullptr));
        label_2->setText(QCoreApplication::translate("HNewOp", "Tipoprodotto", nullptr));
        label->setText(QCoreApplication::translate("HNewOp", "Unit\303\240 di misura", nullptr));
        label_10->setText(QCoreApplication::translate("HNewOp", "Scadenza", nullptr));
        leG->setInputMask(QString());
        leG->setPlaceholderText(QCoreApplication::translate("HNewOp", "GG", nullptr));
        leM->setInputMask(QString());
        leM->setPlaceholderText(QCoreApplication::translate("HNewOp", "MM", nullptr));
        leY->setInputMask(QString());
        leY->setPlaceholderText(QCoreApplication::translate("HNewOp", "YYYY", nullptr));
        label_3->setText(QCoreApplication::translate("HNewOp", "Lotto", nullptr));
        label_11->setText(QCoreApplication::translate("HNewOp", "Quantit\303\240", nullptr));
        label_7->setText(QCoreApplication::translate("HNewOp", "Lotto fornitore", nullptr));
        label_4->setText(QCoreApplication::translate("HNewOp", "Note", nullptr));
        leLotFornitore->setText(QString());
        leLotFornitore->setPlaceholderText(QString());
        radioButton->setText(QCoreApplication::translate("HNewOp", "Carico", nullptr));
        radioButton_2->setText(QCoreApplication::translate("HNewOp", "Scarico", nullptr));
        label_9->setText(QCoreApplication::translate("HNewOp", "Fornitore:", nullptr));
        pushButton->setText(QCoreApplication::translate("HNewOp", "Salva", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HNewOp", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HNewOp: public Ui_HNewOp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWOP_H
