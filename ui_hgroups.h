/********************************************************************************
** Form generated from reading UI file 'hgroups.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HGROUPS_H
#define UI_HGROUPS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HGroups
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QComboBox *cbGruppi;
    QPushButton *pbDelete;
    QLabel *lb_gruppo;
    QGridLayout *gridLayout_4;
    QLabel *spacer;
    QLineEdit *leDesc;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QCheckBox *cbVistaUtenti;
    QCheckBox *cbUpdateUtenti;
    QLabel *label_3;
    QCheckBox *cbVistaAnagrafica;
    QCheckBox *cbUpdateAnagrafica;
    QLabel *label_4;
    QCheckBox *cbVistaNotifiche;
    QCheckBox *cbUpdateNotifiche;
    QLabel *label_6;
    QCheckBox *cbVistacontatti;
    QCheckBox *cbUpdateContatti;
    QLabel *label_7;
    QCheckBox *cbVistaLotti;
    QCheckBox *cbUpdateLotti;
    QLabel *label_5;
    QCheckBox *cbVistaOperazioni;
    QCheckBox *cbUpdateOperazioni;
    QLabel *label_8;
    QCheckBox *cbVistaProdotti;
    QCheckBox *cbUpdateProdotti;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QCheckBox *cbVistaSchede;
    QCheckBox *cbUpdateSchede;
    QLabel *label_10;
    QCheckBox *cbVistaRicette;
    QCheckBox *cbUpdateRicette;
    QLabel *label_11;
    QCheckBox *cbVistaProgrammi;
    QCheckBox *cbUpdateProgrammi;
    QLabel *label_12;
    QCheckBox *cbVistaProduzione;
    QCheckBox *cbUpdateProduzione;
    QLabel *label_13;
    QCheckBox *cbVistaPackages;
    QCheckBox *cbUpdatePackages;
    QLabel *label_14;
    QCheckBox *cbVistaCalcoloCosti;
    QCheckBox *cbUpdateCalcoloCosti;
    QLabel *label_15;
    QCheckBox *cbVistaAnalisi;
    QCheckBox *cbUpdateAnalisi;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbCreateGroup;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HGroups)
    {
        if (HGroups->objectName().isEmpty())
            HGroups->setObjectName(QString::fromUtf8("HGroups"));
        HGroups->setWindowModality(Qt::ApplicationModal);
        HGroups->resize(964, 451);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/user-group-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HGroups->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HGroups);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        cbGruppi = new QComboBox(HGroups);
        cbGruppi->setObjectName(QString::fromUtf8("cbGruppi"));
        cbGruppi->setMinimumSize(QSize(500, 0));
        cbGruppi->setMaximumSize(QSize(500, 16777215));
        cbGruppi->setEditable(true);

        gridLayout_3->addWidget(cbGruppi, 0, 1, 1, 1);

        pbDelete = new QPushButton(HGroups);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbDelete->setIcon(icon1);
        pbDelete->setIconSize(QSize(32, 32));

        gridLayout_3->addWidget(pbDelete, 0, 2, 1, 1);

        lb_gruppo = new QLabel(HGroups);
        lb_gruppo->setObjectName(QString::fromUtf8("lb_gruppo"));
        lb_gruppo->setMinimumSize(QSize(50, 0));
        lb_gruppo->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(lb_gruppo, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        spacer = new QLabel(HGroups);
        spacer->setObjectName(QString::fromUtf8("spacer"));
        spacer->setMinimumSize(QSize(50, 0));
        spacer->setMaximumSize(QSize(50, 16777215));

        gridLayout_4->addWidget(spacer, 0, 0, 1, 1);

        leDesc = new QLineEdit(HGroups);
        leDesc->setObjectName(QString::fromUtf8("leDesc"));

        gridLayout_4->addWidget(leDesc, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(HGroups);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        cbVistaUtenti = new QCheckBox(HGroups);
        cbVistaUtenti->setObjectName(QString::fromUtf8("cbVistaUtenti"));

        gridLayout->addWidget(cbVistaUtenti, 0, 1, 1, 1);

        cbUpdateUtenti = new QCheckBox(HGroups);
        cbUpdateUtenti->setObjectName(QString::fromUtf8("cbUpdateUtenti"));

        gridLayout->addWidget(cbUpdateUtenti, 0, 2, 1, 1);

        label_3 = new QLabel(HGroups);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        cbVistaAnagrafica = new QCheckBox(HGroups);
        cbVistaAnagrafica->setObjectName(QString::fromUtf8("cbVistaAnagrafica"));

        gridLayout->addWidget(cbVistaAnagrafica, 1, 1, 1, 1);

        cbUpdateAnagrafica = new QCheckBox(HGroups);
        cbUpdateAnagrafica->setObjectName(QString::fromUtf8("cbUpdateAnagrafica"));

        gridLayout->addWidget(cbUpdateAnagrafica, 1, 2, 1, 1);

        label_4 = new QLabel(HGroups);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        cbVistaNotifiche = new QCheckBox(HGroups);
        cbVistaNotifiche->setObjectName(QString::fromUtf8("cbVistaNotifiche"));

        gridLayout->addWidget(cbVistaNotifiche, 2, 1, 1, 1);

        cbUpdateNotifiche = new QCheckBox(HGroups);
        cbUpdateNotifiche->setObjectName(QString::fromUtf8("cbUpdateNotifiche"));

        gridLayout->addWidget(cbUpdateNotifiche, 2, 2, 1, 1);

        label_6 = new QLabel(HGroups);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        cbVistacontatti = new QCheckBox(HGroups);
        cbVistacontatti->setObjectName(QString::fromUtf8("cbVistacontatti"));

        gridLayout->addWidget(cbVistacontatti, 3, 1, 1, 1);

        cbUpdateContatti = new QCheckBox(HGroups);
        cbUpdateContatti->setObjectName(QString::fromUtf8("cbUpdateContatti"));

        gridLayout->addWidget(cbUpdateContatti, 3, 2, 1, 1);

        label_7 = new QLabel(HGroups);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        cbVistaLotti = new QCheckBox(HGroups);
        cbVistaLotti->setObjectName(QString::fromUtf8("cbVistaLotti"));

        gridLayout->addWidget(cbVistaLotti, 4, 1, 1, 1);

        cbUpdateLotti = new QCheckBox(HGroups);
        cbUpdateLotti->setObjectName(QString::fromUtf8("cbUpdateLotti"));

        gridLayout->addWidget(cbUpdateLotti, 4, 2, 1, 1);

        label_5 = new QLabel(HGroups);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        cbVistaOperazioni = new QCheckBox(HGroups);
        cbVistaOperazioni->setObjectName(QString::fromUtf8("cbVistaOperazioni"));

        gridLayout->addWidget(cbVistaOperazioni, 5, 1, 1, 1);

        cbUpdateOperazioni = new QCheckBox(HGroups);
        cbUpdateOperazioni->setObjectName(QString::fromUtf8("cbUpdateOperazioni"));

        gridLayout->addWidget(cbUpdateOperazioni, 5, 2, 1, 1);

        label_8 = new QLabel(HGroups);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        cbVistaProdotti = new QCheckBox(HGroups);
        cbVistaProdotti->setObjectName(QString::fromUtf8("cbVistaProdotti"));

        gridLayout->addWidget(cbVistaProdotti, 6, 1, 1, 1);

        cbUpdateProdotti = new QCheckBox(HGroups);
        cbUpdateProdotti->setObjectName(QString::fromUtf8("cbUpdateProdotti"));

        gridLayout->addWidget(cbUpdateProdotti, 6, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_9 = new QLabel(HGroups);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        cbVistaSchede = new QCheckBox(HGroups);
        cbVistaSchede->setObjectName(QString::fromUtf8("cbVistaSchede"));

        gridLayout_2->addWidget(cbVistaSchede, 0, 1, 1, 1);

        cbUpdateSchede = new QCheckBox(HGroups);
        cbUpdateSchede->setObjectName(QString::fromUtf8("cbUpdateSchede"));

        gridLayout_2->addWidget(cbUpdateSchede, 0, 2, 1, 1);

        label_10 = new QLabel(HGroups);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        cbVistaRicette = new QCheckBox(HGroups);
        cbVistaRicette->setObjectName(QString::fromUtf8("cbVistaRicette"));

        gridLayout_2->addWidget(cbVistaRicette, 1, 1, 1, 1);

        cbUpdateRicette = new QCheckBox(HGroups);
        cbUpdateRicette->setObjectName(QString::fromUtf8("cbUpdateRicette"));

        gridLayout_2->addWidget(cbUpdateRicette, 1, 2, 1, 1);

        label_11 = new QLabel(HGroups);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        cbVistaProgrammi = new QCheckBox(HGroups);
        cbVistaProgrammi->setObjectName(QString::fromUtf8("cbVistaProgrammi"));

        gridLayout_2->addWidget(cbVistaProgrammi, 2, 1, 1, 1);

        cbUpdateProgrammi = new QCheckBox(HGroups);
        cbUpdateProgrammi->setObjectName(QString::fromUtf8("cbUpdateProgrammi"));

        gridLayout_2->addWidget(cbUpdateProgrammi, 2, 2, 1, 1);

        label_12 = new QLabel(HGroups);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        gridLayout_2->addWidget(label_12, 3, 0, 1, 1);

        cbVistaProduzione = new QCheckBox(HGroups);
        cbVistaProduzione->setObjectName(QString::fromUtf8("cbVistaProduzione"));

        gridLayout_2->addWidget(cbVistaProduzione, 3, 1, 1, 1);

        cbUpdateProduzione = new QCheckBox(HGroups);
        cbUpdateProduzione->setObjectName(QString::fromUtf8("cbUpdateProduzione"));

        gridLayout_2->addWidget(cbUpdateProduzione, 3, 2, 1, 1);

        label_13 = new QLabel(HGroups);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        gridLayout_2->addWidget(label_13, 4, 0, 1, 1);

        cbVistaPackages = new QCheckBox(HGroups);
        cbVistaPackages->setObjectName(QString::fromUtf8("cbVistaPackages"));

        gridLayout_2->addWidget(cbVistaPackages, 4, 1, 1, 1);

        cbUpdatePackages = new QCheckBox(HGroups);
        cbUpdatePackages->setObjectName(QString::fromUtf8("cbUpdatePackages"));

        gridLayout_2->addWidget(cbUpdatePackages, 4, 2, 1, 1);

        label_14 = new QLabel(HGroups);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        gridLayout_2->addWidget(label_14, 5, 0, 1, 1);

        cbVistaCalcoloCosti = new QCheckBox(HGroups);
        cbVistaCalcoloCosti->setObjectName(QString::fromUtf8("cbVistaCalcoloCosti"));

        gridLayout_2->addWidget(cbVistaCalcoloCosti, 5, 1, 1, 1);

        cbUpdateCalcoloCosti = new QCheckBox(HGroups);
        cbUpdateCalcoloCosti->setObjectName(QString::fromUtf8("cbUpdateCalcoloCosti"));

        gridLayout_2->addWidget(cbUpdateCalcoloCosti, 5, 2, 1, 1);

        label_15 = new QLabel(HGroups);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        gridLayout_2->addWidget(label_15, 6, 0, 1, 1);

        cbVistaAnalisi = new QCheckBox(HGroups);
        cbVistaAnalisi->setObjectName(QString::fromUtf8("cbVistaAnalisi"));

        gridLayout_2->addWidget(cbVistaAnalisi, 6, 1, 1, 1);

        cbUpdateAnalisi = new QCheckBox(HGroups);
        cbUpdateAnalisi->setObjectName(QString::fromUtf8("cbUpdateAnalisi"));

        gridLayout_2->addWidget(cbUpdateAnalisi, 6, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pbCreateGroup = new QPushButton(HGroups);
        pbCreateGroup->setObjectName(QString::fromUtf8("pbCreateGroup"));
        pbCreateGroup->setIcon(icon);
        pbCreateGroup->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pbCreateGroup);

        pbSave = new QPushButton(HGroups);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon2);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pbSave);

        pbClose = new QPushButton(HGroups);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon3);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pbClose);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(HGroups);

        QMetaObject::connectSlotsByName(HGroups);
    } // setupUi

    void retranslateUi(QWidget *HGroups)
    {
        HGroups->setWindowTitle(QCoreApplication::translate("HGroups", "Gestione Gruppi", nullptr));
        pbDelete->setText(QCoreApplication::translate("HGroups", "Elimina gruppo permessi", nullptr));
        lb_gruppo->setText(QCoreApplication::translate("HGroups", "GRUPPO:", nullptr));
        spacer->setText(QString());
        label_2->setText(QCoreApplication::translate("HGroups", "Utenti", nullptr));
        cbVistaUtenti->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdateUtenti->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        label_3->setText(QCoreApplication::translate("HGroups", "Anagrafica:", nullptr));
        cbVistaAnagrafica->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdateAnagrafica->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        label_4->setText(QCoreApplication::translate("HGroups", "Notifiche", nullptr));
        cbVistaNotifiche->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdateNotifiche->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        label_6->setText(QCoreApplication::translate("HGroups", "Contatti:", nullptr));
        cbVistacontatti->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdateContatti->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        label_7->setText(QCoreApplication::translate("HGroups", "Lotti", nullptr));
        cbVistaLotti->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdateLotti->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        label_5->setText(QCoreApplication::translate("HGroups", "Operazioni:", nullptr));
        cbVistaOperazioni->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdateOperazioni->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        label_8->setText(QCoreApplication::translate("HGroups", "Prodotti:", nullptr));
        cbVistaProdotti->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdateProdotti->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        label_9->setText(QCoreApplication::translate("HGroups", "Schede Clienti:", nullptr));
        cbVistaSchede->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdateSchede->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        label_10->setText(QCoreApplication::translate("HGroups", "Ricette:", nullptr));
        cbVistaRicette->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdateRicette->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        label_11->setText(QCoreApplication::translate("HGroups", "Programmi:", nullptr));
        cbVistaProgrammi->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdateProgrammi->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        label_12->setText(QCoreApplication::translate("HGroups", "Produzione:", nullptr));
        cbVistaProduzione->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdateProduzione->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        label_13->setText(QCoreApplication::translate("HGroups", "Packages:", nullptr));
        cbVistaPackages->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdatePackages->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        label_14->setText(QCoreApplication::translate("HGroups", "Calcolo costi:", nullptr));
        cbVistaCalcoloCosti->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdateCalcoloCosti->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        label_15->setText(QCoreApplication::translate("HGroups", "Analisi:", nullptr));
        cbVistaAnalisi->setText(QCoreApplication::translate("HGroups", "Visualizzazione", nullptr));
        cbUpdateAnalisi->setText(QCoreApplication::translate("HGroups", "Aggiornamento", nullptr));
        pbCreateGroup->setText(QCoreApplication::translate("HGroups", "Crea nuovo gruppo permessi", nullptr));
        pbSave->setText(QCoreApplication::translate("HGroups", "Salva modifiche", nullptr));
        pbClose->setText(QCoreApplication::translate("HGroups", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HGroups: public Ui_HGroups {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HGROUPS_H
