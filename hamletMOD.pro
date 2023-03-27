#-------------------------------------------------
#
# Project created by QtCreator 2014-03-10T09:27:40
#
#-------------------------------------------------

QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = hamletMOD
TEMPLATE = app
CONFIG(release,debug|release)


SOURCES += main.cpp\
    hbiodetails.cpp \
    hcalcolo_costi.cpp \
    hcalcolo_costi_item.cpp \
    hcalcolo_costi_jolly.cpp \
    hchoose_lot_to_add.cpp \
    hchooselot.cpp \
    hcomponenti_costo_item.cpp \
    hcontainer_cartoni.cpp \
    hcontainer_generic.cpp \
    hcontainer_generic_product.cpp \
    hcreategroup.cpp \
    hgroups.cpp \
    hloads.cpp \
    hlotcomposition.cpp \
    hlotti_new.cpp \
    hpdfprint.cpp \
    hproducts_for_calcolo_costi.cpp \
    hrecipesforingredient.cpp \
    hworksheetmodel.cpp \
    mainwindow.cpp \
    huser.cpp \
    hutenti.cpp \
    hnewop.cpp \
    hsettings.cpp \
    hreadonlymodel.cpp \
    hprint.cpp \
    hanalisi.cpp \
    hnewproduct.cpp \
    hlogin2.cpp \
    hreadonlymodellots.cpp \
    hnuovaoperazione.cpp \
    hoverview.cpp \
    hgestioneutenti.cpp \
    hnewuser.cpp \
    hnewanagrafica.cpp \
    hschedeclienti.cpp \
    hassociazioni.cpp \
    hmodificascheda.cpp \
    hproduction.cpp \
    hprodottinew.cpp \
    hwarehouse.cpp \
    hmodifyprod.cpp \
    hpackages.cpp \
    hmodricette.cpp \
    hrecipeaddrow.cpp \
    hlotti.cpp \
    htextedit.cpp \
    hreadonlymodelnew.cpp \
    hduplicate.cpp \
    hmodifylot.cpp \
    hpackagesunload.cpp \
    hcontacts.cpp \
    hnewcontact.cpp \
    halarm.cpp \
    hnotifica.cpp \
    hverifylabels.cpp \
    hclientiassociati.cpp \
    hschede.cpp \
    hnschede.cpp \
    hmodimage.cpp \
    hcopycard.cpp \
    hcomposizionelotto.cpp \
    hgraphicprint.cpp \
    nouse.cpp \
    haddlotinproduction.cpp \
    hdatatopass.cpp \
    hlastlots.cpp \
    hexpirations.cpp \
    hcalcost.cpp \
    hwarehousedetails.cpp \
    hrecipesforclient.cpp \
    hlotmovements.cpp \
    hmagazzino.cpp \
    hproductsmodel.cpp \
    hmodproduct.cpp \
    hwpmanager.cpp \
    hworkprogressmodel.cpp \
    hmodifyrow.cpp \
    hlotmod.cpp \
    hnewsheet.cpp \
    hworkprogram.cpp

HEADERS  += mainwindow.h \
    hbiodetails.h \
    hcalcolo_costi.h \
    hcalcolo_costi_item.h \
    hcalcolo_costi_jolly.h \
    hchoose_lot_to_add.h \
    hchooselot.h \
    hcomponenti_costo_item.h \
    hcontainer_cartoni.h \
    hcontainer_generic.h \
    hcontainer_generic_product.h \
    hcreategroup.h \
    hgroups.h \
    hloads.h \
    hlotcomposition.h \
    hlotti_new.h \
    hpdfprint.h \
    hproducts_for_calcolo_costi.h \
    hrecipesforingredient.h \
    huser.h \
    hutenti.h \
    hnewop.h \
    hsettings.h \
    hreadonlymodel.h \
    hprint.h \
    hanalisi.h \
    hnewproduct.h \
    hlogin2.h \
    hreadonlymodellots.h \
    hnuovaoperazione.h \
    hoverview.h \
    hgestioneutenti.h \
    hnewuser.h \
    hnewanagrafica.h \
    hschedeclienti.h \
    hassociazioni.h \
    hmodificascheda.h \
    hproduction.h \
    hprodottinew.h \
    hwarehouse.h \
    hmodifyprod.h \
    hpackages.h \
    hmodricette.h \
    hrecipeaddrow.h \
    hlotti.h \
    htextedit.h \
    hreadonlymodelnew.h \
    hduplicate.h \
    hmodifylot.h \
    hpackagesunload.h \
    hcontacts.h \
    hnewcontact.h \
    halarm.h \
    hnotifica.h \
    hverifylabels.h \
    hclientiassociati.h \
    hschede.h \
    hnschede.h \
    hmodimage.h \
    hcopycard.h \
    hcomposizionelotto.h \
    hgraphicprint.h \
    hworksheetmodel.h \
    nouse.h \
    haddlotinproduction.h \
    hdatatopass.h \
    hlastlots.h \
    hexpirations.h \
    hcalcost.h \
    hwarehousedetails.h \
    hrecipesforclient.h \
    hlotmovements.h \
    hmagazzino.h \
    hproductsmodel.h \
    hmodproduct.h \
    hwpmanager.h \
    hworkprogressmodel.h \
    hmodifyrow.h \
    hlotmod.h \
    hnewsheet.h \
    hworkprogram.h



FORMS    += mainwindow.ui \
    hcalcolo_costi_item.ui \
    hcalcolo_costi_jolly.ui \
    hcomponenti_costo_item.ui \
    hcontainer_cartoni.ui \
    hbiodetails.ui \
    hcalcolo_costi.ui \
    hcartoni.ui \
    hchoose_lot_to_add.ui \
    hchooselot.ui \
    hcontainer_generic.ui \
    hcontainer_generic_product.ui \
    hcreategroup.ui \
    hgroups.ui \
    hloads.ui \
    hlotcomposition.ui \
    hlotti_new.ui \
    hpdfprint.ui \
    hproducts_for_calcolo_costi.ui \
    hrecipesforingredient.ui \
    hutenti.ui \
    hsettings.ui \
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
    hprodottinew.ui \
    hwarehouse.ui \
    hmodifyprod.ui \
    hanalisi.ui \
    hpackages.ui \
    hmodricette.ui \
    hrecipeaddrow.ui \
    hduplicate.ui \
    hmodifylot.ui \
    hlotti.ui \
    hpackagesunload.ui \
    hcontacts.ui \
    hnewcontact.ui \
    halarm.ui \
    hnotifica.ui \
    hverifylabels.ui \
    hclientiassociati.ui \
    hschede.ui \
    hnschede.ui \
    hmodimage.ui \
    hcopycard.ui \
    hcomposizionelotto.ui \
    hgraphicprint.ui \
    nouse.ui \
    haddlotinproduction.ui \
    hlastlots.ui \
    hexpirations.ui \
    hcalcost.ui \
    hwarehousedetails.ui \
    hrecipesforclient.ui \
    hlotmovements.ui \
    hmagazzino.ui \
    hmodproduct.ui \
    hwpmanager.ui \
    hmodifyrow.ui \
    hlotmod.ui \
    hnewsheet.ui \
    hworkprogram.ui




RESOURCES += \
    icons.qrc
    RC_ICONS +=hamlet.ico

DISTFILES +=









