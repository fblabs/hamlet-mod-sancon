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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QSplitter *splitter_4;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *leProdotto;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *leLotto;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QLineEdit *leGiacenza;
    QSplitter *splitter_3;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *leLotFornitore;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *leEAN;
    QSplitter *splitter_2;
    QWidget *layoutWidget4;
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
    QPushButton *pbUndo;
    QPushButton *pbClose;

    void setupUi(QWidget *HWarehouseDetails)
    {
        if (HWarehouseDetails->objectName().isEmpty())
            HWarehouseDetails->setObjectName(QStringLiteral("HWarehouseDetails"));
        HWarehouseDetails->setWindowModality(Qt::ApplicationModal);
        HWarehouseDetails->resize(612, 352);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Monitoring64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HWarehouseDetails->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HWarehouseDetails);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        splitter = new QSplitter(HWarehouseDetails);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leID = new QLineEdit(layoutWidget);
        leID->setObjectName(QStringLiteral("leID"));
        leID->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leID->setReadOnly(true);

        horizontalLayout->addWidget(leID);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        deData = new QDateTimeEdit(layoutWidget1);
        deData->setObjectName(QStringLiteral("deData"));
        deData->setReadOnly(true);
        deData->setCurrentSection(QDateTimeEdit::DaySection);
        deData->setCalendarPopup(true);

        horizontalLayout_4->addWidget(deData);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        leOperatore = new QLineEdit(layoutWidget2);
        leOperatore->setObjectName(QStringLiteral("leOperatore"));
        leOperatore->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leOperatore->setReadOnly(true);

        horizontalLayout_3->addWidget(leOperatore);

        splitter->addWidget(layoutWidget2);

        verticalLayout_2->addWidget(splitter);

        splitter_4 = new QSplitter(HWarehouseDetails);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        layoutWidget3 = new QWidget(splitter_4);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        leProdotto = new QLineEdit(layoutWidget3);
        leProdotto->setObjectName(QStringLiteral("leProdotto"));
        leProdotto->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout_2->addWidget(leProdotto);

        splitter_4->addWidget(layoutWidget3);
        widget = new QWidget(splitter_4);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        leLotto = new QLineEdit(widget);
        leLotto->setObjectName(QStringLiteral("leLotto"));
        leLotto->setAcceptDrops(false);
        leLotto->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout_7->addWidget(leLotto);

        splitter_4->addWidget(widget);
        widget1 = new QWidget(splitter_4);
        widget1->setObjectName(QStringLiteral("widget1"));
        horizontalLayout_8 = new QHBoxLayout(widget1);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_8->addWidget(label_10);

        leGiacenza = new QLineEdit(widget1);
        leGiacenza->setObjectName(QStringLiteral("leGiacenza"));
        leGiacenza->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leGiacenza->setReadOnly(true);

        horizontalLayout_8->addWidget(leGiacenza);

        splitter_4->addWidget(widget1);

        verticalLayout_2->addWidget(splitter_4);

        splitter_3 = new QSplitter(HWarehouseDetails);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        widget2 = new QWidget(splitter_3);
        widget2->setObjectName(QStringLiteral("widget2"));
        horizontalLayout_9 = new QHBoxLayout(widget2);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_9->addWidget(label_9);

        leLotFornitore = new QLineEdit(widget2);
        leLotFornitore->setObjectName(QStringLiteral("leLotFornitore"));
        leLotFornitore->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leLotFornitore->setReadOnly(true);

        horizontalLayout_9->addWidget(leLotFornitore);

        splitter_3->addWidget(widget2);
        widget3 = new QWidget(splitter_3);
        widget3->setObjectName(QStringLiteral("widget3"));
        horizontalLayout_10 = new QHBoxLayout(widget3);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_10->addWidget(label_8);

        leEAN = new QLineEdit(widget3);
        leEAN->setObjectName(QStringLiteral("leEAN"));
        leEAN->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        horizontalLayout_10->addWidget(leEAN);

        splitter_3->addWidget(widget3);

        verticalLayout_2->addWidget(splitter_3);

        splitter_2 = new QSplitter(HWarehouseDetails);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        layoutWidget4 = new QWidget(splitter_2);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        cbAzione = new QComboBox(layoutWidget4);
        cbAzione->setObjectName(QStringLiteral("cbAzione"));

        horizontalLayout_6->addWidget(cbAzione);

        leQuantita = new QLineEdit(layoutWidget4);
        leQuantita->setObjectName(QStringLiteral("leQuantita"));

        horizontalLayout_6->addWidget(leQuantita);

        cbUM = new QComboBox(layoutWidget4);
        cbUM->setObjectName(QStringLiteral("cbUM"));

        horizontalLayout_6->addWidget(cbUM);

        horizontalSpacer = new QSpacerItem(500, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        splitter_2->addWidget(layoutWidget4);

        verticalLayout_2->addWidget(splitter_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_7 = new QLabel(HWarehouseDetails);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        ptNote = new QPlainTextEdit(HWarehouseDetails);
        ptNote->setObjectName(QStringLiteral("ptNote"));
        ptNote->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(ptNote);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pbSave = new QPushButton(HWarehouseDetails);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon1);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pbSave);

        pbUndo = new QPushButton(HWarehouseDetails);
        pbUndo->setObjectName(QStringLiteral("pbUndo"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Counterclockwise-arrow64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbUndo->setIcon(icon2);
        pbUndo->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pbUndo);

        pbClose = new QPushButton(HWarehouseDetails);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon3);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pbClose);


        verticalLayout_2->addLayout(horizontalLayout_5);


        retranslateUi(HWarehouseDetails);

        QMetaObject::connectSlotsByName(HWarehouseDetails);
    } // setupUi

    void retranslateUi(QWidget *HWarehouseDetails)
    {
        HWarehouseDetails->setWindowTitle(QApplication::translate("HWarehouseDetails", "Modifica Operazione", 0));
        label->setText(QApplication::translate("HWarehouseDetails", "ID Operazione:", 0));
        label_3->setText(QApplication::translate("HWarehouseDetails", "Data:", 0));
        deData->setDisplayFormat(QApplication::translate("HWarehouseDetails", "dd/MM/yyyy hh:mm:ss", 0));
        label_4->setText(QApplication::translate("HWarehouseDetails", "Operatore:", 0));
        label_2->setText(QApplication::translate("HWarehouseDetails", "Prodotto:", 0));
        label_6->setText(QApplication::translate("HWarehouseDetails", "Lotto:", 0));
        label_10->setText(QApplication::translate("HWarehouseDetails", "Giacenza:", 0));
        label_9->setText(QApplication::translate("HWarehouseDetails", "Lotto Fornitore", 0));
        label_8->setText(QApplication::translate("HWarehouseDetails", "Lotto Esterno", 0));
        label_5->setText(QApplication::translate("HWarehouseDetails", "Azione:", 0));
        label_7->setText(QApplication::translate("HWarehouseDetails", "Note:", 0));
        pbSave->setText(QApplication::translate("HWarehouseDetails", "Salva", 0));
        pbUndo->setText(QApplication::translate("HWarehouseDetails", "Annulla", 0));
        pbClose->setText(QApplication::translate("HWarehouseDetails", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HWarehouseDetails: public Ui_HWarehouseDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HWAREHOUSEDETAILS_H
