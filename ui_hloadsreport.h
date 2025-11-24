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
#include <QtWidgets/QGroupBox>
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
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QRadioButton *rbL;
    QRadioButton *rbU;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QDateEdit *deFrom;
    QDateEdit *deTo;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *cbTipo;
    QTableView *tvReport;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *leCerca;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rbKg;
    QRadioButton *rbPz;
    QRadioButton *rbAll;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HLoadsReport)
    {
        if (HLoadsReport->objectName().isEmpty())
            HLoadsReport->setObjectName(QString::fromUtf8("HLoadsReport"));
        HLoadsReport->setWindowModality(Qt::ApplicationModal);
        HLoadsReport->resize(815, 709);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HLoadsReport->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HLoadsReport);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_2 = new QGroupBox(HLoadsReport);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(240, 50));
        groupBox_2->setMaximumSize(QSize(16777215, 100));
        groupBox_2->setAlignment(Qt::AlignCenter);
        groupBox_2->setFlat(false);
        rbL = new QRadioButton(groupBox_2);
        rbL->setObjectName(QString::fromUtf8("rbL"));
        rbL->setGeometry(QRect(11, 11, 104, 22));
        rbL->setChecked(true);
        rbU = new QRadioButton(groupBox_2);
        rbU->setObjectName(QString::fromUtf8("rbU"));
        rbU->setGeometry(QRect(119, 11, 106, 22));

        horizontalLayout_2->addWidget(groupBox_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(HLoadsReport);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(HLoadsReport);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        deFrom = new QDateEdit(HLoadsReport);
        deFrom->setObjectName(QString::fromUtf8("deFrom"));
        deFrom->setCalendarPopup(true);

        gridLayout->addWidget(deFrom, 0, 1, 1, 1);

        deTo = new QDateEdit(HLoadsReport);
        deTo->setObjectName(QString::fromUtf8("deTo"));
        deTo->setCalendarPopup(true);

        gridLayout->addWidget(deTo, 0, 3, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(HLoadsReport);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        cbTipo = new QComboBox(HLoadsReport);
        cbTipo->setObjectName(QString::fromUtf8("cbTipo"));
        cbTipo->setEditable(false);
        cbTipo->setInsertPolicy(QComboBox::NoInsert);
        cbTipo->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        cbTipo->setModelColumn(1);

        horizontalLayout_5->addWidget(cbTipo);


        horizontalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout_2);

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

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(HLoadsReport);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        leCerca = new QLineEdit(HLoadsReport);
        leCerca->setObjectName(QString::fromUtf8("leCerca"));
        leCerca->setClearButtonEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, leCerca);


        horizontalLayout_3->addLayout(formLayout);

        groupBox = new QGroupBox(HLoadsReport);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setCheckable(false);
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        rbKg = new QRadioButton(groupBox);
        rbKg->setObjectName(QString::fromUtf8("rbKg"));
        rbKg->setChecked(true);

        horizontalLayout_4->addWidget(rbKg);

        rbPz = new QRadioButton(groupBox);
        rbPz->setObjectName(QString::fromUtf8("rbPz"));

        horizontalLayout_4->addWidget(rbPz);

        rbAll = new QRadioButton(groupBox);
        rbAll->setObjectName(QString::fromUtf8("rbAll"));

        horizontalLayout_4->addWidget(rbAll);


        horizontalLayout_3->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout_3);

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
        groupBox_2->setTitle(QString());
        rbL->setText(QCoreApplication::translate("HLoadsReport", "Carichi (Alt+C)", nullptr));
#if QT_CONFIG(shortcut)
        rbL->setShortcut(QCoreApplication::translate("HLoadsReport", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        rbU->setText(QCoreApplication::translate("HLoadsReport", "Scarichi (Alt+S)", nullptr));
#if QT_CONFIG(shortcut)
        rbU->setShortcut(QCoreApplication::translate("HLoadsReport", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        label_2->setText(QCoreApplication::translate("HLoadsReport", "Al:", nullptr));
        label->setText(QCoreApplication::translate("HLoadsReport", "Dal:", nullptr));
        label_3->setText(QCoreApplication::translate("HLoadsReport", "Tipo:", nullptr));
        label_4->setText(QCoreApplication::translate("HLoadsReport", "Cerca:", nullptr));
        groupBox->setTitle(QString());
        rbKg->setText(QCoreApplication::translate("HLoadsReport", "Kg", nullptr));
        rbPz->setText(QCoreApplication::translate("HLoadsReport", "Pz", nullptr));
        rbAll->setText(QCoreApplication::translate("HLoadsReport", "Tutti", nullptr));
        pbPrint->setText(QCoreApplication::translate("HLoadsReport", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HLoadsReport", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HLoadsReport: public Ui_HLoadsReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOADSREPORT_H
