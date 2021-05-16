/********************************************************************************
** Form generated from reading UI file 'hnschede.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNSCHEDE_H
#define UI_HNSCHEDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HNSChede
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbClienti;
    QLabel *label_2;
    QComboBox *cbProdotti;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_8;
    QLabel *lblLed;
    QPushButton *pbInit;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pbBold;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbsave;
    QPushButton *pbCopy;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QPushButton *pbReset;
    QPushButton *pbClose;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *HNSChede)
    {
        if (HNSChede->objectName().isEmpty())
            HNSChede->setObjectName(QStringLiteral("HNSChede"));
        HNSChede->setWindowModality(Qt::NonModal);
        HNSChede->setEnabled(true);
        HNSChede->resize(1178, 673);
        HNSChede->setBaseSize(QSize(50, 0));
        HNSChede->setContextMenuPolicy(Qt::CustomContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Folder.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNSChede->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HNSChede);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HNSChede);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(45, 16777215));
        label->setBaseSize(QSize(0, 0));

        horizontalLayout->addWidget(label);

        cbClienti = new QComboBox(HNSChede);
        cbClienti->setObjectName(QStringLiteral("cbClienti"));
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbClienti);

        label_2 = new QLabel(HNSChede);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label_2);

        cbProdotti = new QComboBox(HNSChede);
        cbProdotti->setObjectName(QStringLiteral("cbProdotti"));
        cbProdotti->setEnabled(true);
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbProdotti);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_8 = new QPushButton(HNSChede);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon1);
        pushButton_8->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_8);

        lblLed = new QLabel(HNSChede);
        lblLed->setObjectName(QStringLiteral("lblLed"));
        lblLed->setMaximumSize(QSize(32, 32));
        lblLed->setPixmap(QPixmap(QString::fromUtf8(":/Resources/light-bulb-icon.png")));
        lblLed->setScaledContents(true);

        horizontalLayout_3->addWidget(lblLed);

        pbInit = new QPushButton(HNSChede);
        pbInit->setObjectName(QStringLiteral("pbInit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbInit->setIcon(icon2);

        horizontalLayout_3->addWidget(pbInit);

        pushButton_9 = new QPushButton(HNSChede);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon3);

        horizontalLayout_3->addWidget(pushButton_9);

        pushButton_3 = new QPushButton(HNSChede);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setMaximumSize(QSize(32, 16777215));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Font64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton = new QPushButton(HNSChede);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setMaximumSize(QSize(32, 16777215));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Bullhorn.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);

        horizontalLayout_3->addWidget(pushButton);

        pbBold = new QPushButton(HNSChede);
        pbBold->setObjectName(QStringLiteral("pbBold"));
        pbBold->setEnabled(false);
        pbBold->setMaximumSize(QSize(32, 16777215));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Text-bold64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbBold->setIcon(icon6);

        horizontalLayout_3->addWidget(pbBold);

        pushButton_5 = new QPushButton(HNSChede);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Resources/addimage.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon7);

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(HNSChede);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Resources/Right-align64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon8);

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(HNSChede);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon9);

        horizontalLayout_3->addWidget(pushButton_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        textEdit = new QTextEdit(HNSChede);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        QFont font;
        font.setPointSize(10);
        textEdit->setFont(font);
        textEdit->setContextMenuPolicy(Qt::ActionsContextMenu);
        textEdit->setAutoFormatting(QTextEdit::AutoNone);
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pbsave = new QPushButton(HNSChede);
        pbsave->setObjectName(QStringLiteral("pbsave"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbsave->setIcon(icon10);
        pbsave->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbsave);

        pbCopy = new QPushButton(HNSChede);
        pbCopy->setObjectName(QStringLiteral("pbCopy"));
        pbCopy->setIcon(icon3);
        pbCopy->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbCopy);

        pushButton_2 = new QPushButton(HNSChede);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon11);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_7 = new QPushButton(HNSChede);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Resources/Clockwise-arrow64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon12);
        pushButton_7->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_7);

        pbReset = new QPushButton(HNSChede);
        pbReset->setObjectName(QStringLiteral("pbReset"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/Resources/Arrow-turn-left64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbReset->setIcon(icon13);
        pbReset->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbReset);

        pbClose = new QPushButton(HNSChede);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon14);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbClose);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HNSChede);

        QMetaObject::connectSlotsByName(HNSChede);
    } // setupUi

    void retranslateUi(QWidget *HNSChede)
    {
        HNSChede->setWindowTitle(QApplication::translate("HNSChede", "SCHEDE CLIENTI", 0));
        label->setText(QApplication::translate("HNSChede", "Cliente:", 0));
        label_2->setText(QApplication::translate("HNSChede", "Prodotto:", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_8->setToolTip(QApplication::translate("HNSChede", "<html><head/><body><p>modifica scheda</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_8->setText(QString());
        pushButton_8->setShortcut(QApplication::translate("HNSChede", "Ctrl+M", 0));
        lblLed->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbInit->setToolTip(QApplication::translate("HNSChede", "nuova scheda", 0));
#endif // QT_NO_TOOLTIP
        pbInit->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_9->setToolTip(QApplication::translate("HNSChede", "copia da scheda", 0));
#endif // QT_NO_TOOLTIP
        pushButton_9->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("HNSChede", "Font", 0));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("HNSChede", "<html><head/><body><p>Evidenzia il testo selezionato</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbBold->setToolTip(QApplication::translate("HNSChede", "Grassetto", 0));
#endif // QT_NO_TOOLTIP
        pbBold->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_5->setToolTip(QApplication::translate("HNSChede", "Aggiungi immagine", 0));
#endif // QT_NO_TOOLTIP
        pushButton_5->setText(QString());
        pushButton_5->setShortcut(QApplication::translate("HNSChede", "Ctrl+I", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_6->setToolTip(QApplication::translate("HNSChede", "Modifica immagine", 0));
#endif // QT_NO_TOOLTIP
        pushButton_6->setText(QString());
        pushButton_6->setShortcut(QApplication::translate("HNSChede", "Ctrl+Alt+I", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("HNSChede", "Stampa", 0));
#endif // QT_NO_TOOLTIP
        pushButton_4->setText(QString());
        pushButton_4->setShortcut(QApplication::translate("HNSChede", "Ctrl+Alt+P", 0));
        textEdit->setPlaceholderText(QString());
        pbsave->setText(QApplication::translate("HNSChede", "Salva", 0));
        pbCopy->setText(QApplication::translate("HNSChede", "Copia da...", 0));
        pushButton_2->setText(QApplication::translate("HNSChede", "Stampa...", 0));
        pushButton_7->setText(QApplication::translate("HNSChede", "Annulla modifiche", 0));
        pbReset->setText(QApplication::translate("HNSChede", "Resetta scheda", 0));
        pbClose->setText(QApplication::translate("HNSChede", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HNSChede: public Ui_HNSChede {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNSCHEDE_H
