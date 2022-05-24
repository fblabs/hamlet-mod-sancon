/********************************************************************************
** Form generated from reading UI file 'hclientiassociati.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCLIENTIASSOCIATI_H
#define UI_HCLIENTIASSOCIATI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HClientiAssociati
{
public:
    QVBoxLayout *verticalLayout;
    QListView *lvClienti;
    QPushButton *pushButton;

    void setupUi(QWidget *HClientiAssociati)
    {
        if (HClientiAssociati->objectName().isEmpty())
            HClientiAssociati->setObjectName(QString::fromUtf8("HClientiAssociati"));
        HClientiAssociati->setWindowModality(Qt::ApplicationModal);
        HClientiAssociati->resize(623, 389);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/user-group-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HClientiAssociati->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HClientiAssociati);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lvClienti = new QListView(HClientiAssociati);
        lvClienti->setObjectName(QString::fromUtf8("lvClienti"));

        verticalLayout->addWidget(lvClienti);

        pushButton = new QPushButton(HClientiAssociati);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton);


        retranslateUi(HClientiAssociati);

        QMetaObject::connectSlotsByName(HClientiAssociati);
    } // setupUi

    void retranslateUi(QWidget *HClientiAssociati)
    {
        HClientiAssociati->setWindowTitle(QCoreApplication::translate("HClientiAssociati", "Clienti associati", nullptr));
        pushButton->setText(QCoreApplication::translate("HClientiAssociati", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HClientiAssociati: public Ui_HClientiAssociati {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCLIENTIASSOCIATI_H
