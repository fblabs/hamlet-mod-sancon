/********************************************************************************
** Form generated from reading UI file 'hmodricette.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODRICETTE_H
#define UI_HMODRICETTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HModRicette
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *cbRicette;
    QRadioButton *rb_con;
    QRadioButton *rb_senza;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QPushButton *pbRicingredient;
    QPushButton *pbC4R;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pbduplica;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *tbnote;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_3;
    QTableView *tvImages;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbImages;
    QPushButton *pb_addImage;
    QPushButton *pb_save_images;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbAddRow;
    QPushButton *pbDeleteRow;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lbQtot;
    QLineEdit *leTotal;
    QPushButton *pbReset;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HModRicette)
    {
        if (HModRicette->objectName().isEmpty())
            HModRicette->setObjectName(QString::fromUtf8("HModRicette"));
        HModRicette->setWindowModality(Qt::NonModal);
        HModRicette->resize(1261, 750);
        HModRicette->setContextMenuPolicy(Qt::CustomContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HModRicette->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HModRicette);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(HModRicette);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_4->addWidget(label_2);

        cbRicette = new QComboBox(HModRicette);
        cbRicette->setObjectName(QString::fromUtf8("cbRicette"));
        cbRicette->setMinimumSize(QSize(500, 0));
        cbRicette->setEditable(true);

        horizontalLayout_4->addWidget(cbRicette);

        rb_con = new QRadioButton(HModRicette);
        rb_con->setObjectName(QString::fromUtf8("rb_con"));
        rb_con->setChecked(true);

        horizontalLayout_4->addWidget(rb_con);

        rb_senza = new QRadioButton(HModRicette);
        rb_senza->setObjectName(QString::fromUtf8("rb_senza"));
        rb_senza->setChecked(false);

        horizontalLayout_4->addWidget(rb_senza);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pbRicingredient = new QPushButton(HModRicette);
        pbRicingredient->setObjectName(QString::fromUtf8("pbRicingredient"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Note64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbRicingredient->setIcon(icon1);
        pbRicingredient->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbRicingredient, 0, 5, 1, 1);

        pbC4R = new QPushButton(HModRicette);
        pbC4R->setObjectName(QString::fromUtf8("pbC4R"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Link64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbC4R->setIcon(icon2);
        pbC4R->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbC4R, 0, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        pbduplica = new QPushButton(HModRicette);
        pbduplica->setObjectName(QString::fromUtf8("pbduplica"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Notepad.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbduplica->setIcon(icon3);
        pbduplica->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbduplica, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(HModRicette);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Cube.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);
        pushButton_3->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(HModRicette);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Map.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon5);
        pushButton_4->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_4, 0, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tbnote = new QTextBrowser(HModRicette);
        tbnote->setObjectName(QString::fromUtf8("tbnote"));
        tbnote->setMaximumSize(QSize(16777215, 120));
        tbnote->setReadOnly(false);

        verticalLayout_2->addWidget(tbnote);

        tableView = new QTableView(HModRicette);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableView);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tvImages = new QTableView(HModRicette);
        tvImages->setObjectName(QString::fromUtf8("tvImages"));
        tvImages->setContextMenuPolicy(Qt::CustomContextMenu);
        tvImages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvImages->setSelectionMode(QAbstractItemView::SingleSelection);
        tvImages->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvImages->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tvImages->setSortingEnabled(true);
        tvImages->horizontalHeader()->setVisible(false);
        tvImages->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tvImages);


        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox = new QCheckBox(HModRicette);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        horizontalLayout_2->addWidget(checkBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pbImages = new QPushButton(HModRicette);
        pbImages->setObjectName(QString::fromUtf8("pbImages"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Eye64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbImages->setIcon(icon6);

        horizontalLayout_2->addWidget(pbImages);

        pb_addImage = new QPushButton(HModRicette);
        pb_addImage->setObjectName(QString::fromUtf8("pb_addImage"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/addimage.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_addImage->setIcon(icon7);

        horizontalLayout_2->addWidget(pb_addImage);

        pb_save_images = new QPushButton(HModRicette);
        pb_save_images->setObjectName(QString::fromUtf8("pb_save_images"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Resources/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_save_images->setIcon(icon8);

        horizontalLayout_2->addWidget(pb_save_images);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbAddRow = new QPushButton(HModRicette);
        pbAddRow->setObjectName(QString::fromUtf8("pbAddRow"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAddRow->setIcon(icon9);
        pbAddRow->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbAddRow);

        pbDeleteRow = new QPushButton(HModRicette);
        pbDeleteRow->setObjectName(QString::fromUtf8("pbDeleteRow"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbDeleteRow->setIcon(icon10);
        pbDeleteRow->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbDeleteRow);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        lbQtot = new QLabel(HModRicette);
        lbQtot->setObjectName(QString::fromUtf8("lbQtot"));
        lbQtot->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(lbQtot);

        leTotal = new QLineEdit(HModRicette);
        leTotal->setObjectName(QString::fromUtf8("leTotal"));
        leTotal->setMaximumSize(QSize(120, 16777215));
        leTotal->setClearButtonEnabled(false);

        horizontalLayout_3->addWidget(leTotal);

        pbReset = new QPushButton(HModRicette);
        pbReset->setObjectName(QString::fromUtf8("pbReset"));
        pbReset->setMinimumSize(QSize(48, 0));
        pbReset->setMaximumSize(QSize(48, 16777215));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Resources/Counterclockwise-arrow64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbReset->setIcon(icon11);

        horizontalLayout_3->addWidget(pbReset);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(HModRicette);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon12);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_6 = new QPushButton(HModRicette);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon13);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(HModRicette);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon14);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(HModRicette);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon15);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HModRicette);

        QMetaObject::connectSlotsByName(HModRicette);
    } // setupUi

    void retranslateUi(QWidget *HModRicette)
    {
        HModRicette->setWindowTitle(QCoreApplication::translate("HModRicette", "Ricette", nullptr));
        label_2->setText(QCoreApplication::translate("HModRicette", "Prodotti:", nullptr));
        rb_con->setText(QCoreApplication::translate("HModRicette", "Visualizza prodotti con ricetta gi\303\240 impostata (i)", nullptr));
#if QT_CONFIG(shortcut)
        rb_con->setShortcut(QCoreApplication::translate("HModRicette", "I", nullptr));
#endif // QT_CONFIG(shortcut)
        rb_senza->setText(QCoreApplication::translate("HModRicette", "Visualzza prodotti senza ricetta (N)", nullptr));
#if QT_CONFIG(shortcut)
        rb_senza->setShortcut(QCoreApplication::translate("HModRicette", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        pbRicingredient->setText(QCoreApplication::translate("HModRicette", "Ricette per ingrediente", nullptr));
        pbC4R->setText(QCoreApplication::translate("HModRicette", "Clienti associati (C)", nullptr));
#if QT_CONFIG(shortcut)
        pbC4R->setShortcut(QCoreApplication::translate("HModRicette", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        pbduplica->setText(QCoreApplication::translate("HModRicette", "Duplica Ricetta (D)", nullptr));
#if QT_CONFIG(shortcut)
        pbduplica->setShortcut(QCoreApplication::translate("HModRicette", "D", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("HModRicette", "Inizializza o crea una ricetta a seconda che il prodotto esista o meno, nel qual caso crea un nuovo prodotto finito o semilavorato", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QCoreApplication::translate("HModRicette", "Ricetta (R)", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_3->setShortcut(QCoreApplication::translate("HModRicette", "R", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_4->setText(QCoreApplication::translate("HModRicette", "Associazioni ricette-clienti (A)", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_4->setShortcut(QCoreApplication::translate("HModRicette", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        checkBox->setText(QCoreApplication::translate("HModRicette", "Mostra in produzione", nullptr));
        pbImages->setText(QCoreApplication::translate("HModRicette", "Mostra Immagini", nullptr));
        pb_addImage->setText(QCoreApplication::translate("HModRicette", "Aggiungi immagine (ctrl+i)", nullptr));
#if QT_CONFIG(shortcut)
        pb_addImage->setShortcut(QCoreApplication::translate("HModRicette", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_save_images->setText(QCoreApplication::translate("HModRicette", "Rimuovi immagine", nullptr));
#if QT_CONFIG(shortcut)
        pb_save_images->setShortcut(QCoreApplication::translate("HModRicette", "Ctrl+Shift+I", nullptr));
#endif // QT_CONFIG(shortcut)
        pbAddRow->setText(QCoreApplication::translate("HModRicette", "Aggiungi ingrediente (Ctrrl + A)", nullptr));
#if QT_CONFIG(shortcut)
        pbAddRow->setShortcut(QCoreApplication::translate("HModRicette", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        pbDeleteRow->setText(QCoreApplication::translate("HModRicette", "Rimuovi ingrediente (Ctrl + R)", nullptr));
#if QT_CONFIG(shortcut)
        pbDeleteRow->setShortcut(QCoreApplication::translate("HModRicette", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        lbQtot->setText(QCoreApplication::translate("HModRicette", "Quantit\303\240 totale:", nullptr));
#if QT_CONFIG(tooltip)
        leTotal->setToolTip(QCoreApplication::translate("HModRicette", "Una volta inseriti gli ingredienti inserire la quantit\303\240 totale da produrre ", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pbReset->setToolTip(QCoreApplication::translate("HModRicette", "reset", nullptr));
#endif // QT_CONFIG(tooltip)
        pbReset->setText(QString());
        pushButton->setText(QCoreApplication::translate("HModRicette", "Salva", nullptr));
        pushButton_6->setText(QCoreApplication::translate("HModRicette", "Annulla", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HModRicette", "Stampa", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HModRicette", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HModRicette: public Ui_HModRicette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODRICETTE_H
