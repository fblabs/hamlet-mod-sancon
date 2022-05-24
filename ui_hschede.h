/********************************************************************************
** Form generated from reading UI file 'hschede.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HSCHEDE_H
#define UI_HSCHEDE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HSchede
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbClienti;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cbProdotti;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pbMod;
    QPushButton *pbClose;

    void setupUi(QWidget *HSchede)
    {
        if (HSchede->objectName().isEmpty())
            HSchede->setObjectName(QString::fromUtf8("HSchede"));
        HSchede->setWindowModality(Qt::NonModal);
        HSchede->resize(1293, 735);
        HSchede->setContextMenuPolicy(Qt::CustomContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Folder.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HSchede->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HSchede);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HSchede);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(72, 16777215));

        horizontalLayout->addWidget(label);

        cbClienti = new QComboBox(HSchede);
        cbClienti->setObjectName(QString::fromUtf8("cbClienti"));
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbClienti);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(HSchede);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(72, 16777215));

        horizontalLayout_2->addWidget(label_2);

        cbProdotti = new QComboBox(HSchede);
        cbProdotti->setObjectName(QString::fromUtf8("cbProdotti"));
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(cbProdotti);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        textEdit = new QTextEdit(HSchede);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(10);
        textEdit->setFont(font);
        textEdit->setContextMenuPolicy(Qt::ActionsContextMenu);
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit->setAutoFormatting(QTextEdit::AutoNone);

        verticalLayout->addWidget(textEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton = new QPushButton(HSchede);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        pbMod = new QPushButton(HSchede);
        pbMod->setObjectName(QString::fromUtf8("pbMod"));

        horizontalLayout_4->addWidget(pbMod);

        pbClose = new QPushButton(HSchede);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        horizontalLayout_4->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(HSchede);

        QMetaObject::connectSlotsByName(HSchede);
    } // setupUi

    void retranslateUi(QWidget *HSchede)
    {
        HSchede->setWindowTitle(QCoreApplication::translate("HSchede", "Schede", nullptr));
        label->setText(QCoreApplication::translate("HSchede", "Cliente:", nullptr));
        label_2->setText(QCoreApplication::translate("HSchede", "Prodotto:", nullptr));
        pushButton->setText(QCoreApplication::translate("HSchede", "Test", nullptr));
        pbMod->setText(QCoreApplication::translate("HSchede", "Modifica", nullptr));
        pbClose->setText(QCoreApplication::translate("HSchede", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HSchede: public Ui_HSchede {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HSCHEDE_H
