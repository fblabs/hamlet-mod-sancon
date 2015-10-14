/********************************************************************************
** Form generated from reading UI file 'hschedeclienti.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HSCHEDECLIENTI_H
#define UI_HSCHEDECLIENTI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <hprint.h>

QT_BEGIN_NAMESPACE

class Ui_HSchedeClienti
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QCheckBox *cbSelectCriteria;
    QListView *lvSubclienti;
    QListView *listView;
    HPrint *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_4;
    QPushButton *btnDup;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QWidget *HSchedeClienti)
    {
        if (HSchedeClienti->objectName().isEmpty())
            HSchedeClienti->setObjectName(QStringLiteral("HSchedeClienti"));
        HSchedeClienti->setWindowModality(Qt::ApplicationModal);
        HSchedeClienti->resize(1354, 578);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(HSchedeClienti->sizePolicy().hasHeightForWidth());
        HSchedeClienti->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Folder.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HSchedeClienti->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HSchedeClienti);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox = new QComboBox(HSchedeClienti);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMaximumSize(QSize(400, 16777215));
        QFont font;
        font.setPointSize(12);
        comboBox->setFont(font);
        comboBox->setEditable(true);
        comboBox->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout->addWidget(comboBox);

        cbSelectCriteria = new QCheckBox(HSchedeClienti);
        cbSelectCriteria->setObjectName(QStringLiteral("cbSelectCriteria"));

        verticalLayout->addWidget(cbSelectCriteria);

        lvSubclienti = new QListView(HSchedeClienti);
        lvSubclienti->setObjectName(QStringLiteral("lvSubclienti"));
        lvSubclienti->setMaximumSize(QSize(400, 140));
        lvSubclienti->setFont(font);

        verticalLayout->addWidget(lvSubclienti);

        listView = new QListView(HSchedeClienti);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setMinimumSize(QSize(0, 0));
        listView->setMaximumSize(QSize(400, 16777215));
        listView->setFont(font);
        listView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(listView);


        horizontalLayout->addLayout(verticalLayout);

        widget = new HPrint(HSchedeClienti);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setAutoFillBackground(false);

        horizontalLayout->addWidget(widget);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_4 = new QPushButton(HSchedeClienti);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Art-Supplies.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_4);

        btnDup = new QPushButton(HSchedeClienti);
        btnDup->setObjectName(QStringLiteral("btnDup"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        btnDup->setIcon(icon2);
        btnDup->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(btnDup);

        pushButton_3 = new QPushButton(HSchedeClienti);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton = new QPushButton(HSchedeClienti);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(HSchedeClienti);
        QObject::connect(pushButton, SIGNAL(clicked()), HSchedeClienti, SLOT(close()));

        QMetaObject::connectSlotsByName(HSchedeClienti);
    } // setupUi

    void retranslateUi(QWidget *HSchedeClienti)
    {
        HSchedeClienti->setWindowTitle(QApplication::translate("HSchedeClienti", "Schede clienti", 0));
        cbSelectCriteria->setText(QApplication::translate("HSchedeClienti", "Seleziona le schede per subcliente", 0));
        pushButton_4->setText(QApplication::translate("HSchedeClienti", "Modifica", 0));
        btnDup->setText(QApplication::translate("HSchedeClienti", "Copia da scheda...", 0));
        pushButton_3->setText(QApplication::translate("HSchedeClienti", "Elimina", 0));
        pushButton->setText(QApplication::translate("HSchedeClienti", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HSchedeClienti: public Ui_HSchedeClienti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HSCHEDECLIENTI_H
