/********************************************************************************
** Form generated from reading UI file 'hfindlotuse.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HFINDLOTUSE_H
#define UI_HFINDLOTUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_HFindLotUse
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HFindLotUse)
    {
        if (HFindLotUse->objectName().isEmpty())
            HFindLotUse->setObjectName(QStringLiteral("HFindLotUse"));
        HFindLotUse->resize(721, 405);
        verticalLayout = new QVBoxLayout(HFindLotUse);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(HFindLotUse);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(HFindLotUse);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(HFindLotUse);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(HFindLotUse);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        tableView = new QTableView(HFindLotUse);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(HFindLotUse);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_3 = new QPushButton(HFindLotUse);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(HFindLotUse);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HFindLotUse);

        QMetaObject::connectSlotsByName(HFindLotUse);
    } // setupUi

    void retranslateUi(QWidget *HFindLotUse)
    {
        HFindLotUse->setWindowTitle(QApplication::translate("HFindLotUse", "Form", 0));
        radioButton->setText(QApplication::translate("HFindLotUse", "Cerca lotto interno", 0));
        radioButton_2->setText(QApplication::translate("HFindLotUse", "Cerca lotto fornitore", 0));
        label->setText(QApplication::translate("HFindLotUse", "Inserire il lotto da cercare:", 0));
        pushButton->setText(QApplication::translate("HFindLotUse", "Cerca", 0));
        pushButton_3->setText(QApplication::translate("HFindLotUse", "Stampa", 0));
        pushButton_2->setText(QApplication::translate("HFindLotUse", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HFindLotUse: public Ui_HFindLotUse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFINDLOTUSE_H
