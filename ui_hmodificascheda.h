/********************************************************************************
** Form generated from reading UI file 'hmodificascheda.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODIFICASCHEDA_H
#define UI_HMODIFICASCHEDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HModificaScheda
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *leTitolo;
    QFormLayout *formLayout;
    QLabel *label;
    QPlainTextEdit *peOlio;
    QLabel *label_2;
    QPlainTextEdit *peVaso;
    QLabel *label_3;
    QPlainTextEdit *peTappo;
    QLabel *label_4;
    QPlainTextEdit *peEtichette;
    QLabel *label_5;
    QPlainTextEdit *peScatole;
    QLabel *label_6;
    QPlainTextEdit *ptNote;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QGraphicsView *gv;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QGraphicsView *gvimgcart;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *HModificaScheda)
    {
        if (HModificaScheda->objectName().isEmpty())
            HModificaScheda->setObjectName(QStringLiteral("HModificaScheda"));
        HModificaScheda->setWindowModality(Qt::ApplicationModal);
        HModificaScheda->resize(1271, 807);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Art-Supplies.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HModificaScheda->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HModificaScheda);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        leTitolo = new QLabel(HModificaScheda);
        leTitolo->setObjectName(QStringLiteral("leTitolo"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferAntialias);
        leTitolo->setFont(font);
        leTitolo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leTitolo->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(leTitolo);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HModificaScheda);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        peOlio = new QPlainTextEdit(HModificaScheda);
        peOlio->setObjectName(QStringLiteral("peOlio"));
        peOlio->setMaximumSize(QSize(16777215, 80));

        formLayout->setWidget(0, QFormLayout::FieldRole, peOlio);

        label_2 = new QLabel(HModificaScheda);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        peVaso = new QPlainTextEdit(HModificaScheda);
        peVaso->setObjectName(QStringLiteral("peVaso"));
        peVaso->setMaximumSize(QSize(16777215, 80));

        formLayout->setWidget(1, QFormLayout::FieldRole, peVaso);

        label_3 = new QLabel(HModificaScheda);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        peTappo = new QPlainTextEdit(HModificaScheda);
        peTappo->setObjectName(QStringLiteral("peTappo"));
        peTappo->setMaximumSize(QSize(16777215, 80));

        formLayout->setWidget(2, QFormLayout::FieldRole, peTappo);

        label_4 = new QLabel(HModificaScheda);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        peEtichette = new QPlainTextEdit(HModificaScheda);
        peEtichette->setObjectName(QStringLiteral("peEtichette"));
        peEtichette->setMaximumSize(QSize(16777215, 80));

        formLayout->setWidget(3, QFormLayout::FieldRole, peEtichette);

        label_5 = new QLabel(HModificaScheda);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        peScatole = new QPlainTextEdit(HModificaScheda);
        peScatole->setObjectName(QStringLiteral("peScatole"));
        peScatole->setMaximumSize(QSize(16777215, 80));

        formLayout->setWidget(4, QFormLayout::FieldRole, peScatole);

        label_6 = new QLabel(HModificaScheda);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        ptNote = new QPlainTextEdit(HModificaScheda);
        ptNote->setObjectName(QStringLiteral("ptNote"));
        ptNote->setMaximumSize(QSize(16777215, 80));

        formLayout->setWidget(5, QFormLayout::FieldRole, ptNote);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_7 = new QLabel(HModificaScheda);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        pushButton_4 = new QPushButton(HModificaScheda);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(HModificaScheda);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);
        pushButton_6->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(pushButton_6);


        formLayout->setLayout(6, QFormLayout::LabelRole, verticalLayout);

        gv = new QGraphicsView(HModificaScheda);
        gv->setObjectName(QStringLiteral("gv"));

        formLayout->setWidget(6, QFormLayout::FieldRole, gv);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_9 = new QLabel(HModificaScheda);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_3->addWidget(label_9);

        pushButton_9 = new QPushButton(HModificaScheda);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setIcon(icon1);

        verticalLayout_3->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(HModificaScheda);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setIcon(icon2);

        verticalLayout_3->addWidget(pushButton_10);


        formLayout->setLayout(7, QFormLayout::LabelRole, verticalLayout_3);

        gvimgcart = new QGraphicsView(HModificaScheda);
        gvimgcart->setObjectName(QStringLiteral("gvimgcart"));

        formLayout->setWidget(7, QFormLayout::FieldRole, gvimgcart);


        verticalLayout_2->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_5 = new QPushButton(HModificaScheda);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setIcon(icon1);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_5);

        pushButton = new QPushButton(HModificaScheda);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(HModificaScheda);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(HModificaScheda);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon5);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(HModificaScheda);

        QMetaObject::connectSlotsByName(HModificaScheda);
    } // setupUi

    void retranslateUi(QDialog *HModificaScheda)
    {
        HModificaScheda->setWindowTitle(QApplication::translate("HModificaScheda", "Modifica scheda", 0));
        leTitolo->setText(QApplication::translate("HModificaScheda", "TextLabel", 0));
        label->setText(QApplication::translate("HModificaScheda", "Olio:", 0));
        label_2->setText(QApplication::translate("HModificaScheda", "Vaso:", 0));
        label_3->setText(QApplication::translate("HModificaScheda", "Tappo:", 0));
        label_4->setText(QApplication::translate("HModificaScheda", "Etichette:", 0));
        label_5->setText(QApplication::translate("HModificaScheda", "Scatole:", 0));
        label_6->setText(QApplication::translate("HModificaScheda", "Note:", 0));
        label_7->setText(QApplication::translate("HModificaScheda", "Immagine:", 0));
        pushButton_4->setText(QApplication::translate("HModificaScheda", "Aggiungi", 0));
        pushButton_6->setText(QApplication::translate("HModificaScheda", "Rimuovi", 0));
        label_9->setText(QApplication::translate("HModificaScheda", "Img Cartone", 0));
        pushButton_9->setText(QApplication::translate("HModificaScheda", "Aggiungi", 0));
        pushButton_10->setText(QApplication::translate("HModificaScheda", "Rimuovi", 0));
        pushButton_5->setText(QApplication::translate("HModificaScheda", "Copia da Scheda", 0));
        pushButton->setText(QApplication::translate("HModificaScheda", "Salva", 0));
        pushButton_3->setText(QApplication::translate("HModificaScheda", "Annulla modifiche", 0));
        pushButton_2->setText(QApplication::translate("HModificaScheda", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HModificaScheda: public Ui_HModificaScheda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODIFICASCHEDA_H
