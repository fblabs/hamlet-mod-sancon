/********************************************************************************
** Form generated from reading UI file 'hprodotti.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPRODOTTI_H
#define UI_HPRODOTTI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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
            HProdotti->setObjectName(QString::fromUtf8("HProdotti"));
        HProdotti->setWindowModality(Qt::NonModal);
        HProdotti->resize(1187, 633);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Gift.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HProdotti->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(HProdotti);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HProdotti);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbxType = new QComboBox(HProdotti);
        cbxType->setObjectName(QString::fromUtf8("cbxType"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cbxType);


        verticalLayout->addLayout(formLayout);

        lvMaster = new QListView(HProdotti);
        lvMaster->setObjectName(QString::fromUtf8("lvMaster"));
        lvMaster->setMouseTracking(true);
        lvMaster->setAlternatingRowColors(true);
        lvMaster->setModelColumn(0);

        verticalLayout->addWidget(lvMaster);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(HProdotti);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lnSearch = new QLineEdit(HProdotti);
        lnSearch->setObjectName(QString::fromUtf8("lnSearch"));

        gridLayout->addWidget(lnSearch, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(HProdotti);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(HProdotti);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        lid = new QLineEdit(HProdotti);
        lid->setObjectName(QString::fromUtf8("lid"));
        lid->setReadOnly(true);

        verticalLayout_2->addWidget(lid);

        label_5 = new QLabel(HProdotti);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        desc = new QLineEdit(HProdotti);
        desc->setObjectName(QString::fromUtf8("desc"));

        verticalLayout_2->addWidget(desc);

        label_6 = new QLabel(HProdotti);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        cbxtipo = new QComboBox(HProdotti);
        cbxtipo->setObjectName(QString::fromUtf8("cbxtipo"));

        verticalLayout_2->addWidget(cbxtipo);

        label_8 = new QLabel(HProdotti);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        cbxUM = new QComboBox(HProdotti);
        cbxUM->setObjectName(QString::fromUtf8("cbxUM"));

        verticalLayout_2->addWidget(cbxUM);

        label_7 = new QLabel(HProdotti);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        cballergenico = new QCheckBox(HProdotti);
        cballergenico->setObjectName(QString::fromUtf8("cballergenico"));

        verticalLayout_2->addWidget(cballergenico);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_4 = new QPushButton(HProdotti);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);

        verticalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(HProdotti);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Download.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);

        verticalLayout_3->addWidget(pushButton_5);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_11 = new QLabel(HProdotti);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_7->addWidget(label_11);

        graphicsView = new QGraphicsView(HProdotti);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_7->addWidget(graphicsView);

        pushButton = new QPushButton(HProdotti);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Map.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);

        verticalLayout_7->addWidget(pushButton);

        pushButton_2 = new QPushButton(HProdotti);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setIcon(icon2);

        verticalLayout_7->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_7);


        verticalLayout_5->addLayout(horizontalLayout);

        pushButton_3 = new QPushButton(HProdotti);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);

        verticalLayout_5->addWidget(pushButton_3);

#if QT_CONFIG(shortcut)
        label->setBuddy(cbxType);
#endif // QT_CONFIG(shortcut)

        retranslateUi(HProdotti);

        QMetaObject::connectSlotsByName(HProdotti);
    } // setupUi

    void retranslateUi(QWidget *HProdotti)
    {
        HProdotti->setWindowTitle(QCoreApplication::translate("HProdotti", "Prodotti", nullptr));
        label->setText(QCoreApplication::translate("HProdotti", "Tipo", nullptr));
        label_2->setText(QCoreApplication::translate("HProdotti", "Cerca", nullptr));
        label_3->setText(QCoreApplication::translate("HProdotti", "DETTAGLI", nullptr));
        label_4->setText(QCoreApplication::translate("HProdotti", "ID", nullptr));
        label_5->setText(QCoreApplication::translate("HProdotti", "Descrizione", nullptr));
        label_6->setText(QCoreApplication::translate("HProdotti", "Tipo", nullptr));
        label_8->setText(QCoreApplication::translate("HProdotti", "Unit\303\240 di misura", nullptr));
        label_7->setText(QCoreApplication::translate("HProdotti", "Allergenico", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HProdotti", "Nuovo", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HProdotti", "Salva", nullptr));
        label_11->setText(QCoreApplication::translate("HProdotti", "Immagine", nullptr));
        pushButton->setText(QCoreApplication::translate("HProdotti", "seleziona immagine", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HProdotti", "Salva immagine", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HProdotti", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HProdotti: public Ui_HProdotti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRODOTTI_H
