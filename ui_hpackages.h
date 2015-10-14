/********************************************************************************
** Form generated from reading UI file 'hpackages.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPACKAGES_H
#define UI_HPACKAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
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

class Ui_HPackages
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_3;
    QLabel *lbClienti;
    QComboBox *cbClienti;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QVBoxLayout *verticalLayout_2;
    QListView *lvSubclienti;
    QFormLayout *formLayout_4;
    QLabel *label;
    QComboBox *cbProdotti;
    QLabel *label_7;
    QLineEdit *leLest;
    QLabel *label_6;
    QFormLayout *formLayout_2;
    QLineEdit *leQuantLot;
    QComboBox *cbQua;
    QLabel *label_9;
    QDateEdit *dateEdit;
    QLabel *label_5;
    QTextEdit *teNote;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbCrea;
    QPushButton *pbAnnulla;
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QLabel *label_3;
    QFormLayout *formLayout;
    QLabel *label_8;
    QLineEdit *leComponente;
    QLabel *label_4;
    QLineEdit *leQuantita;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbAddRow;
    QPushButton *pbRemoveRow;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *leNewLot;
    QTableView *tvPack;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HPackages)
    {
        if (HPackages->objectName().isEmpty())
            HPackages->setObjectName(QStringLiteral("HPackages"));
        HPackages->setWindowModality(Qt::ApplicationModal);
        HPackages->resize(1257, 725);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HPackages->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(HPackages);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        lbClienti = new QLabel(HPackages);
        lbClienti->setObjectName(QStringLiteral("lbClienti"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, lbClienti);

        cbClienti = new QComboBox(HPackages);
        cbClienti->setObjectName(QStringLiteral("cbClienti"));
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cbClienti);

        checkBox_2 = new QCheckBox(HPackages);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox_2->setIcon(icon1);
        checkBox_2->setChecked(false);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, checkBox_2);

        checkBox = new QCheckBox(HPackages);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Book.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox->setIcon(icon2);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, checkBox);


        verticalLayout_3->addLayout(formLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lvSubclienti = new QListView(HPackages);
        lvSubclienti->setObjectName(QStringLiteral("lvSubclienti"));
        lvSubclienti->setMaximumSize(QSize(16777215, 120));

        verticalLayout_2->addWidget(lvSubclienti);


        verticalLayout_3->addLayout(verticalLayout_2);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label = new QLabel(HPackages);
        label->setObjectName(QStringLiteral("label"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label);

        cbProdotti = new QComboBox(HPackages);
        cbProdotti->setObjectName(QStringLiteral("cbProdotti"));
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, cbProdotti);

        label_7 = new QLabel(HPackages);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_7);

        leLest = new QLineEdit(HPackages);
        leLest->setObjectName(QStringLiteral("leLest"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, leLest);

        label_6 = new QLabel(HPackages);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_6);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        leQuantLot = new QLineEdit(HPackages);
        leQuantLot->setObjectName(QStringLiteral("leQuantLot"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, leQuantLot);

        cbQua = new QComboBox(HPackages);
        cbQua->setObjectName(QStringLiteral("cbQua"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, cbQua);


        formLayout_4->setLayout(2, QFormLayout::FieldRole, formLayout_2);

        label_9 = new QLabel(HPackages);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_9);

        dateEdit = new QDateEdit(HPackages);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, dateEdit);

        label_5 = new QLabel(HPackages);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_5);

        teNote = new QTextEdit(HPackages);
        teNote->setObjectName(QStringLiteral("teNote"));
        teNote->setMaximumSize(QSize(16777215, 120));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, teNote);


        verticalLayout_3->addLayout(formLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pbCrea = new QPushButton(HPackages);
        pbCrea->setObjectName(QStringLiteral("pbCrea"));
        pbCrea->setIcon(icon);

        horizontalLayout_4->addWidget(pbCrea);

        pbAnnulla = new QPushButton(HPackages);
        pbAnnulla->setObjectName(QStringLiteral("pbAnnulla"));
        pbAnnulla->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAnnulla->setIcon(icon3);

        horizontalLayout_4->addWidget(pbAnnulla);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        line = new QFrame(HPackages);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_3 = new QLabel(HPackages);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_8 = new QLabel(HPackages);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        leComponente = new QLineEdit(HPackages);
        leComponente->setObjectName(QStringLiteral("leComponente"));
        leComponente->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, leComponente);

        label_4 = new QLabel(HPackages);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        leQuantita = new QLineEdit(HPackages);
        leQuantita->setObjectName(QStringLiteral("leQuantita"));
        leQuantita->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, leQuantita);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pbAddRow = new QPushButton(HPackages);
        pbAddRow->setObjectName(QStringLiteral("pbAddRow"));
        pbAddRow->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAddRow->setIcon(icon4);

        horizontalLayout_2->addWidget(pbAddRow);

        pbRemoveRow = new QPushButton(HPackages);
        pbRemoveRow->setObjectName(QStringLiteral("pbRemoveRow"));
        pbRemoveRow->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbRemoveRow->setIcon(icon5);

        horizontalLayout_2->addWidget(pbRemoveRow);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(HPackages);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_5->addWidget(label_2);

        leNewLot = new QLineEdit(HPackages);
        leNewLot->setObjectName(QStringLiteral("leNewLot"));
        QPalette palette;
        QBrush brush(QColor(234, 234, 234, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(236, 233, 216, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        leNewLot->setPalette(palette);
        leNewLot->setReadOnly(false);

        horizontalLayout_5->addWidget(leNewLot);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout);


        horizontalLayout_3->addLayout(verticalLayout_4);

        tvPack = new QTableView(HPackages);
        tvPack->setObjectName(QStringLiteral("tvPack"));
        tvPack->setSelectionMode(QAbstractItemView::SingleSelection);
        tvPack->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvPack->horizontalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(tvPack);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_3 = new QPushButton(HPackages);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(HPackages);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon7);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(HPackages);

        QMetaObject::connectSlotsByName(HPackages);
    } // setupUi

    void retranslateUi(QWidget *HPackages)
    {
        HPackages->setWindowTitle(QApplication::translate("HPackages", "Packages", 0));
        lbClienti->setText(QApplication::translate("HPackages", "Cliente:", 0));
        checkBox_2->setText(QApplication::translate("HPackages", "Filtra i prodotti per subcliente", 0));
        checkBox->setText(QApplication::translate("HPackages", "mostra i subclienti se presenti", 0));
        label->setText(QApplication::translate("HPackages", "Prodotto:", 0));
        label_7->setText(QApplication::translate("HPackages", "lotto (esterno)", 0));
        label_6->setText(QApplication::translate("HPackages", "Quantit\303\240:", 0));
        label_9->setText(QApplication::translate("HPackages", "Scadenza:", 0));
        label_5->setText(QApplication::translate("HPackages", "Note:", 0));
        pbCrea->setText(QApplication::translate("HPackages", "Inizia", 0));
        pbAnnulla->setText(QApplication::translate("HPackages", "Annulla", 0));
        label_3->setText(QApplication::translate("HPackages", "Componenti:", 0));
        label_8->setText(QApplication::translate("HPackages", "Lotto:", 0));
        label_4->setText(QApplication::translate("HPackages", "Quantit\303\240:", 0));
        pbAddRow->setText(QApplication::translate("HPackages", "Aggiungi", 0));
        pbRemoveRow->setText(QApplication::translate("HPackages", "Rimuovi", 0));
        label_2->setText(QApplication::translate("HPackages", "Lotto interno creato:", 0));
        pushButton_3->setText(QApplication::translate("HPackages", "Salva", 0));
        pushButton_4->setText(QApplication::translate("HPackages", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HPackages: public Ui_HPackages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPACKAGES_H
