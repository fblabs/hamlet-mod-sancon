/********************************************************************************
** Form generated from reading UI file 'hcards.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCARDS_H
#define UI_HCARDS_H

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

class Ui_HCards
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
    QPushButton *btnSave;
    QPushButton *btnDup;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QWidget *HCards)
    {
        if (HCards->objectName().isEmpty())
            HCards->setObjectName(QStringLiteral("HCards"));
        HCards->setWindowModality(Qt::NonModal);
        HCards->resize(806, 649);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(HCards->sizePolicy().hasHeightForWidth());
        HCards->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Folder.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HCards->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HCards);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox = new QComboBox(HCards);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMaximumSize(QSize(400, 16777215));
        QFont font;
        font.setPointSize(12);
        comboBox->setFont(font);
        comboBox->setEditable(true);
        comboBox->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout->addWidget(comboBox);

        cbSelectCriteria = new QCheckBox(HCards);
        cbSelectCriteria->setObjectName(QStringLiteral("cbSelectCriteria"));

        verticalLayout->addWidget(cbSelectCriteria);

        lvSubclienti = new QListView(HCards);
        lvSubclienti->setObjectName(QStringLiteral("lvSubclienti"));
        lvSubclienti->setMaximumSize(QSize(400, 140));
        lvSubclienti->setFont(font);

        verticalLayout->addWidget(lvSubclienti);

        listView = new QListView(HCards);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setMinimumSize(QSize(0, 0));
        listView->setMaximumSize(QSize(400, 16777215));
        listView->setFont(font);
        listView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(listView);


        horizontalLayout->addLayout(verticalLayout);

        widget = new HPrint(HCards);
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
        pushButton_4 = new QPushButton(HCards);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Art-Supplies.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_4);

        btnSave = new QPushButton(HCards);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon2);
        btnSave->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(btnSave);

        btnDup = new QPushButton(HCards);
        btnDup->setObjectName(QStringLiteral("btnDup"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        btnDup->setIcon(icon3);
        btnDup->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(btnDup);

        pushButton_3 = new QPushButton(HCards);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton = new QPushButton(HCards);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(HCards);
        QObject::connect(pushButton, SIGNAL(clicked()), HCards, SLOT(close()));

        QMetaObject::connectSlotsByName(HCards);
    } // setupUi

    void retranslateUi(QWidget *HCards)
    {
        HCards->setWindowTitle(QApplication::translate("HCards", "Schede clienti", 0));
        cbSelectCriteria->setText(QApplication::translate("HCards", "Seleziona le schede per subcliente", 0));
        pushButton_4->setText(QApplication::translate("HCards", "Modifica", 0));
        btnSave->setText(QApplication::translate("HCards", "Salva", 0));
        btnDup->setText(QApplication::translate("HCards", "Copia da scheda...", 0));
        pushButton_3->setText(QApplication::translate("HCards", "Elimina", 0));
        pushButton->setText(QApplication::translate("HCards", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HCards: public Ui_HCards {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCARDS_H
