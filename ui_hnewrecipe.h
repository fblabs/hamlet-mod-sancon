/********************************************************************************
** Form generated from reading UI file 'hnewrecipe.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWRECIPE_H
#define UI_HNEWRECIPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
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

class Ui_HNewRecipe
{
public:
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *leMemoName;
    QLabel *label;
    QTextEdit *teNote;
    QVBoxLayout *verticalLayout_2;
    QListView *lvProdotti;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *leSearch;
    QVBoxLayout *verticalLayout;
    QTableView *tvIngredienti;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leQuantita;
    QPushButton *pbAdd;
    QPushButton *pushButton_3;
    QCheckBox *checkBox;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HNewRecipe)
    {
        if (HNewRecipe->objectName().isEmpty())
            HNewRecipe->setObjectName(QStringLiteral("HNewRecipe"));
        HNewRecipe->setWindowModality(Qt::ApplicationModal);
        HNewRecipe->resize(983, 614);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNewRecipe->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(HNewRecipe);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_3 = new QLabel(HNewRecipe);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        leMemoName = new QLineEdit(HNewRecipe);
        leMemoName->setObjectName(QStringLiteral("leMemoName"));
        leMemoName->setEnabled(false);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leMemoName);

        label = new QLabel(HNewRecipe);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        teNote = new QTextEdit(HNewRecipe);
        teNote->setObjectName(QStringLiteral("teNote"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, teNote);


        verticalLayout_3->addLayout(formLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lvProdotti = new QListView(HNewRecipe);
        lvProdotti->setObjectName(QStringLiteral("lvProdotti"));

        verticalLayout_2->addWidget(lvProdotti);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(HNewRecipe);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        leSearch = new QLineEdit(HNewRecipe);
        leSearch->setObjectName(QStringLiteral("leSearch"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leSearch);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tvIngredienti = new QTableView(HNewRecipe);
        tvIngredienti->setObjectName(QStringLiteral("tvIngredienti"));

        verticalLayout->addWidget(tvIngredienti);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        leQuantita = new QLineEdit(HNewRecipe);
        leQuantita->setObjectName(QStringLiteral("leQuantita"));

        horizontalLayout->addWidget(leQuantita);

        pbAdd = new QPushButton(HNewRecipe);
        pbAdd->setObjectName(QStringLiteral("pbAdd"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAdd->setIcon(icon1);

        horizontalLayout->addWidget(pbAdd);

        pushButton_3 = new QPushButton(HNewRecipe);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        checkBox = new QCheckBox(HNewRecipe);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(true);

        horizontalLayout->addWidget(checkBox);

        pushButton_2 = new QPushButton(HNewRecipe);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setIcon(icon);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(HNewRecipe);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Arrow-Down.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_4 = new QPushButton(HNewRecipe);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(HNewRecipe);

        QMetaObject::connectSlotsByName(HNewRecipe);
    } // setupUi

    void retranslateUi(QWidget *HNewRecipe)
    {
        HNewRecipe->setWindowTitle(QApplication::translate("HNewRecipe", "Nuova Ricetta", 0));
        label_3->setText(QApplication::translate("HNewRecipe", "Ricetta:", 0));
        label->setText(QApplication::translate("HNewRecipe", "Note", 0));
        label_2->setText(QApplication::translate("HNewRecipe", "Cerca ingrediente", 0));
        leQuantita->setPlaceholderText(QApplication::translate("HNewRecipe", "Quantit\303\240", 0));
        pbAdd->setText(QApplication::translate("HNewRecipe", "Aggiungi ingrediente", 0));
#ifndef QT_NO_WHATSTHIS
        pushButton_3->setWhatsThis(QApplication::translate("HNewRecipe", "<html><head/><body><p>Rimuove la riga selezionata</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pushButton_3->setText(QApplication::translate("HNewRecipe", "Rimuovi riga", 0));
#ifndef QT_NO_WHATSTHIS
        checkBox->setWhatsThis(QApplication::translate("HNewRecipe", "<html><head/><body><p>Spuntare se l'ingrediente va mostrato in produzione</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        checkBox->setText(QApplication::translate("HNewRecipe", "Mostra in produzione", 0));
        pushButton_2->setText(QApplication::translate("HNewRecipe", "Stampa", 0));
        pushButton->setText(QApplication::translate("HNewRecipe", "Salva", 0));
        pushButton_4->setText(QApplication::translate("HNewRecipe", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HNewRecipe: public Ui_HNewRecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWRECIPE_H
