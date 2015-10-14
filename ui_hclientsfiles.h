/********************************************************************************
** Form generated from reading UI file 'hclientsfiles.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCLIENTSFILES_H
#define UI_HCLIENTSFILES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HClientsFiles
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QListView *listView;
    QVBoxLayout *verticalLayout;
    QListView *listView_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbCR;
    QPushButton *RC;
    QPushButton *pbSave;
    QPushButton *pushButton;

    void setupUi(QDialog *HClientsFiles)
    {
        if (HClientsFiles->objectName().isEmpty())
            HClientsFiles->setObjectName(QStringLiteral("HClientsFiles"));
        HClientsFiles->setWindowModality(Qt::ApplicationModal);
        HClientsFiles->resize(1136, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Notepad.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HClientsFiles->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HClientsFiles);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        listView = new QListView(HClientsFiles);
        listView->setObjectName(QStringLiteral("listView"));

        horizontalLayout_3->addWidget(listView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listView_2 = new QListView(HClientsFiles);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setSelectionMode(QAbstractItemView::MultiSelection);
        listView_2->setModelColumn(0);

        verticalLayout->addWidget(listView_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(HClientsFiles);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(HClientsFiles);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbCR = new QPushButton(HClientsFiles);
        pbCR->setObjectName(QStringLiteral("pbCR"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbCR->setIcon(icon1);
        pbCR->setIconSize(QSize(32, 32));
        pbCR->setCheckable(true);
        pbCR->setChecked(true);

        horizontalLayout->addWidget(pbCR);

        RC = new QPushButton(HClientsFiles);
        RC->setObjectName(QStringLiteral("RC"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/User-Male.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        RC->setIcon(icon2);
        RC->setIconSize(QSize(32, 32));
        RC->setCheckable(true);

        horizontalLayout->addWidget(RC);

        pbSave = new QPushButton(HClientsFiles);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Arrow-Right.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon3);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pushButton = new QPushButton(HClientsFiles);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(HClientsFiles);

        QMetaObject::connectSlotsByName(HClientsFiles);
    } // setupUi

    void retranslateUi(QDialog *HClientsFiles)
    {
        HClientsFiles->setWindowTitle(QApplication::translate("HClientsFiles", "Schede clienti", 0));
        label->setText(QApplication::translate("HClientsFiles", "Cerca", 0));
        pbCR->setText(QApplication::translate("HClientsFiles", "Ricette-Clienti", 0));
        RC->setText(QApplication::translate("HClientsFiles", "Clienti-Ricette", 0));
        pbSave->setText(QApplication::translate("HClientsFiles", "Salva", 0));
        pushButton->setText(QApplication::translate("HClientsFiles", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HClientsFiles: public Ui_HClientsFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCLIENTSFILES_H
