/********************************************************************************
** Form generated from reading UI file 'hassociazioni.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HAssociazioni
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cbClienti;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *cbRicette;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton;

    void setupUi(QWidget *HAssociazioni)
    {
        if (HAssociazioni->objectName().isEmpty())
            HAssociazioni->setObjectName(QStringLiteral("HAssociazioni"));
        HAssociazioni->setWindowModality(Qt::NonModal);
        HAssociazioni->resize(726, 633);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Map.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HAssociazioni->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HAssociazioni);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(HAssociazioni);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(35, 16777215));

        horizontalLayout_2->addWidget(label_2);

        cbClienti = new QComboBox(HAssociazioni);
        cbClienti->setObjectName(QStringLiteral("cbClienti"));
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(cbClienti);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(HAssociazioni);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableView);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(HAssociazioni);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_4->addWidget(label_3);

        cbRicette = new QComboBox(HAssociazioni);
        cbRicette->setObjectName(QStringLiteral("cbRicette"));

        horizontalLayout_4->addWidget(cbRicette);

        pushButton_2 = new QPushButton(HAssociazioni);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HAssociazioni);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_5 = new QPushButton(HAssociazioni);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Bullhorn.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(HAssociazioni);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon4);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(HAssociazioni);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Folder.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon5);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(HAssociazioni);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon6);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton);


        retranslateUi(HAssociazioni);

        QMetaObject::connectSlotsByName(HAssociazioni);
    } // setupUi

    void retranslateUi(QWidget *HAssociazioni)
    {
        HAssociazioni->setWindowTitle(QApplication::translate("HAssociazioni", "Associazioni prodotti-ricette", 0));
        label_2->setText(QApplication::translate("HAssociazioni", "Clienti:", 0));
        label_3->setText(QApplication::translate("HAssociazioni", "Ricette:", 0));
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
