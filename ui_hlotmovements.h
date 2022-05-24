/********************************************************************************
** Form generated from reading UI file 'hlotmovements.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLOTMOVEMENTS_H
#define UI_HLOTMOVEMENTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HLotMovements
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tvMovimentiLotto;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leGiacenza;
    QPushButton *pushButton;

    void setupUi(QWidget *HLotMovements)
    {
        if (HLotMovements->objectName().isEmpty())
            HLotMovements->setObjectName(QString::fromUtf8("HLotMovements"));
        HLotMovements->setWindowModality(Qt::ApplicationModal);
        HLotMovements->resize(880, 443);
        verticalLayout = new QVBoxLayout(HLotMovements);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tvMovimentiLotto = new QTableView(HLotMovements);
        tvMovimentiLotto->setObjectName(QString::fromUtf8("tvMovimentiLotto"));
        tvMovimentiLotto->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvMovimentiLotto->setAlternatingRowColors(true);
        tvMovimentiLotto->setSelectionMode(QAbstractItemView::SingleSelection);
        tvMovimentiLotto->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tvMovimentiLotto);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(45, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HLotMovements);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        leGiacenza = new QLineEdit(HLotMovements);
        leGiacenza->setObjectName(QString::fromUtf8("leGiacenza"));
        leGiacenza->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leGiacenza->setReadOnly(true);

        horizontalLayout->addWidget(leGiacenza);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(HLotMovements);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton);


        retranslateUi(HLotMovements);

        QMetaObject::connectSlotsByName(HLotMovements);
    } // setupUi

    void retranslateUi(QWidget *HLotMovements)
    {
        HLotMovements->setWindowTitle(QCoreApplication::translate("HLotMovements", "Movimenti lotto ", nullptr));
        label->setText(QCoreApplication::translate("HLotMovements", "Giacenza:", nullptr));
        pushButton->setText(QCoreApplication::translate("HLotMovements", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HLotMovements: public Ui_HLotMovements {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOTMOVEMENTS_H
