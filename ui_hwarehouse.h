/********************************************************************************
** Form generated from reading UI file 'hwarehouse.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
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
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QDateTimeEdit *deDateFrom;
    QLabel *label_2;
    QDateTimeEdit *deDateTo;
    QTableView *tableView;
    QGridLayout *gridLayout_2;
    QComboBox *cbFilter;
    QRadioButton *rbProdFilter;
    QRadioButton *rbLotfilter;
    QRadioButton *rbNoFilter;
    QPushButton *pushButton;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HWarehouse)
    {
        if (HWarehouse->objectName().isEmpty())
            HWarehouse->setObjectName(QStringLiteral("HWarehouse"));
        HWarehouse->setWindowModality(Qt::ApplicationModal);
        HWarehouse->resize(1311, 363);
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

        deDateFrom = new QDateTimeEdit(HWarehouse);
        deDateFrom->setObjectName(QStringLiteral("deDateFrom"));

        gridLayout->addWidget(deDateFrom, 0, 1, 1, 1);

        label_2 = new QLabel(HWarehouse);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        deDateTo = new QDateTimeEdit(HWarehouse);
        deDateTo->setObjectName(QStringLiteral("deDateTo"));

        gridLayout->addWidget(deDateTo, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        tableView = new QTableView(HWarehouse);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        cbFilter = new QComboBox(HWarehouse);
        cbFilter->setObjectName(QStringLiteral("cbFilter"));
        cbFilter->setEditable(true);
        cbFilter->setInsertPolicy(QComboBox::NoInsert);

        gridLayout_2->addWidget(cbFilter, 0, 3, 1, 1);

        rbProdFilter = new QRadioButton(HWarehouse);
        rbProdFilter->setObjectName(QStringLiteral("rbProdFilter"));
        rbProdFilter->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(rbProdFilter, 0, 2, 1, 1);

        rbLotfilter = new QRadioButton(HWarehouse);
        rbLotfilter->setObjectName(QStringLiteral("rbLotfilter"));
        rbLotfilter->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(rbLotfilter, 0, 1, 1, 1);

        rbNoFilter = new QRadioButton(HWarehouse);
        rbNoFilter->setObjectName(QStringLiteral("rbNoFilter"));
        rbNoFilter->setMaximumSize(QSize(120, 16777215));
        rbNoFilter->setChecked(true);

        gridLayout_2->addWidget(rbNoFilter, 0, 0, 1, 1);

        pushButton = new QPushButton(HWarehouse);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(pushButton, 0, 4, 1, 1);


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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HWarehouse);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(HWarehouse);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HWarehouse);

        QMetaObject::connectSlotsByName(HWarehouse);
    } // setupUi

    void retranslateUi(QWidget *HWarehouse)
    {
        HWarehouse->setWindowTitle(QApplication::translate("HWarehouse", "Magazzino", 0));
        label->setText(QApplication::translate("HWarehouse", "Dal:", 0));
        label_2->setText(QApplication::translate("HWarehouse", "Al:", 0));
        rbProdFilter->setText(QApplication::translate("HWarehouse", "Filtra per prodotto", 0));
        rbLotfilter->setText(QApplication::translate("HWarehouse", "Filtra per Lotto", 0));
        rbNoFilter->setText(QApplication::translate("HWarehouse", "Non filtrare", 0));
        pushButton->setText(QApplication::translate("HWarehouse", "Filtra", 0));
        pushButton_2->setText(QApplication::translate("HWarehouse", "Nuova operazione", 0));
        pushButton_3->setText(QApplication::translate("HWarehouse", "Salva", 0));
        pushButton_4->setText(QApplication::translate("HWarehouse", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HWarehouse: public Ui_HWarehouse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HWAREHOUSE_H
