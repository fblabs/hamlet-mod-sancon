/********************************************************************************
** Form generated from reading UI file 'hnewop.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWOP_H
#define UI_HNEWOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            HNewOp->setObjectName(QStringLiteral("HNewOp"));
        HNewOp->resize(1221, 688);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Upload.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNewOp->setWindowIcon(icon);
        label_5 = new QLabel(HNewOp);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 407, 73, 16));
        lvprodotti = new QListView(HNewOp);
        lvprodotti->setObjectName(QStringLiteral("lvprodotti"));
        lvprodotti->setGeometry(QRect(10, 244, 1201, 157));
        layoutWidget = new QWidget(HNewOp);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 471, 200));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        verticalLayout_7->addLayout(horizontalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);

        cbTipoLotto = new QComboBox(layoutWidget);
        cbTipoLotto->setObjectName(QStringLiteral("cbTipoLotto"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cbTipoLotto);


        formLayout_6->setLayout(0, QFormLayout::LabelRole, formLayout_3);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label);

        cbUm = new QComboBox(layoutWidget);
        cbUm->setObjectName(QStringLiteral("cbUm"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, cbUm);


        formLayout_6->setLayout(0, QFormLayout::FieldRole, formLayout_5);


        verticalLayout_6->addLayout(formLayout_6);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_10);

        leG = new QLineEdit(layoutWidget);
        leG->setObjectName(QStringLiteral("leG"));
        leG->setReadOnly(false);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, leG);


        gridLayout->addLayout(formLayout_4, 0, 0, 1, 1);

        leM = new QLineEdit(layoutWidget);
        leM->setObjectName(QStringLiteral("leM"));
        leM->setReadOnly(false);

        gridLayout->addWidget(leM, 0, 1, 1, 1);

        leY = new QLineEdit(layoutWidget);
        leY->setObjectName(QStringLiteral("leY"));
        leY->setReadOnly(false);

        gridLayout->addWidget(leY, 0, 2, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_4->addWidget(label_11);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        leLot = new QLineEdit(layoutWidget);
        leLot->setObjectName(QStringLiteral("leLot"));

        verticalLayout_5->addWidget(leLot);

        leQuantity = new QLineEdit(layoutWidget);
        leQuantity->setObjectName(QStringLiteral("leQuantity"));
        leQuantity->setReadOnly(false);

        verticalLayout_5->addWidget(leQuantity);

        leLotFornitore = new QLineEdit(layoutWidget);
        leLotFornitore->setObjectName(QStringLiteral("leLotFornitore"));
        leLotFornitore->setReadOnly(false);
        leLotFornitore->setClearButtonEnabled(true);

        verticalLayout_5->addWidget(leLotFornitore);

        leNote = new QLineEdit(layoutWidget);
        leNote->setObjectName(QStringLiteral("leNote"));

        verticalLayout_5->addWidget(leNote);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, verticalLayout_5);


        gridLayout->addLayout(formLayout_2, 1, 0, 1, 2);


        verticalLayout_6->addLayout(gridLayout);


        verticalLayout_7->addLayout(verticalLayout_6);

        layoutWidget1 = new QWidget(HNewOp);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 219, 118, 19));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget1);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_3->addWidget(radioButton_2);

        layoutWidget2 = new QWidget(HNewOp);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 452, 1201, 186));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        listView = new QListView(layoutWidget2);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout_2->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout_2->addLayout(horizontalLayout);

        layoutWidget3 = new QWidget(HNewOp);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 644, 158, 42));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_2);

        lineEdit = new QLineEdit(HNewOp);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
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
        HNewOp->setWindowTitle(QApplication::translate("HNewOp", "Nuova Operazione", 0));
        label_5->setText(QApplication::translate("HNewOp", "Cerca prodotto", 0));
        label_2->setText(QApplication::translate("HNewOp", "Tipoprodotto", 0));
        label->setText(QApplication::translate("HNewOp", "Unit\303\240 di misura", 0));
        label_10->setText(QApplication::translate("HNewOp", "Scadenza", 0));
        leG->setInputMask(QString());
        leG->setPlaceholderText(QApplication::translate("HNewOp", "GG", 0));
        leM->setInputMask(QString());
        leM->setPlaceholderText(QApplication::translate("HNewOp", "MM", 0));
        leY->setInputMask(QString());
        leY->setPlaceholderText(QApplication::translate("HNewOp", "YYYY", 0));
        label_3->setText(QApplication::translate("HNewOp", "Lotto", 0));
        label_11->setText(QApplication::translate("HNewOp", "Quantit\303\240", 0));
        label_7->setText(QApplication::translate("HNewOp", "Lotto fornitore", 0));
        label_4->setText(QApplication::translate("HNewOp", "Note", 0));
        leLotFornitore->setText(QString());
        leLotFornitore->setPlaceholderText(QString());
        radioButton->setText(QApplication::translate("HNewOp", "Carico", 0));
        radioButton_2->setText(QApplication::translate("HNewOp", "Scarico", 0));
        label_9->setText(QApplication::translate("HNewOp", "Fornitore:", 0));
        pushButton->setText(QApplication::translate("HNewOp", "Salva", 0));
        pushButton_2->setText(QApplication::translate("HNewOp", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HNewOp: public Ui_HNewOp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWOP_H
