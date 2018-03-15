/********************************************************************************
** Form generated from reading UI file 'hwarehouse.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HWAREHOUSE_H
#define UI_HWAREHOUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HWarehouse
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QDateEdit *deDateFrom;
    QSpacerItem *horizontalSpacer;
    QDateEdit *deDateTo;
    QLabel *label_2;
    QTableView *tableView;
    QGridLayout *gridLayout_2;
    QRadioButton *rbNoFilter;
    QRadioButton *rbProdFilter;
    QComboBox *cbFilter;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HWarehouse)
    {
        if (HWarehouse->objectName().isEmpty())
            HWarehouse->setObjectName(QStringLiteral("HWarehouse"));
        HWarehouse->setWindowModality(Qt::NonModal);
        HWarehouse->resize(964, 741);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/modlots.png"), QSize(), QIcon::Normal, QIcon::Off);
        HWarehouse->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HWarehouse);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(HWarehouse);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        deDateFrom = new QDateEdit(HWarehouse);
        deDateFrom->setObjectName(QStringLiteral("deDateFrom"));
        deDateFrom->setCalendarPopup(true);

        gridLayout->addWidget(deDateFrom, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        deDateTo = new QDateEdit(HWarehouse);
        deDateTo->setObjectName(QStringLiteral("deDateTo"));
        deDateTo->setCalendarPopup(true);

        gridLayout->addWidget(deDateTo, 0, 3, 1, 1);

        label_2 = new QLabel(HWarehouse);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        tableView = new QTableView(HWarehouse);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        rbNoFilter = new QRadioButton(HWarehouse);
        rbNoFilter->setObjectName(QStringLiteral("rbNoFilter"));
        rbNoFilter->setMaximumSize(QSize(120, 16777215));
        rbNoFilter->setChecked(true);

        gridLayout_2->addWidget(rbNoFilter, 0, 0, 1, 1);

        rbProdFilter = new QRadioButton(HWarehouse);
        rbProdFilter->setObjectName(QStringLiteral("rbProdFilter"));
        rbProdFilter->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(rbProdFilter, 0, 1, 1, 1);

        cbFilter = new QComboBox(HWarehouse);
        cbFilter->setObjectName(QStringLiteral("cbFilter"));
        cbFilter->setMinimumSize(QSize(400, 0));
        cbFilter->setEditable(true);
        cbFilter->setInsertPolicy(QComboBox::NoInsert);

        gridLayout_2->addWidget(cbFilter, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(688, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        line = new QFrame(HWarehouse);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(HWarehouse);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(HWarehouse);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(HWarehouse);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HWarehouse);

        QMetaObject::connectSlotsByName(HWarehouse);
    } // setupUi

    void retranslateUi(QWidget *HWarehouse)
    {
        HWarehouse->setWindowTitle(QApplication::translate("HWarehouse", "Movimenti", 0));
        label->setText(QApplication::translate("HWarehouse", "Dal:", 0));
        label_2->setText(QApplication::translate("HWarehouse", "Al:", 0));
        rbNoFilter->setText(QApplication::translate("HWarehouse", "Non filtrare", 0));
        rbProdFilter->setText(QApplication::translate("HWarehouse", "Filtra per prodotto", 0));
        pushButton_2->setText(QApplication::translate("HWarehouse", "Nuova operazione", 0));
        pushButton_5->setText(QApplication::translate("HWarehouse", "Scarico Packages", 0));
        pushButton_4->setText(QApplication::translate("HWarehouse", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HWarehouse: public Ui_HWarehouse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HWAREHOUSE_H
