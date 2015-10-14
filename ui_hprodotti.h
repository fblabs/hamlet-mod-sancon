/********************************************************************************
** Form generated from reading UI file 'hprodotti.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPRODOTTI_H
#define UI_HPRODOTTI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HProdotti
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cbxType;
    QListView *lvMaster;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lnSearch;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lid;
    QLabel *label_5;
    QLineEdit *desc;
    QLabel *label_6;
    QComboBox *cbxtipo;
    QLabel *label_8;
    QComboBox *cbxUM;
    QLabel *label_7;
    QCheckBox *cballergenico;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HProdotti)
    {
        if (HProdotti->objectName().isEmpty())
            HProdotti->setObjectName(QStringLiteral("HProdotti"));
        HProdotti->setWindowModality(Qt::ApplicationModal);
        HProdotti->resize(1187, 633);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Gift.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HProdotti->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(HProdotti);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HProdotti);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbxType = new QComboBox(HProdotti);
        cbxType->setObjectName(QStringLiteral("cbxType"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cbxType);


        verticalLayout->addLayout(formLayout);

        lvMaster = new QListView(HProdotti);
        lvMaster->setObjectName(QStringLiteral("lvMaster"));
        lvMaster->setMouseTracking(true);
        lvMaster->setAlternatingRowColors(true);
        lvMaster->setModelColumn(0);

        verticalLayout->addWidget(lvMaster);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(HProdotti);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lnSearch = new QLineEdit(HProdotti);
        lnSearch->setObjectName(QStringLiteral("lnSearch"));

        gridLayout->addWidget(lnSearch, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(HProdotti);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(HProdotti);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        lid = new QLineEdit(HProdotti);
        lid->setObjectName(QStringLiteral("lid"));
        lid->setReadOnly(true);

        verticalLayout_2->addWidget(lid);

        label_5 = new QLabel(HProdotti);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        desc = new QLineEdit(HProdotti);
        desc->setObjectName(QStringLiteral("desc"));

        verticalLayout_2->addWidget(desc);

        label_6 = new QLabel(HProdotti);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        cbxtipo = new QComboBox(HProdotti);
        cbxtipo->setObjectName(QStringLiteral("cbxtipo"));

        verticalLayout_2->addWidget(cbxtipo);

        label_8 = new QLabel(HProdotti);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        cbxUM = new QComboBox(HProdotti);
        cbxUM->setObjectName(QStringLiteral("cbxUM"));

        verticalLayout_2->addWidget(cbxUM);

        label_7 = new QLabel(HProdotti);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        cballergenico = new QCheckBox(HProdotti);
        cballergenico->setObjectName(QStringLiteral("cballergenico"));

        verticalLayout_2->addWidget(cballergenico);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton_4 = new QPushButton(HProdotti);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);

        verticalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(HProdotti);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Download.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);

        verticalLayout_3->addWidget(pushButton_5);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_11 = new QLabel(HProdotti);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_7->addWidget(label_11);

        graphicsView = new QGraphicsView(HProdotti);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout_7->addWidget(graphicsView);

        pushButton = new QPushButton(HProdotti);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Map.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);

        verticalLayout_7->addWidget(pushButton);

        pushButton_2 = new QPushButton(HProdotti);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setIcon(icon2);

        verticalLayout_7->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_7);


        verticalLayout_5->addLayout(horizontalLayout);

        pushButton_3 = new QPushButton(HProdotti);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);

        verticalLayout_5->addWidget(pushButton_3);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(cbxType);
#endif // QT_NO_SHORTCUT

        retranslateUi(HProdotti);

        QMetaObject::connectSlotsByName(HProdotti);
    } // setupUi

    void retranslateUi(QWidget *HProdotti)
    {
        HProdotti->setWindowTitle(QApplication::translate("HProdotti", "Prodotti", 0));
        label->setText(QApplication::translate("HProdotti", "Tipo", 0));
        label_2->setText(QApplication::translate("HProdotti", "Cerca", 0));
        label_3->setText(QApplication::translate("HProdotti", "DETTAGLI", 0));
        label_4->setText(QApplication::translate("HProdotti", "ID", 0));
        label_5->setText(QApplication::translate("HProdotti", "Descrizione", 0));
        label_6->setText(QApplication::translate("HProdotti", "Tipo", 0));
        label_8->setText(QApplication::translate("HProdotti", "Unit\303\240 di misura", 0));
        label_7->setText(QApplication::translate("HProdotti", "Allergenico", 0));
        pushButton_4->setText(QApplication::translate("HProdotti", "Nuovo", 0));
        pushButton_5->setText(QApplication::translate("HProdotti", "Salva", 0));
        label_11->setText(QApplication::translate("HProdotti", "Immagine", 0));
        pushButton->setText(QApplication::translate("HProdotti", "seleziona immagine", 0));
        pushButton_2->setText(QApplication::translate("HProdotti", "Salva immagine", 0));
        pushButton_3->setText(QApplication::translate("HProdotti", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HProdotti: public Ui_HProdotti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRODOTTI_H
