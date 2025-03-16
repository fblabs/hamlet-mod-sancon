/********************************************************************************
** Form generated from reading UI file 'hloads.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLOADS_H
#define UI_HLOADS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HLoads
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *deFrom;
    QLabel *label_2;
    QDateEdit *deTo;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbSearch;
    QComboBox *cbTipi;
    QListView *lvProducts;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QRadioButton *rbLoads;
    QRadioButton *rbUnloads;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *leAmount;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pbClose;

    void setupUi(QWidget *HLoads)
    {
        if (HLoads->objectName().isEmpty())
            HLoads->setObjectName(QString::fromUtf8("HLoads"));
        HLoads->setWindowModality(Qt::ApplicationModal);
        HLoads->resize(708, 408);
        verticalLayout = new QVBoxLayout(HLoads);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HLoads);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        deFrom = new QDateEdit(HLoads);
        deFrom->setObjectName(QString::fromUtf8("deFrom"));
        deFrom->setCalendarPopup(true);

        horizontalLayout->addWidget(deFrom);

        label_2 = new QLabel(HLoads);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        deTo = new QDateEdit(HLoads);
        deTo->setObjectName(QString::fromUtf8("deTo"));
        deTo->setCalendarPopup(true);

        horizontalLayout->addWidget(deTo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pbSearch = new QPushButton(HLoads);
        pbSearch->setObjectName(QString::fromUtf8("pbSearch"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Monitoring64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSearch->setIcon(icon);

        horizontalLayout->addWidget(pbSearch);


        verticalLayout->addLayout(horizontalLayout);

        cbTipi = new QComboBox(HLoads);
        cbTipi->setObjectName(QString::fromUtf8("cbTipi"));

        verticalLayout->addWidget(cbTipi);

        lvProducts = new QListView(HLoads);
        lvProducts->setObjectName(QString::fromUtf8("lvProducts"));
        lvProducts->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvProducts->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(lvProducts);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        rbLoads = new QRadioButton(HLoads);
        rbLoads->setObjectName(QString::fromUtf8("rbLoads"));
        rbLoads->setChecked(true);

        horizontalLayout_3->addWidget(rbLoads);

        rbUnloads = new QRadioButton(HLoads);
        rbUnloads->setObjectName(QString::fromUtf8("rbUnloads"));

        horizontalLayout_3->addWidget(rbUnloads);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 64, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(HLoads);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        leAmount = new QLineEdit(HLoads);
        leAmount->setObjectName(QString::fromUtf8("leAmount"));
        leAmount->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leAmount->setReadOnly(true);

        horizontalLayout_2->addWidget(leAmount);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 63, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pbClose = new QPushButton(HLoads);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon1);

        verticalLayout->addWidget(pbClose);


        retranslateUi(HLoads);

        QMetaObject::connectSlotsByName(HLoads);
    } // setupUi

    void retranslateUi(QWidget *HLoads)
    {
        HLoads->setWindowTitle(QCoreApplication::translate("HLoads", "Carichi \\ scarichi prodotti", nullptr));
        label->setText(QCoreApplication::translate("HLoads", "Tra il:", nullptr));
        label_2->setText(QCoreApplication::translate("HLoads", "e il:", nullptr));
        pbSearch->setText(QCoreApplication::translate("HLoads", "Cerca", nullptr));
        rbLoads->setText(QCoreApplication::translate("HLoads", "Totale carichi", nullptr));
        rbUnloads->setText(QCoreApplication::translate("HLoads", "Totale scarichi", nullptr));
        label_3->setText(QCoreApplication::translate("HLoads", "Totale::", nullptr));
        pbClose->setText(QCoreApplication::translate("HLoads", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HLoads: public Ui_HLoads {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOADS_H
