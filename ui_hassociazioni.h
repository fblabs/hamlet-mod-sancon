/********************************************************************************
** Form generated from reading UI file 'hassociazioni.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HASSOCIAZIONI_H
#define UI_HASSOCIAZIONI_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HAssociazioni
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QComboBox *cbClienti;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leCliente;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton;

    void setupUi(QWidget *HAssociazioni)
    {
        if (HAssociazioni->objectName().isEmpty())
            HAssociazioni->setObjectName(QStringLiteral("HAssociazioni"));
        HAssociazioni->setWindowModality(Qt::ApplicationModal);
        HAssociazioni->resize(726, 469);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Map.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HAssociazioni->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(HAssociazioni);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cbClienti = new QComboBox(HAssociazioni);
        cbClienti->setObjectName(QStringLiteral("cbClienti"));
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout->addWidget(cbClienti);

        listView = new QListView(HAssociazioni);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HAssociazioni);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leCliente = new QLineEdit(HAssociazioni);
        leCliente->setObjectName(QStringLiteral("leCliente"));

        horizontalLayout->addWidget(leCliente);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        tableView = new QTableView(HAssociazioni);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_3->addWidget(tableView);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(HAssociazioni);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HAssociazioni);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(HAssociazioni);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Bullhorn.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(HAssociazioni);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon4);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(HAssociazioni);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Folder.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon5);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton = new QPushButton(HAssociazioni);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon6);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(HAssociazioni);

        QMetaObject::connectSlotsByName(HAssociazioni);
    } // setupUi

    void retranslateUi(QWidget *HAssociazioni)
    {
        HAssociazioni->setWindowTitle(QApplication::translate("HAssociazioni", "Associazioni prodotti-ricette", 0));
        label->setText(QApplication::translate("HAssociazioni", "Cerca:", 0));
        pushButton_2->setText(QApplication::translate("HAssociazioni", "Aggiungi associazione", 0));
        pushButton_3->setText(QApplication::translate("HAssociazioni", "rimuovi associazione", 0));
        pushButton_5->setText(QApplication::translate("HAssociazioni", "Rendi visibile", 0));
        pushButton_6->setText(QApplication::translate("HAssociazioni", "Rendi non visibile", 0));
        pushButton_4->setText(QApplication::translate("HAssociazioni", "Scheda", 0));
        pushButton->setText(QApplication::translate("HAssociazioni", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HAssociazioni: public Ui_HAssociazioni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HASSOCIAZIONI_H
