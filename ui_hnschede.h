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
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pbBold;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbsave;
    QPushButton *pushButton_2;
    QPushButton *pbClose;

    void setupUi(QWidget *HNSChede)
    {
        if (HNSChede->objectName().isEmpty())
            HNSChede->setObjectName(QStringLiteral("HNSChede"));
        HNSChede->setWindowModality(Qt::NonModal);
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
        pushButton_3 = new QPushButton(HNSChede);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(32, 16777215));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Font64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton = new QPushButton(HNSChede);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(32, 16777215));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Flag-yellow64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);

        horizontalLayout_3->addWidget(pushButton);

        pbBold = new QPushButton(HNSChede);
        pbBold->setObjectName(QStringLiteral("pbBold"));
        pbBold->setMaximumSize(QSize(32, 16777215));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Text-bold64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbBold->setIcon(icon3);

        horizontalLayout_3->addWidget(pbBold);


        verticalLayout->addLayout(horizontalLayout_3);

        textEdit = new QTextEdit(HNSChede);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setContextMenuPolicy(Qt::ActionsContextMenu);

        verticalLayout->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pbsave = new QPushButton(HNSChede);
        pbsave->setObjectName(QStringLiteral("pbsave"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbsave->setIcon(icon4);
        pbsave->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbsave);

        pushButton_2 = new QPushButton(HNSChede);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon5);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);

        pbClose = new QPushButton(HNSChede);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon6);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbClose);


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
        pbsave->setText(QApplication::translate("HNSChede", "Salva", 0));
        pushButton_2->setText(QApplication::translate("HNSChede", "Stampa...", 0));
        pbClose->setText(QApplication::translate("HNSChede", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HNSChede: public Ui_HNSChede {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNSCHEDE_H
