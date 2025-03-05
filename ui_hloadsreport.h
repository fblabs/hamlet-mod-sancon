/********************************************************************************
** Form generated from reading UI file 'hloadsreport.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLOADSREPORT_H
#define UI_HLOADSREPORT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HLoadsReport
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QRadioButton *rbL;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QDateEdit *deFrom;
    QLabel *label_2;
    QDateEdit *deTo;
    QComboBox *cbTipo;
    QRadioButton *rbU;
    QTableView *tvReport;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *leCerca;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HLoadsReport)
    {
        if (HLoadsReport->objectName().isEmpty())
            HLoadsReport->setObjectName(QString::fromUtf8("HLoadsReport"));
        HLoadsReport->setWindowModality(Qt::ApplicationModal);
        HLoadsReport->resize(799, 619);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HLoadsReport->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HLoadsReport);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rbL = new QRadioButton(HLoadsReport);
        rbL->setObjectName(QString::fromUtf8("rbL"));
        rbL->setChecked(true);

        gridLayout_2->addWidget(rbL, 0, 0, 1, 1);

        label_3 = new QLabel(HLoadsReport);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(HLoadsReport);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        deFrom = new QDateEdit(HLoadsReport);
        deFrom->setObjectName(QString::fromUtf8("deFrom"));

        gridLayout->addWidget(deFrom, 0, 1, 1, 1);

        label_2 = new QLabel(HLoadsReport);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        deTo = new QDateEdit(HLoadsReport);
        deTo->setObjectName(QString::fromUtf8("deTo"));

        gridLayout->addWidget(deTo, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 2, 1, 1);

        cbTipo = new QComboBox(HLoadsReport);
        cbTipo->setObjectName(QString::fromUtf8("cbTipo"));
        cbTipo->setEditable(false);
        cbTipo->setInsertPolicy(QComboBox::NoInsert);
        cbTipo->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        cbTipo->setModelColumn(1);

        gridLayout_2->addWidget(cbTipo, 0, 4, 1, 1);

        rbU = new QRadioButton(HLoadsReport);
        rbU->setObjectName(QString::fromUtf8("rbU"));

        gridLayout_2->addWidget(rbU, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        tvReport = new QTableView(HLoadsReport);
        tvReport->setObjectName(QString::fromUtf8("tvReport"));
        tvReport->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvReport->setProperty("showDropIndicator", QVariant(false));
        tvReport->setAlternatingRowColors(true);
        tvReport->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvReport->setSortingEnabled(false);
        tvReport->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tvReport->horizontalHeader()->setStretchLastSection(true);
        tvReport->verticalHeader()->setVisible(false);
        tvReport->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tvReport);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(HLoadsReport);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        leCerca = new QLineEdit(HLoadsReport);
        leCerca->setObjectName(QString::fromUtf8("leCerca"));
        leCerca->setClearButtonEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, leCerca);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbPrint = new QPushButton(HLoadsReport);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon1);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HLoadsReport);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HLoadsReport);

        QMetaObject::connectSlotsByName(HLoadsReport);
    } // setupUi

    void retranslateUi(QWidget *HLoadsReport)
    {
        HLoadsReport->setWindowTitle(QCoreApplication::translate("HLoadsReport", "Carichi e scarichi", nullptr));
        rbL->setText(QCoreApplication::translate("HLoadsReport", "Carichi (Alt+C)", nullptr));
#if QT_CONFIG(shortcut)
        rbL->setShortcut(QCoreApplication::translate("HLoadsReport", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        label_3->setText(QCoreApplication::translate("HLoadsReport", "Tipo:", nullptr));
        label->setText(QCoreApplication::translate("HLoadsReport", "Dal:", nullptr));
        label_2->setText(QCoreApplication::translate("HLoadsReport", "Al:", nullptr));
        rbU->setText(QCoreApplication::translate("HLoadsReport", "Scarichi (Alt+S)", nullptr));
#if QT_CONFIG(shortcut)
        rbU->setShortcut(QCoreApplication::translate("HLoadsReport", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        label_4->setText(QCoreApplication::translate("HLoadsReport", "Cerca:", nullptr));
        pbPrint->setText(QCoreApplication::translate("HLoadsReport", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HLoadsReport", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HLoadsReport: public Ui_HLoadsReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOADSREPORT_H
