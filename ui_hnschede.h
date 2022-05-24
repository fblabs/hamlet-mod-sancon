/********************************************************************************
** Form generated from reading UI file 'hnschede.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNSCHEDE_H
#define UI_HNSCHEDE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
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
            HNSChede->setObjectName(QString::fromUtf8("HNSChede"));
        HNSChede->setWindowModality(Qt::NonModal);
        HNSChede->setEnabled(true);
        HNSChede->resize(1178, 673);
        HNSChede->setBaseSize(QSize(50, 0));
        HNSChede->setContextMenuPolicy(Qt::CustomContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Folder.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNSChede->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HNSChede);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HNSChede);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(45, 16777215));
        label->setBaseSize(QSize(0, 0));

        horizontalLayout->addWidget(label);

        cbClienti = new QComboBox(HNSChede);
        cbClienti->setObjectName(QString::fromUtf8("cbClienti"));
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbClienti);

        label_2 = new QLabel(HNSChede);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label_2);

        cbProdotti = new QComboBox(HNSChede);
        cbProdotti->setObjectName(QString::fromUtf8("cbProdotti"));
        cbProdotti->setEnabled(true);
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbProdotti);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_8 = new QPushButton(HNSChede);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon1);
        pushButton_8->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_8);

        lblLed = new QLabel(HNSChede);
        lblLed->setObjectName(QString::fromUtf8("lblLed"));
        lblLed->setMaximumSize(QSize(32, 32));
        lblLed->setPixmap(QPixmap(QString::fromUtf8(":/Resources/light-bulb-icon.png")));
        lblLed->setScaledContents(true);

        horizontalLayout_3->addWidget(lblLed);

        pbInit = new QPushButton(HNSChede);
        pbInit->setObjectName(QString::fromUtf8("pbInit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbInit->setIcon(icon2);

        horizontalLayout_3->addWidget(pbInit);

        pushButton_9 = new QPushButton(HNSChede);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon3);

        horizontalLayout_3->addWidget(pushButton_9);

        pushButton_3 = new QPushButton(HNSChede);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setMaximumSize(QSize(32, 16777215));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Font64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton = new QPushButton(HNSChede);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setMaximumSize(QSize(32, 16777215));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Bullhorn.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);

        horizontalLayout_3->addWidget(pushButton);

        pbBold = new QPushButton(HNSChede);
        pbBold->setObjectName(QString::fromUtf8("pbBold"));
        pbBold->setEnabled(false);
        pbBold->setMaximumSize(QSize(32, 16777215));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Text-bold64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbBold->setIcon(icon6);

        horizontalLayout_3->addWidget(pbBold);

        pushButton_5 = new QPushButton(HNSChede);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/addimage.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon7);

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(HNSChede);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Resources/Right-align64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon8);

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(HNSChede);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon9);

        horizontalLayout_3->addWidget(pushButton_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        textEdit = new QTextEdit(HNSChede);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        QFont font;
        font.setPointSize(10);
        textEdit->setFont(font);
        textEdit->setContextMenuPolicy(Qt::ActionsContextMenu);
        textEdit->setAutoFormatting(QTextEdit::AutoNone);
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pbsave = new QPushButton(HNSChede);
        pbsave->setObjectName(QString::fromUtf8("pbsave"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbsave->setIcon(icon10);
        pbsave->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbsave);

        pbCopy = new QPushButton(HNSChede);
        pbCopy->setObjectName(QString::fromUtf8("pbCopy"));
        pbCopy->setIcon(icon3);
        pbCopy->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbCopy);

        pushButton_2 = new QPushButton(HNSChede);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon11);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_7 = new QPushButton(HNSChede);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Resources/Clockwise-arrow64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon12);
        pushButton_7->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_7);

        pbReset = new QPushButton(HNSChede);
        pbReset->setObjectName(QString::fromUtf8("pbReset"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Resources/Arrow-turn-left64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbReset->setIcon(icon13);
        pbReset->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbReset);

        pbClose = new QPushButton(HNSChede);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
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
        HNSChede->setWindowTitle(QCoreApplication::translate("HNSChede", "SCHEDE CLIENTI", nullptr));
        label->setText(QCoreApplication::translate("HNSChede", "Cliente:", nullptr));
        label_2->setText(QCoreApplication::translate("HNSChede", "Prodotto:", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_8->setToolTip(QCoreApplication::translate("HNSChede", "<html><head/><body><p>modifica scheda</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_8->setText(QString());
#if QT_CONFIG(shortcut)
        pushButton_8->setShortcut(QCoreApplication::translate("HNSChede", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        lblLed->setText(QString());
#if QT_CONFIG(tooltip)
        pbInit->setToolTip(QCoreApplication::translate("HNSChede", "nuova scheda", nullptr));
#endif // QT_CONFIG(tooltip)
        pbInit->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_9->setToolTip(QCoreApplication::translate("HNSChede", "copia da scheda", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_9->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("HNSChede", "Font", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("HNSChede", "<html><head/><body><p>Evidenzia il testo selezionato</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QString());
#if QT_CONFIG(tooltip)
        pbBold->setToolTip(QCoreApplication::translate("HNSChede", "Grassetto", nullptr));
#endif // QT_CONFIG(tooltip)
        pbBold->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_5->setToolTip(QCoreApplication::translate("HNSChede", "Aggiungi immagine", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_5->setText(QString());
#if QT_CONFIG(shortcut)
        pushButton_5->setShortcut(QCoreApplication::translate("HNSChede", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pushButton_6->setToolTip(QCoreApplication::translate("HNSChede", "Modifica immagine", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_6->setText(QString());
#if QT_CONFIG(shortcut)
        pushButton_6->setShortcut(QCoreApplication::translate("HNSChede", "Ctrl+Alt+I", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pushButton_4->setToolTip(QCoreApplication::translate("HNSChede", "Stampa", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_4->setText(QString());
#if QT_CONFIG(shortcut)
        pushButton_4->setShortcut(QCoreApplication::translate("HNSChede", "Ctrl+Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
        textEdit->setPlaceholderText(QString());
        pbsave->setText(QCoreApplication::translate("HNSChede", "Salva", nullptr));
        pbCopy->setText(QCoreApplication::translate("HNSChede", "Copia da...", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HNSChede", "Stampa...", nullptr));
        pushButton_7->setText(QCoreApplication::translate("HNSChede", "Annulla modifiche", nullptr));
        pbReset->setText(QCoreApplication::translate("HNSChede", "Resetta scheda", nullptr));
        pbClose->setText(QCoreApplication::translate("HNSChede", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HNSChede: public Ui_HNSChede {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNSCHEDE_H
