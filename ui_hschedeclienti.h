/********************************************************************************
** Form generated from reading UI file 'hschedeclienti.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HSCHEDECLIENTI_H
#define UI_HSCHEDECLIENTI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <hprint.h>

QT_BEGIN_NAMESPACE

class Ui_HSchedeClienti
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QCheckBox *cbSelectCriteria;
    QListView *lvSubclienti;
    QListView *listView;
    HPrint *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_4;
    QPushButton *btnSave;
    QPushButton *btnDup;
    QPushButton *pushButton_3;
    QPushButton *pbExport;
    QPushButton *pushButton;

    void setupUi(QWidget *HSchedeClienti)
    {
        if (HSchedeClienti->objectName().isEmpty())
            HSchedeClienti->setObjectName(QString::fromUtf8("HSchedeClienti"));
        HSchedeClienti->setWindowModality(Qt::NonModal);
        HSchedeClienti->resize(806, 649);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(HSchedeClienti->sizePolicy().hasHeightForWidth());
        HSchedeClienti->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Folder.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HSchedeClienti->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HSchedeClienti);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboBox = new QComboBox(HSchedeClienti);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaximumSize(QSize(400, 16777215));
        QFont font;
        font.setPointSize(12);
        comboBox->setFont(font);
        comboBox->setEditable(true);
        comboBox->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout->addWidget(comboBox);

        cbSelectCriteria = new QCheckBox(HSchedeClienti);
        cbSelectCriteria->setObjectName(QString::fromUtf8("cbSelectCriteria"));

        verticalLayout->addWidget(cbSelectCriteria);

        lvSubclienti = new QListView(HSchedeClienti);
        lvSubclienti->setObjectName(QString::fromUtf8("lvSubclienti"));
        lvSubclienti->setMaximumSize(QSize(400, 140));
        lvSubclienti->setFont(font);

        verticalLayout->addWidget(lvSubclienti);

        listView = new QListView(HSchedeClienti);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setMinimumSize(QSize(0, 0));
        listView->setMaximumSize(QSize(400, 16777215));
        listView->setFont(font);
        listView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(listView);


        horizontalLayout->addLayout(verticalLayout);

        widget = new HPrint(HSchedeClienti);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setAutoFillBackground(false);

        horizontalLayout->addWidget(widget);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_4 = new QPushButton(HSchedeClienti);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Art-Supplies.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_4);

        btnSave = new QPushButton(HSchedeClienti);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon2);
        btnSave->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(btnSave);

        btnDup = new QPushButton(HSchedeClienti);
        btnDup->setObjectName(QString::fromUtf8("btnDup"));
        btnDup->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        btnDup->setIcon(icon3);
        btnDup->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(btnDup);

        pushButton_3 = new QPushButton(HSchedeClienti);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_3);

        pbExport = new QPushButton(HSchedeClienti);
        pbExport->setObjectName(QString::fromUtf8("pbExport"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Downright64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbExport->setIcon(icon5);
        pbExport->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbExport);

        pushButton = new QPushButton(HSchedeClienti);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon6);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(HSchedeClienti);
        QObject::connect(pushButton, SIGNAL(clicked()), HSchedeClienti, SLOT(close()));

        QMetaObject::connectSlotsByName(HSchedeClienti);
    } // setupUi

    void retranslateUi(QWidget *HSchedeClienti)
    {
        HSchedeClienti->setWindowTitle(QCoreApplication::translate("HSchedeClienti", "Schede clienti", nullptr));
        cbSelectCriteria->setText(QCoreApplication::translate("HSchedeClienti", "Seleziona le schede per subcliente", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HSchedeClienti", "Modifica", nullptr));
        btnSave->setText(QCoreApplication::translate("HSchedeClienti", "Salva", nullptr));
        btnDup->setText(QCoreApplication::translate("HSchedeClienti", "Copia da scheda...", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HSchedeClienti", "Elimina", nullptr));
        pbExport->setText(QCoreApplication::translate("HSchedeClienti", "Esporta immagini", nullptr));
        pushButton->setText(QCoreApplication::translate("HSchedeClienti", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HSchedeClienti: public Ui_HSchedeClienti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HSCHEDECLIENTI_H
