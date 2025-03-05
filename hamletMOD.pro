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
    hblend.cpp \
    hblenddetail.cpp \
    hcalcolo_costi_item.cpp \
    hcalcolo_costi_item_model.cpp \
    hcalcolo_costi_item_set.cpp \
    hchoose_lot_to_add.cpp \
    hchooselot.cpp \
    hcomponenti_costo_item.cpp \
    hcomponenti_model.cpp \
    hcontainer_cartoni.cpp \
    hcontainer_generic.cpp \
    hcontainer_generic_product.cpp \
    hcosti.cpp \
    hcosti_model.cpp \
    hcreategroup.cpp \
    hfrullatori.cpp \
    hgroups.cpp \
    hloads.cpp \
    hloadsreport.cpp \
    hlotcomposition.cpp \
    hlotti_new.cpp \
    hmodprodotti.cpp \
    hnew_recipe_main.cpp \
    hpdfprint.cpp \
    hpreferred_lots.cpp \
    hproducts_for_calcolo_costi.cpp \
    hprogdlg.cpp \
    hprogramstableview.cpp \
    hprogtable.cpp \
    hquerymodel_lastlots.cpp \
    hquerymodel_lotti.cpp \
    hrecipesforingredient.cpp \
    hrecipesoverview.cpp \
    hworker.cpp \
    hworkprogram.cpp \
    hworkprogramdetailmodel.cpp \
    hworksheetmodel.cpp \
    hwpmod.cpp \
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
    hnewsheet.cpp

HEADERS  += mainwindow.h \
    hbiodetails.h \
    hblend.h \
    hblenddetail.h \
    hcalcolo_costi_item.h \
    hcalcolo_costi_item_model.h \
    hcalcolo_costi_item_set.h \
    hchoose_lot_to_add.h \
    hchooselot.h \
    hcomponenti_costo_item.h \
    hcomponenti_model.h \
    hcontainer_cartoni.h \
    hcontainer_generic.h \
    hcontainer_generic_product.h \
    hcosti.h \
    hcosti_model.h \
    hcreategroup.h \
    hfrullatori.h \
    hgroups.h \
    hloads.h \
    hloadsreport.h \
    hlotcomposition.h \
    hlotti_new.h \
    hmodprodotti.h \
    hnew_recipe_main.h \
    hpdfprint.h \
    hpreferred_lots.h \
    hproducts_for_calcolo_costi.h \
    hprogdlg.h \
    hprogramstableview.h \
    hprogtable.h \
    hquerymodel_lastlots.h \
    hquerymodel_lotti.h \
    hrecipesforingredient.h \
    hrecipesoverview.h \
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
    hworker.h \
    hworkprogram.h \
    hworkprogramdetailmodel.h \
    hworksheetmodel.h \
    hwpmod.h \
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
    hnewsheet.h




FORMS    += mainwindow.ui \
    hblenddetail.ui \
    hcalcolo_costi_item.ui \
    hcalcolo_costi_item_set.ui \
    hcomponenti_costo_item.ui \
    hcontainer_cartoni.ui \
    hbiodetails.ui \
    hcartoni.ui \
    hchoose_lot_to_add.ui \
    hchooselot.ui \
    hcontainer_generic.ui \
    hcontainer_generic_product.ui \
    hcosti.ui \
    hcreategroup.ui \
    hfrullatori.ui \
    hgroups.ui \
    hloads.ui \
    hloadsreport.ui \
    hlotcomposition.ui \
    hlotti_new.ui \
    hnew_recipe_main.ui \
    hpdfprint.ui \
    hpreferred_lots.ui \
    hproducts_for_calcolo_costi.ui \
    hprogdlg.ui \
    hprogtable.ui \
    hrecipesforingredient.ui \
    hrecipesoverview.ui \
    hutenti.ui \
    hsettings.ui \
    hprint.ui \
    hnewproduct.ui \
    hworkprogram.ui \
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
    hnewsheet.ui




RESOURCES += \
    icons.qrc
    RC_ICONS +=hamlet.ico

DISTFILES +=









