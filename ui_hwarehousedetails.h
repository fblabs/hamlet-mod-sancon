/********************************************************************************
** Form generated from reading UI file 'hwarehousedetails.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HWAREHOUSEDETAILS_H
#define UI_HWAREHOUSEDETAILS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HWarehouseDetails
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leID;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDateTimeEdit *deData;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *leOperatore;
    QLabel *lbidlotto;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *leProdotto;
    QLabel *label_6;
    QLineEdit *leLotto;
    QLabel *label_10;
    QLineEdit *leGiacenza;
    QLabel *label_11;
    QDateEdit *deScadenza;
    QSplitter *splitter_3;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *leLotFornitore;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *leEAN;
    QSplitter *splitter_2;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *cbAzione;
    QLineEdit *leQuantita;
    QComboBox *cbUM;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QPlainTextEdit *ptNote;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HWarehouseDetails)
    {
        if (HWarehouseDetails->objectName().isEmpty())
            HWarehouseDetails->setObjectName(QString::fromUtf8("HWarehouseDetails"));
        HWarehouseDetails->setWindowModality(Qt::ApplicationModal);
        HWarehouseDetails->resize(894, 316);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Monitoring64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HWarehouseDetails->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HWarehouseDetails);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(HWarehouseDetails);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        leID = new QLineEdit(layoutWidget);
        leID->setObjectName(QString::fromUtf8("leID"));
        leID->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leID->setReadOnly(true);

        horizontalLayout->addWidget(leID);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        deData = new QDateTimeEdit(layoutWidget1);
        deData->setObjectName(QString::fromUtf8("deData"));
        deData->setReadOnly(true);
        deData->setCurrentSection(QDateTimeEdit::DaySection);
        deData->setCalendarPopup(true);

        horizontalLayout_4->addWidget(deData);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        leOperatore = new QLineEdit(layoutWidget2);
        leOperatore->setObjectName(QString::fromUtf8("leOperatore"));
        leOperatore->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leOperatore->setReadOnly(true);

        horizontalLayout_3->addWidget(leOperatore);

        splitter->addWidget(layoutWidget2);
        lbidlotto = new QLabel(splitter);
        lbidlotto->setObjectName(QString::fromUtf8("lbidlotto"));
        splitter->addWidget(lbidlotto);

        verticalLayout_2->addWidget(splitter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(HWarehouseDetails);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        leProdotto = new QLineEdit(HWarehouseDetails);
        leProdotto->setObjectName(QString::fromUtf8("leProdotto"));
        leProdotto->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout_2->addWidget(leProdotto);

        label_6 = new QLabel(HWarehouseDetails);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        leLotto = new QLineEdit(HWarehouseDetails);
        leLotto->setObjectName(QString::fromUtf8("leLotto"));
        leLotto->setAcceptDrops(false);
        leLotto->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout_2->addWidget(leLotto);

        label_10 = new QLabel(HWarehouseDetails);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);

        leGiacenza = new QLineEdit(HWarehouseDetails);
        leGiacenza->setObjectName(QString::fromUtf8("leGiacenza"));
        leGiacenza->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leGiacenza->setReadOnly(true);

        horizontalLayout_2->addWidget(leGiacenza);

        label_11 = new QLabel(HWarehouseDetails);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_2->addWidget(label_11);

        deScadenza = new QDateEdit(HWarehouseDetails);
        deScadenza->setObjectName(QString::fromUtf8("deScadenza"));
        deScadenza->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        deScadenza->setReadOnly(true);
        deScadenza->setCurrentSection(QDateTimeEdit::MonthSection);

        horizontalLayout_2->addWidget(deScadenza);


        verticalLayout_2->addLayout(horizontalLayout_2);

        splitter_3 = new QSplitter(HWarehouseDetails);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        layoutWidget3 = new QWidget(splitter_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        leLotFornitore = new QLineEdit(layoutWidget3);
        leLotFornitore->setObjectName(QString::fromUtf8("leLotFornitore"));
        leLotFornitore->setReadOnly(false);

        horizontalLayout_9->addWidget(leLotFornitore);

        splitter_3->addWidget(layoutWidget3);
        layoutWidget4 = new QWidget(splitter_3);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_10->addWidget(label_8);

        leEAN = new QLineEdit(layoutWidget4);
        leEAN->setObjectName(QString::fromUtf8("leEAN"));
        leEAN->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leEAN->setReadOnly(true);

        horizontalLayout_10->addWidget(leEAN);

        splitter_3->addWidget(layoutWidget4);

        verticalLayout_2->addWidget(splitter_3);

        splitter_2 = new QSplitter(HWarehouseDetails);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        layoutWidget5 = new QWidget(splitter_2);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        cbAzione = new QComboBox(layoutWidget5);
        cbAzione->setObjectName(QString::fromUtf8("cbAzione"));

        horizontalLayout_6->addWidget(cbAzione);

        leQuantita = new QLineEdit(layoutWidget5);
        leQuantita->setObjectName(QString::fromUtf8("leQuantita"));

        horizontalLayout_6->addWidget(leQuantita);

        cbUM = new QComboBox(layoutWidget5);
        cbUM->setObjectName(QString::fromUtf8("cbUM"));

        horizontalLayout_6->addWidget(cbUM);

        horizontalSpacer = new QSpacerItem(500, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        splitter_2->addWidget(layoutWidget5);

        verticalLayout_2->addWidget(splitter_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_7 = new QLabel(HWarehouseDetails);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        ptNote = new QPlainTextEdit(HWarehouseDetails);
        ptNote->setObjectName(QString::fromUtf8("ptNote"));
        ptNote->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(ptNote);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pbSave = new QPushButton(HWarehouseDetails);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon1);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pbSave);

        pbClose = new QPushButton(HWarehouseDetails);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pbClose);


        verticalLayout_2->addLayout(horizontalLayout_5);


        retranslateUi(HWarehouseDetails);

        QMetaObject::connectSlotsByName(HWarehouseDetails);
    } // setupUi

    void retranslateUi(QWidget *HWarehouseDetails)
    {
        HWarehouseDetails->setWindowTitle(QCoreApplication::translate("HWarehouseDetails", "Modifica Operazione", nullptr));
        label->setText(QCoreApplication::translate("HWarehouseDetails", "ID Operazione:", nullptr));
        label_3->setText(QCoreApplication::translate("HWarehouseDetails", "Data:", nullptr));
        deData->setDisplayFormat(QCoreApplication::translate("HWarehouseDetails", "dd/MM/yyyy hh:mm:ss", nullptr));
        label_4->setText(QCoreApplication::translate("HWarehouseDetails", "Operatore:", nullptr));
        lbidlotto->setText(QString());
        label_2->setText(QCoreApplication::translate("HWarehouseDetails", "Prodotto:", nullptr));
        label_6->setText(QCoreApplication::translate("HWarehouseDetails", "Lotto:", nullptr));
        label_10->setText(QCoreApplication::translate("HWarehouseDetails", "Giacenza:", nullptr));
        label_11->setText(QCoreApplication::translate("HWarehouseDetails", "Scadenza:", nullptr));
        label_9->setText(QCoreApplication::translate("HWarehouseDetails", "Lotto Fornitore", nullptr));
        label_8->setText(QCoreApplication::translate("HWarehouseDetails", "Lotto Esterno", nullptr));
        label_5->setText(QCoreApplication::translate("HWarehouseDetails", "Azione:", nullptr));
        label_7->setText(QCoreApplication::translate("HWarehouseDetails", "Note:", nullptr));
        pbSave->setText(QCoreApplication::translate("HWarehouseDetails", "Salva", nullptr));
        pbClose->setText(QCoreApplication::translate("HWarehouseDetails", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HWarehouseDetails: public Ui_HWarehouseDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HWAREHOUSEDETAILS_H
