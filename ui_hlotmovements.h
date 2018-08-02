/********************************************************************************
** Form generated from reading UI file 'hlotmovements.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLOTMOVEMENTS_H
#define UI_HLOTMOVEMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            HLotMovements->setObjectName(QStringLiteral("HLotMovements"));
        HLotMovements->setWindowModality(Qt::ApplicationModal);
        HLotMovements->resize(880, 443);
        verticalLayout = new QVBoxLayout(HLotMovements);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tvMovimentiLotto = new QTableView(HLotMovements);
        tvMovimentiLotto->setObjectName(QStringLiteral("tvMovimentiLotto"));
        tvMovimentiLotto->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvMovimentiLotto->setAlternatingRowColors(true);
        tvMovimentiLotto->setSelectionMode(QAbstractItemView::SingleSelection);
        tvMovimentiLotto->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tvMovimentiLotto);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(45, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HLotMovements);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leGiacenza = new QLineEdit(HLotMovements);
        leGiacenza->setObjectName(QStringLiteral("leGiacenza"));
        leGiacenza->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leGiacenza->setReadOnly(true);

        horizontalLayout->addWidget(leGiacenza);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(HLotMovements);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton);


        retranslateUi(HLotMovements);

        QMetaObject::connectSlotsByName(HLotMovements);
    } // setupUi

    void retranslateUi(QWidget *HLotMovements)
    {
        HLotMovements->setWindowTitle(QApplication::translate("HLotMovements", "Movimenti lotto ", 0));
        label->setText(QApplication::translate("HLotMovements", "Giacenza:", 0));
        pushButton->setText(QApplication::translate("HLotMovements", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HLotMovements: public Ui_HLotMovements {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOTMOVEMENTS_H
