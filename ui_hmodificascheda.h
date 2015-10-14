/********************************************************************************
** Form generated from reading UI file 'hmodificascheda.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
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
    QVBoxLayout *verticalLayout;
    QLabel *leTitolo;
    QGridLayout *gridLayout;
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
    QLabel *label_7;
    QGraphicsView *gv;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *HModificaScheda)
    {
        if (HModificaScheda->objectName().isEmpty())
            HModificaScheda->setObjectName(QStringLiteral("HModificaScheda"));
        HModificaScheda->setWindowModality(Qt::ApplicationModal);
        HModificaScheda->resize(1024, 768);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Art-Supplies.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HModificaScheda->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HModificaScheda);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
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

        verticalLayout->addWidget(leTitolo);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(HModificaScheda);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        peOlio = new QPlainTextEdit(HModificaScheda);
        peOlio->setObjectName(QStringLiteral("peOlio"));
        peOlio->setMaximumSize(QSize(16777215, 80));

        gridLayout->addWidget(peOlio, 0, 1, 1, 1);

        label_2 = new QLabel(HModificaScheda);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        peVaso = new QPlainTextEdit(HModificaScheda);
        peVaso->setObjectName(QStringLiteral("peVaso"));
        peVaso->setMaximumSize(QSize(16777215, 80));

        gridLayout->addWidget(peVaso, 1, 1, 1, 1);

        label_3 = new QLabel(HModificaScheda);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        peTappo = new QPlainTextEdit(HModificaScheda);
        peTappo->setObjectName(QStringLiteral("peTappo"));
        peTappo->setMaximumSize(QSize(16777215, 80));

        gridLayout->addWidget(peTappo, 2, 1, 1, 1);

        label_4 = new QLabel(HModificaScheda);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        peEtichette = new QPlainTextEdit(HModificaScheda);
        peEtichette->setObjectName(QStringLiteral("peEtichette"));
        peEtichette->setMaximumSize(QSize(16777215, 80));

        gridLayout->addWidget(peEtichette, 3, 1, 1, 1);

        label_5 = new QLabel(HModificaScheda);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        peScatole = new QPlainTextEdit(HModificaScheda);
        peScatole->setObjectName(QStringLiteral("peScatole"));
        peScatole->setMaximumSize(QSize(16777215, 80));

        gridLayout->addWidget(peScatole, 4, 1, 1, 1);

        label_6 = new QLabel(HModificaScheda);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        ptNote = new QPlainTextEdit(HModificaScheda);
        ptNote->setObjectName(QStringLiteral("ptNote"));
        ptNote->setMaximumSize(QSize(16777215, 80));

        gridLayout->addWidget(ptNote, 5, 1, 1, 1);

        label_7 = new QLabel(HModificaScheda);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        gv = new QGraphicsView(HModificaScheda);
        gv->setObjectName(QStringLiteral("gv"));

        gridLayout->addWidget(gv, 6, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_4 = new QPushButton(HModificaScheda);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Photocamera.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(HModificaScheda);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);
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


        verticalLayout->addLayout(horizontalLayout);


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
        pushButton_4->setText(QApplication::translate("HModificaScheda", "Aggiungi immagine", 0));
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
