/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbUser_label;
    QLabel *lbCurrentUser;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QToolButton *tbSettings;
    QToolButton *tbProdotti;
    QToolButton *tbMagaz;
    QPushButton *pbC4R;
    QPushButton *pbProgrammazione;
    QToolButton *pBNewOperation;
    QPushButton *tbAnag;
    QToolButton *tbLotti;
    QToolButton *tbAnalisi;
    QToolButton *tbLogout;
    QToolButton *tbClose;
    QToolButton *tnProduzione;
    QPushButton *toolButton;
    QPushButton *pbExpirations;
    QPushButton *pbCalcoloCosti;
    QPushButton *pbPackages;
    QToolButton *tbRicette;
    QToolButton *tbModificaLotti;
    QPushButton *pbSchede;
    QPushButton *tbUtenti;
    QToolButton *tbAssociazioni;
    QPushButton *pbUnload;
    QPushButton *pbContacts;
    QPushButton *pbNotifiche;
    QPushButton *pbCkeckNotifications;
    QLabel *label_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1156, 831);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 74, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 111, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 92, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 37, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 49, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 255, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        MainWindow->setPalette(palette);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/hamlet_graphics.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setIconSize(QSize(32, 32));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->setDocumentMode(false);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbUser_label = new QLabel(centralWidget);
        lbUser_label->setObjectName(QString::fromUtf8("lbUser_label"));
        lbUser_label->setMinimumSize(QSize(100, 0));
        lbUser_label->setMaximumSize(QSize(100, 16777215));
        lbUser_label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(lbUser_label);

        lbCurrentUser = new QLabel(centralWidget);
        lbCurrentUser->setObjectName(QString::fromUtf8("lbCurrentUser"));

        horizontalLayout_2->addWidget(lbCurrentUser);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_4->setFont(font);
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(300, 300));
        label->setMaximumSize(QSize(400, 400));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/hamlet_graphics.png")));
        label->setScaledContents(true);
        label->setMargin(1);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAutoFillBackground(true);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2->setOpenExternalLinks(true);

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(17, 79, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tbSettings = new QToolButton(centralWidget);
        tbSettings->setObjectName(QString::fromUtf8("tbSettings"));
        tbSettings->setEnabled(true);
        tbSettings->setMinimumSize(QSize(140, 0));
        tbSettings->setMaximumSize(QSize(125, 16777215));
        tbSettings->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Computer.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbSettings->setIcon(icon1);
        tbSettings->setIconSize(QSize(32, 32));
        tbSettings->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbSettings, 3, 0, 1, 1);

        tbProdotti = new QToolButton(centralWidget);
        tbProdotti->setObjectName(QString::fromUtf8("tbProdotti"));
        tbProdotti->setEnabled(false);
        tbProdotti->setMinimumSize(QSize(140, 0));
        tbProdotti->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Wood-4-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbProdotti->setIcon(icon2);
        tbProdotti->setIconSize(QSize(32, 32));
        tbProdotti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbProdotti, 5, 2, 1, 1);

        tbMagaz = new QToolButton(centralWidget);
        tbMagaz->setObjectName(QString::fromUtf8("tbMagaz"));
        tbMagaz->setEnabled(false);
        tbMagaz->setMinimumSize(QSize(140, 0));
        tbMagaz->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/fork-1-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbMagaz->setIcon(icon3);
        tbMagaz->setIconSize(QSize(32, 32));
        tbMagaz->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbMagaz, 4, 2, 1, 1);

        pbC4R = new QPushButton(centralWidget);
        pbC4R->setObjectName(QString::fromUtf8("pbC4R"));
        pbC4R->setEnabled(false);
        pbC4R->setMinimumSize(QSize(140, 0));
        pbC4R->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Link64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbC4R->setIcon(icon4);
        pbC4R->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbC4R, 7, 6, 1, 1);

        pbProgrammazione = new QPushButton(centralWidget);
        pbProgrammazione->setObjectName(QString::fromUtf8("pbProgrammazione"));
        pbProgrammazione->setEnabled(false);
        pbProgrammazione->setMinimumSize(QSize(140, 0));
        pbProgrammazione->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/3D_Icons_Icon_256.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbProgrammazione->setIcon(icon5);
        pbProgrammazione->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbProgrammazione, 3, 7, 1, 1);

        pBNewOperation = new QToolButton(centralWidget);
        pBNewOperation->setObjectName(QString::fromUtf8("pBNewOperation"));
        pBNewOperation->setEnabled(false);
        pBNewOperation->setMinimumSize(QSize(140, 0));
        pBNewOperation->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBNewOperation->setIcon(icon6);
        pBNewOperation->setIconSize(QSize(32, 32));
        pBNewOperation->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pBNewOperation->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(pBNewOperation, 4, 4, 1, 1);

        tbAnag = new QPushButton(centralWidget);
        tbAnag->setObjectName(QString::fromUtf8("tbAnag"));
        tbAnag->setEnabled(false);
        tbAnag->setMinimumSize(QSize(140, 0));
        tbAnag->setMaximumSize(QSize(120, 16777215));
        tbAnag->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/Users64.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbAnag->setIcon(icon7);
        tbAnag->setIconSize(QSize(32, 32));

        gridLayout->addWidget(tbAnag, 3, 1, 1, 1);

        tbLotti = new QToolButton(centralWidget);
        tbLotti->setObjectName(QString::fromUtf8("tbLotti"));
        tbLotti->setEnabled(false);
        tbLotti->setMinimumSize(QSize(140, 0));
        tbLotti->setMaximumSize(QSize(120, 16777215));
        tbLotti->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Resources/Cube.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbLotti->setIcon(icon8);
        tbLotti->setIconSize(QSize(32, 32));
        tbLotti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbLotti->setAutoRaise(false);

        gridLayout->addWidget(tbLotti, 3, 2, 1, 1);

        tbAnalisi = new QToolButton(centralWidget);
        tbAnalisi->setObjectName(QString::fromUtf8("tbAnalisi"));
        tbAnalisi->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tbAnalisi->sizePolicy().hasHeightForWidth());
        tbAnalisi->setSizePolicy(sizePolicy);
        tbAnalisi->setMinimumSize(QSize(140, 0));
        tbAnalisi->setMaximumSize(QSize(120, 16777215));
        tbAnalisi->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Resources/Chart.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbAnalisi->setIcon(icon9);
        tbAnalisi->setIconSize(QSize(32, 32));
        tbAnalisi->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbAnalisi->setAutoRaise(false);

        gridLayout->addWidget(tbAnalisi, 4, 8, 1, 1);

        tbLogout = new QToolButton(centralWidget);
        tbLogout->setObjectName(QString::fromUtf8("tbLogout"));
        tbLogout->setEnabled(false);
        tbLogout->setMinimumSize(QSize(140, 0));
        tbLogout->setMaximumSize(QSize(120, 16777215));
        tbLogout->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Resources/User-red64.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbLogout->setIcon(icon10);
        tbLogout->setIconSize(QSize(32, 32));
        tbLogout->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbLogout, 4, 9, 1, 1);

        tbClose = new QToolButton(centralWidget);
        tbClose->setObjectName(QString::fromUtf8("tbClose"));
        tbClose->setEnabled(true);
        tbClose->setMinimumSize(QSize(140, 0));
        tbClose->setMaximumSize(QSize(120, 16777215));
        tbClose->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbClose->setIcon(icon11);
        tbClose->setIconSize(QSize(32, 32));
        tbClose->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbClose, 9, 9, 1, 1);

        tnProduzione = new QToolButton(centralWidget);
        tnProduzione->setObjectName(QString::fromUtf8("tnProduzione"));
        tnProduzione->setEnabled(false);
        tnProduzione->setMinimumSize(QSize(140, 0));
        tnProduzione->setMaximumSize(QSize(120, 16777215));
        tnProduzione->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Resources/Gears.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tnProduzione->setIcon(icon12);
        tnProduzione->setIconSize(QSize(32, 32));
        tnProduzione->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tnProduzione, 4, 7, 1, 1);

        toolButton = new QPushButton(centralWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMinimumSize(QSize(140, 0));
        toolButton->setMaximumSize(QSize(16777215, 16777215));
        toolButton->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Resources/User-green64.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon13);
        toolButton->setIconSize(QSize(32, 32));
        toolButton->setAutoDefault(true);

        gridLayout->addWidget(toolButton, 4, 0, 1, 1);

        pbExpirations = new QPushButton(centralWidget);
        pbExpirations->setObjectName(QString::fromUtf8("pbExpirations"));
        pbExpirations->setEnabled(false);
        pbExpirations->setMinimumSize(QSize(140, 0));
        pbExpirations->setAutoFillBackground(true);
        pbExpirations->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Resources/Calendar.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbExpirations->setIcon(icon14);
        pbExpirations->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbExpirations, 3, 4, 1, 1);

        pbCalcoloCosti = new QPushButton(centralWidget);
        pbCalcoloCosti->setObjectName(QString::fromUtf8("pbCalcoloCosti"));
        pbCalcoloCosti->setEnabled(false);
        pbCalcoloCosti->setMinimumSize(QSize(130, 0));
        pbCalcoloCosti->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Resources/Cash-register-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCalcoloCosti->setIcon(icon15);
        pbCalcoloCosti->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbCalcoloCosti, 3, 8, 1, 1);

        pbPackages = new QPushButton(centralWidget);
        pbPackages->setObjectName(QString::fromUtf8("pbPackages"));
        pbPackages->setEnabled(false);
        sizePolicy.setHeightForWidth(pbPackages->sizePolicy().hasHeightForWidth());
        pbPackages->setSizePolicy(sizePolicy);
        pbPackages->setMinimumSize(QSize(140, 0));
        pbPackages->setMaximumSize(QSize(125, 16777215));
        pbPackages->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbPackages->setIcon(icon16);
        pbPackages->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbPackages, 5, 7, 1, 1);

        tbRicette = new QToolButton(centralWidget);
        tbRicette->setObjectName(QString::fromUtf8("tbRicette"));
        tbRicette->setEnabled(false);
        tbRicette->setMinimumSize(QSize(140, 0));
        tbRicette->setMaximumSize(QSize(16777215, 16777215));
        tbRicette->setBaseSize(QSize(0, 0));
        tbRicette->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Resources/Notepad.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbRicette->setIcon(icon17);
        tbRicette->setIconSize(QSize(32, 32));
        tbRicette->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbRicette, 4, 6, 1, 1);

        tbModificaLotti = new QToolButton(centralWidget);
        tbModificaLotti->setObjectName(QString::fromUtf8("tbModificaLotti"));
        tbModificaLotti->setEnabled(false);
        tbModificaLotti->setMinimumSize(QSize(140, 0));
        tbModificaLotti->setMaximumSize(QSize(120, 16777215));
        tbModificaLotti->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbModificaLotti->setIcon(icon18);
        tbModificaLotti->setIconSize(QSize(32, 32));
        tbModificaLotti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbModificaLotti, 5, 4, 1, 1);

        pbSchede = new QPushButton(centralWidget);
        pbSchede->setObjectName(QString::fromUtf8("pbSchede"));
        pbSchede->setEnabled(false);
        pbSchede->setMinimumSize(QSize(140, 0));
        pbSchede->setMaximumSize(QSize(16777215, 16777215));
        pbSchede->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Resources/Folder.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbSchede->setIcon(icon19);
        pbSchede->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbSchede, 3, 6, 1, 1);

        tbUtenti = new QPushButton(centralWidget);
        tbUtenti->setObjectName(QString::fromUtf8("tbUtenti"));
        tbUtenti->setEnabled(false);
        tbUtenti->setMinimumSize(QSize(140, 0));
        tbUtenti->setMaximumSize(QSize(120, 16777215));
        tbUtenti->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/Resources/Warning-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbUtenti->setIcon(icon20);
        tbUtenti->setIconSize(QSize(32, 32));

        gridLayout->addWidget(tbUtenti, 4, 1, 1, 1);

        tbAssociazioni = new QToolButton(centralWidget);
        tbAssociazioni->setObjectName(QString::fromUtf8("tbAssociazioni"));
        tbAssociazioni->setEnabled(false);
        tbAssociazioni->setMinimumSize(QSize(140, 0));
        tbAssociazioni->setMaximumSize(QSize(134, 16777215));
        tbAssociazioni->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/Resources/Map.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbAssociazioni->setIcon(icon21);
        tbAssociazioni->setIconSize(QSize(32, 32));
        tbAssociazioni->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbAssociazioni, 5, 6, 1, 1);

        pbUnload = new QPushButton(centralWidget);
        pbUnload->setObjectName(QString::fromUtf8("pbUnload"));
        pbUnload->setEnabled(false);
        pbUnload->setMinimumSize(QSize(140, 0));
        pbUnload->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbUnload->setIcon(icon22);
        pbUnload->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbUnload, 7, 2, 1, 1);

        pbContacts = new QPushButton(centralWidget);
        pbContacts->setObjectName(QString::fromUtf8("pbContacts"));
        pbContacts->setEnabled(false);
        pbContacts->setMinimumSize(QSize(140, 0));
        pbContacts->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/Resources/user-group-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbContacts->setIcon(icon23);
        pbContacts->setIconSize(QSize(32, 32));
        pbContacts->setFlat(false);

        gridLayout->addWidget(pbContacts, 5, 1, 1, 1);

        pbNotifiche = new QPushButton(centralWidget);
        pbNotifiche->setObjectName(QString::fromUtf8("pbNotifiche"));
        pbNotifiche->setEnabled(false);
        pbNotifiche->setMinimumSize(QSize(140, 0));
        pbNotifiche->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/Resources/Chat.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbNotifiche->setIcon(icon24);
        pbNotifiche->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbNotifiche, 7, 1, 1, 1);

        pbCkeckNotifications = new QPushButton(centralWidget);
        pbCkeckNotifications->setObjectName(QString::fromUtf8("pbCkeckNotifications"));
        pbCkeckNotifications->setEnabled(false);
        pbCkeckNotifications->setMinimumSize(QSize(140, 0));
        pbCkeckNotifications->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbCkeckNotifications->setIcon(icon25);
        pbCkeckNotifications->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbCkeckNotifications, 9, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout->addLayout(verticalLayout_4);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QPalette palette1;
        QBrush brush10(QColor(200, 188, 193, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        label_6->setPalette(palette1);

        verticalLayout->addWidget(label_6);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        toolButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hamlet MOD 3.4", nullptr));
        lbUser_label->setText(QCoreApplication::translate("MainWindow", "Utente corrente:", nullptr));
        lbCurrentUser->setText(QString());
        label_4->setText(QString());
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600;\">Hamlet Mod 3.4 </span><span style=\" font-size:10pt; font-weight:600; font-style:italic;\">(64bit)</span></p><p><span style=\" font-size:16pt; font-weight:600;\">Versione: 3.4.3.5.</span><span style=\" font-size:10pt; font-weight:600;\">005</span></p><p><br/></p><p><br/></p><p><span style=\" font-size:10pt; font-weight:600;\">Licenza: LGPL v. 3</span></p><p><span style=\" font-size:10pt; font-weight:600;\">Built with Qt 5.15.2 - MinGW 64</span></p><p><br/></p><p><span style=\" font-size:10pt;\">\302\251 FBLABS 2015-2023</span></p><p><a href=\"https://github.com/fblabs/hamlet-mod-sancon/blob/master/release/hamletMOD.exe\"><span style=\" text-decoration: underline; color:#007af4;\">Sorgenti (github)</span></a></p></body></html>", nullptr));
        tbSettings->setText(QCoreApplication::translate("MainWindow", "Impostazioni   ", nullptr));
        tbProdotti->setText(QCoreApplication::translate("MainWindow", "Prodotti", nullptr));
