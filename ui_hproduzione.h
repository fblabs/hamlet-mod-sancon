/********************************************************************************
** Form generated from reading UI file 'hproduzione.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPRODUZIONE_H
#define UI_HPRODUZIONE_H

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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HProduzione
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QComboBox *cbClienti;
    QListView *lvRicette;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *lbQty;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *cbUsaSublienti;
    QComboBox *cbSubClienti;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_3;
    QLineEdit *leIngrediente;
    QLineEdit *leLot;
    QComboBox *cbQuantiItem;
    QListView *lvLastlots;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QTableView *tableView;
    QFormLayout *formLayout_4;
    QLabel *label_2;
    QLineEdit *leDaFare;
    QLabel *label_6;
    QLineEdit *leLotToAdd;
    QLabel *label_4;
    QLineEdit *leQtyToAdd;
    QFormLayout *formLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HProduzione)
    {
        if (HProduzione->objectName().isEmpty())
            HProduzione->setObjectName(QStringLiteral("HProduzione"));
        HProduzione->setWindowModality(Qt::ApplicationModal);
        HProduzione->resize(1310, 698);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Gears.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HProduzione->setWindowIcon(icon);
        verticalLayout_7 = new QVBoxLayout(HProduzione);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_3 = new QLabel(HProduzione);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        cbClienti = new QComboBox(HProduzione);
        cbClienti->setObjectName(QStringLiteral("cbClienti"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, cbClienti);


        verticalLayout_5->addLayout(formLayout_2);

        lvRicette = new QListView(HProduzione);
        lvRicette->setObjectName(QStringLiteral("lvRicette"));
        lvRicette->setEnabled(true);

        verticalLayout_5->addWidget(lvRicette);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HProduzione);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(HProduzione);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);


        verticalLayout_5->addLayout(formLayout);

        lbQty = new QLabel(HProduzione);
        lbQty->setObjectName(QStringLiteral("lbQty"));

        verticalLayout_5->addWidget(lbQty);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cbUsaSublienti = new QCheckBox(HProduzione);
        cbUsaSublienti->setObjectName(QStringLiteral("cbUsaSublienti"));

        horizontalLayout_2->addWidget(cbUsaSublienti);

        cbSubClienti = new QComboBox(HProduzione);
        cbSubClienti->setObjectName(QStringLiteral("cbSubClienti"));
        cbSubClienti->setEnabled(false);

        horizontalLayout_2->addWidget(cbSubClienti);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));

        verticalLayout_3->addLayout(formLayout_3);

        leIngrediente = new QLineEdit(HProduzione);
        leIngrediente->setObjectName(QStringLiteral("leIngrediente"));
        leIngrediente->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(leIngrediente);

        leLot = new QLineEdit(HProduzione);
        leLot->setObjectName(QStringLiteral("leLot"));
        leLot->setReadOnly(true);

        verticalLayout_3->addWidget(leLot);

        cbQuantiItem = new QComboBox(HProduzione);
        cbQuantiItem->setObjectName(QStringLiteral("cbQuantiItem"));

        verticalLayout_3->addWidget(cbQuantiItem);

        lvLastlots = new QListView(HProduzione);
        lvLastlots->setObjectName(QStringLiteral("lvLastlots"));
        lvLastlots->setEnabled(false);

        verticalLayout_3->addWidget(lvLastlots);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(HProduzione);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        tableView = new QTableView(HProduzione);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEnabled(false);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(tableView);


        verticalLayout_6->addLayout(verticalLayout_2);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(HProduzione);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_2);

        leDaFare = new QLineEdit(HProduzione);
        leDaFare->setObjectName(QStringLiteral("leDaFare"));
        leDaFare->setReadOnly(false);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, leDaFare);

        label_6 = new QLabel(HProduzione);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setFamily(QStringLiteral("Trebuchet MS"));
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("color:rgb(0, 0, 255)"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_6);

        leLotToAdd = new QLineEdit(HProduzione);
        leLotToAdd->setObjectName(QStringLiteral("leLotToAdd"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, leLotToAdd);

        label_4 = new QLabel(HProduzione);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color:rgb(0, 0, 255)"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_4);

        leQtyToAdd = new QLineEdit(HProduzione);
        leQtyToAdd->setObjectName(QStringLiteral("leQtyToAdd"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, leQtyToAdd);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));

        formLayout_4->setLayout(3, QFormLayout::FieldRole, formLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_2 = new QPushButton(HProduzione);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(HProduzione);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(pushButton_5);


        formLayout_4->setLayout(4, QFormLayout::FieldRole, horizontalLayout_4);


        verticalLayout_6->addLayout(formLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(HProduzione);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(HProduzione);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(HProduzione);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Arrow-Down.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon3);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_3 = new QPushButton(HProduzione);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_7->addLayout(horizontalLayout);


        retranslateUi(HProduzione);

        QMetaObject::connectSlotsByName(HProduzione);
    } // setupUi

    void retranslateUi(QWidget *HProduzione)
    {
        HProduzione->setWindowTitle(QApplication::translate("HProduzione", "Produzione", 0));
        label_3->setText(QApplication::translate("HProduzione", "Cliente:", 0));
        label->setText(QApplication::translate("HProduzione", "cerca ricetta", 0));
        lbQty->setText(QApplication::translate("HProduzione", "Quantit\303\240", 0));
        cbUsaSublienti->setText(QApplication::translate("HProduzione", "Mostra subclienti", 0));
        label_5->setText(QApplication::translate("HProduzione", "Ricetta in produzione", 0));
        label_2->setText(QApplication::translate("HProduzione", "Quantit\303\240 Totale prod.", 0));
        label_6->setText(QApplication::translate("HProduzione", "lot da aggiungere:", 0));
        label_4->setText(QApplication::translate("HProduzione", "Quantit\303\240 da aggiungere:", 0));
        pushButton_2->setText(QApplication::translate("HProduzione", "Aggiungi", 0));
        pushButton_5->setText(QApplication::translate("HProduzione", "Rimuovi", 0));
        pushButton->setText(QApplication::translate("HProduzione", "Inizia", 0));
        pushButton_4->setText(QApplication::translate("HProduzione", "Annulla Produzione", 0));
        pushButton_6->setText(QApplication::translate("HProduzione", "Salva", 0));
        pushButton_3->setText(QApplication::translate("HProduzione", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HProduzione: public Ui_HProduzione {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRODUZIONE_H
