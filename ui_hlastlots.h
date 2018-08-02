/********************************************************************************
** Form generated from reading UI file 'hlastlots.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLASTLOTS_H
#define UI_HLASTLOTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HLastLots
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *cbProducts;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *cbLastLots;
    QListView *lvLastLots;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *leQua;
    QComboBox *cbUI;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HLastLots)
    {
        if (HLastLots->objectName().isEmpty())
            HLastLots->setObjectName(QStringLiteral("HLastLots"));
        HLastLots->resize(296, 293);
        verticalLayout = new QVBoxLayout(HLastLots);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(HLastLots);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label_2);

        cbProducts = new QComboBox(HLastLots);
        cbProducts->setObjectName(QStringLiteral("cbProducts"));
        cbProducts->setEditable(true);

        horizontalLayout->addWidget(cbProducts);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(HLastLots);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(label);

        cbLastLots = new QComboBox(HLastLots);
        cbLastLots->setObjectName(QStringLiteral("cbLastLots"));

        horizontalLayout_3->addWidget(cbLastLots);


        verticalLayout->addLayout(horizontalLayout_3);

        lvLastLots = new QListView(HLastLots);
        lvLastLots->setObjectName(QStringLiteral("lvLastLots"));
        lvLastLots->setMaximumSize(QSize(16777215, 120));
        QFont font;
        font.setPointSize(12);
        lvLastLots->setFont(font);
        lvLastLots->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvLastLots->setAlternatingRowColors(true);
        lvLastLots->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(lvLastLots);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(HLastLots);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        leQua = new QLineEdit(HLastLots);
        leQua->setObjectName(QStringLiteral("leQua"));

        horizontalLayout_4->addWidget(leQua);

        cbUI = new QComboBox(HLastLots);
        cbUI->setObjectName(QStringLiteral("cbUI"));

        horizontalLayout_4->addWidget(cbUI);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(HLastLots);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(HLastLots);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HLastLots);

        QMetaObject::connectSlotsByName(HLastLots);
    } // setupUi

    void retranslateUi(QWidget *HLastLots)
    {
        HLastLots->setWindowTitle(QApplication::translate("HLastLots", "Aggiungi lotto fuori ricettta", 0));
        label_2->setText(QApplication::translate("HLastLots", "Prodotto:", 0));
        label->setText(QApplication::translate("HLastLots", "Quanti:", 0));
        label_3->setText(QApplication::translate("HLastLots", "Quantit\303\240", 0));
        pushButton->setText(QApplication::translate("HLastLots", "Aggiungi", 0));
        pushButton_2->setText(QApplication::translate("HLastLots", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HLastLots: public Ui_HLastLots {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLASTLOTS_H