#if QT_CONFIG(tooltip)
        tbMagaz->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Operazioni legate al Magazzino,movimentazione di carico e scarico, correzione errori,ecc.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tbMagaz->setText(QCoreApplication::translate("MainWindow", "Operazioni (F2)", nullptr));
#if QT_CONFIG(shortcut)
        tbMagaz->setShortcut(QCoreApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        pbC4R->setText(QCoreApplication::translate("MainWindow", "Clienti per ricetta", nullptr));
        pbProgrammazione->setText(QCoreApplication::translate("MainWindow", "Programmazione", nullptr));
        pBNewOperation->setText(QCoreApplication::translate("MainWindow", "Nuova Operazione \n"
"(F6)", nullptr));
#if QT_CONFIG(shortcut)
        pBNewOperation->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        tbAnag->setText(QCoreApplication::translate("MainWindow", "Anagrafica      ", nullptr));
        tbLotti->setText(QCoreApplication::translate("MainWindow", "Lotti (F5)", nullptr));
#if QT_CONFIG(shortcut)
        tbLotti->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        tbAnalisi->setText(QCoreApplication::translate("MainWindow", "Analisi (F8)", nullptr));
#if QT_CONFIG(shortcut)
        tbAnalisi->setShortcut(QCoreApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        tbLogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        tbClose->setText(QCoreApplication::translate("MainWindow", "Chiudi", nullptr));
        tnProduzione->setText(QCoreApplication::translate("MainWindow", "Produzione (F4)", nullptr));
#if QT_CONFIG(shortcut)
        tnProduzione->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        toolButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pbExpirations->setText(QCoreApplication::translate("MainWindow", "Scadenze", nullptr));
        pbCalcoloCosti->setText(QCoreApplication::translate("MainWindow", "Calcolo costi (F10)", nullptr));
#if QT_CONFIG(shortcut)
        pbCalcoloCosti->setShortcut(QCoreApplication::translate("MainWindow", "F10", nullptr));
#endif // QT_CONFIG(shortcut)
        pbPackages->setText(QCoreApplication::translate("MainWindow", "Packages (F9)", nullptr));
#if QT_CONFIG(shortcut)
        pbPackages->setShortcut(QCoreApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        tbRicette->setText(QCoreApplication::translate("MainWindow", "Ricette (F7)", nullptr));
#if QT_CONFIG(shortcut)
        tbRicette->setShortcut(QCoreApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        tbModificaLotti->setText(QCoreApplication::translate("MainWindow", "Modifica lotti", nullptr));
        pbSchede->setText(QCoreApplication::translate("MainWindow", "Schede Clienti (F3)", nullptr));
#if QT_CONFIG(shortcut)
        pbSchede->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        tbUtenti->setText(QCoreApplication::translate("MainWindow", "Utenti", nullptr));
        tbAssociazioni->setText(QCoreApplication::translate("MainWindow", "Associa Ricette", nullptr));
        pbUnload->setText(QCoreApplication::translate("MainWindow", "Scarico Packages", nullptr));
        pbContacts->setText(QCoreApplication::translate("MainWindow", "Contatti", nullptr));
        pbNotifiche->setText(QCoreApplication::translate("MainWindow", "Notifiche", nullptr));
        pbCkeckNotifications->setText(QCoreApplication::translate("MainWindow", "Verifica notifiche", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
