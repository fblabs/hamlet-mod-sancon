#-------------------------------------------------
#
# Project created by QtCreator 2014-03-10T09:27:40
#
#-------------------------------------------------

QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hamletMOD
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    huser.cpp \
    hprodotti.cpp \
    hutenti.cpp \
    hmagazzino.cpp \
    hnewop.cpp \
    hsettings.cpp \
    hreadonlymodel.cpp \
    hrecipes.cpp \
    hprint.cpp \
    hanalisi.cpp \
    hnewproduct.cpp \
    hlogin2.cpp \
    hlotti.cpp \
    hreadonlymodellots.cpp \
    hanalyze_a.cpp \
    hnuovaoperazione.cpp \
    hoverview.cpp \
    hgestioneutenti.cpp \
    hnewuser.cpp \
    hnewanagrafica.cpp \
    hschedeclienti.cpp \
    hassociazioni.cpp \
    hmodificascheda.cpp \
    hproduction.cpp \
    hfindlotuse.cpp \
    hnuovaricetta.cpp \
    hprodottinew.cpp \
    hwarehouse.cpp \
    hmodifyprod.cpp \
    hpackages.cpp \
    hmodricette.cpp \
    hmodifylot.cpp \
    hduplicate.cpp \
    hreadonlymodelnew.cpp \
    hrecipeaddrow.cpp

HEADERS  += mainwindow.h \
    huser.h \
    hprodotti.h \
    hutenti.h \
    hmagazzino.h \
    hlotti.h \
    hnewop.h \
    hsettings.h \
    hreadonlymodel.h \
    hrecipes.h \
    hprint.h \
    hanalisi.h \
    hnewproduct.h \
    hlogin2.h \
    hreadonlymodellots.h \
    hanalyze_a.h \
    hnuovaoperazione.h \
    hoverview.h \
    hgestioneutenti.h \
    hnewuser.h \
    hnewanagrafica.h \
    hschedeclienti.h \
    hassociazioni.h \
    hmodificascheda.h \
    hproduction.h \
    hfindlotuse.h \
    hnuovaricetta.h \
    hprodottinew.h \
    hwarehouse.h \
    hmodifyprod.h \
    hpackages.h \
    hmodricette.h \
    hmodifylot.h \
    hduplicate.h \
    hreadonlymodelnew.h \
    hrecipeaddrow.h

FORMS    += mainwindow.ui \
    hprodotti.ui \
    hutenti.ui \
    hmagazzino.ui \
    hnewop.ui \
    hsettings.ui \
    hrecipes.ui \
    hprint.ui \
    hnewproduct.ui \
    lognew.ui \
    hclientfiles.ui \
    hlogin2.ui \
    hnewfile.ui \
    hnuovaoperazione.ui \
    hoverview.ui \
    hgestioneutenti.ui \
    hnewuser.ui \
    hnewanagrafica.ui \
    hschedeclienti.ui \
    hassociazioni.ui \
    hmodificascheda.ui \
    hproduction.ui \
    hfindlotuse.ui \
    hnuovaricetta.ui \
    hprodottinew.ui \
    hwarehouse.ui \
    hmodifyprod.ui \
    hanalisi.ui \
    hpackages.ui \
    hmodricette.ui \
    hlotti.ui \
    hmodifylot.ui \
    hduplicate.ui \
    hrecipeaddrow.ui

RESOURCES = \
    resources.qrc

win32:RC_ICONS += hamlet.ico




