/********************************************************************************
** Form generated from reading UI file 'hrecipes.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HRECIPES_H
#define UI_HRECIPES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HRecipes
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QListView *lvProdotti;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *leNomeRicetta;
    QTextEdit *teNote;
    QPushButton *pbNote;
    QTableView *tvRecipe;
    QLabel *label_3;
    QLabel *labelPeso;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *HRecipes)
    {
        if (HRecipes->objectName().isEmpty())
            HRecipes->setObjectName(QStringLiteral("HRecipes"));
        HRecipes->setWindowModality(Qt::ApplicationModal);
        HRecipes->resize(1179, 666);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Notepad.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HRecipes->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HRecipes);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lvProdotti = new QListView(HRecipes);
        lvProdotti->setObjectName(QStringLiteral("lvProdotti"));
        lvProdotti->setAlternatingRowColors(true);

        verticalLayout_3->addWidget(lvProdotti);

        label = new QLabel(HRecipes);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(HRecipes);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        leNomeRicetta = new QLineEdit(HRecipes);
        leNomeRicetta->setObjectName(QStringLiteral("leNomeRicetta"));
        leNomeRicetta->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        verticalLayout->addWidget(leNomeRicetta);

        teNote = new QTextEdit(HRecipes);
        teNote->setObjectName(QStringLiteral("teNote"));
        teNote->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teNote->sizePolicy().hasHeightForWidth());
        teNote->setSizePolicy(sizePolicy);
        teNote->setMaximumSize(QSize(16777215, 100));
        teNote->setBaseSize(QSize(0, 34));
        teNote->setReadOnly(false);

        verticalLayout->addWidget(teNote);

        pbNote = new QPushButton(HRecipes);
        pbNote->setObjectName(QStringLiteral("pbNote"));

        verticalLayout->addWidget(pbNote);

        tvRecipe = new QTableView(HRecipes);
        tvRecipe->setObjectName(QStringLiteral("tvRecipe"));
        tvRecipe->setAlternatingRowColors(true);
        tvRecipe->setSelectionMode(QAbstractItemView::SingleSelection);
        tvRecipe->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvRecipe->setTextElideMode(Qt::ElideNone);
        tvRecipe->horizontalHeader()->setCascadingSectionResizes(true);
        tvRecipe->horizontalHeader()->setStretchLastSection(true);
        tvRecipe->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tvRecipe);

        label_3 = new QLabel(HRecipes);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        labelPeso = new QLabel(HRecipes);
        labelPeso->setObjectName(QStringLiteral("labelPeso"));

        verticalLayout->addWidget(labelPeso);

        pushButton_6 = new QPushButton(HRecipes);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);

        verticalLayout->addWidget(pushButton_6);

        pushButton = new QPushButton(HRecipes);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HRecipes);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);

        pushButton_5 = new QPushButton(HRecipes);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(32, 32));

        verticalLayout_4->addWidget(pushButton_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(HRecipes);

        QMetaObject::connectSlotsByName(HRecipes);
    } // setupUi

    void retranslateUi(QWidget *HRecipes)
    {
        HRecipes->setWindowTitle(QApplication::translate("HRecipes", "Ricette", 0));
#ifndef QT_NO_TOOLTIP
        lvProdotti->setToolTip(QApplication::translate("HRecipes", "<html><head/><body><p>Inserisci prodotto nella produzione</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("HRecipes", "Cerca", 0));
        pbNote->setText(QApplication::translate("HRecipes", "Salva note", 0));
        label_3->setText(QApplication::translate("HRecipes", "Totale peso", 0));
        labelPeso->setText(QString());
        pushButton_6->setText(QApplication::translate("HRecipes", "Stampa", 0));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("HRecipes", "<html><head/><body><p>Crea una nuova ricetta per il prodotto selezionato</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("HRecipes", "Nuova", 0));
        pushButton_2->setText(QApplication::translate("HRecipes", "Modifica", 0));
        pushButton_5->setText(QApplication::translate("HRecipes", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HRecipes: public Ui_HRecipes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HRECIPES_H
