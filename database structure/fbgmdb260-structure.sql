-- MySQL dump 10.13  Distrib 8.0.29, for Win64 (x86_64)
--
-- Host: 192.168.1.3    Database: fbgmdb260
-- ------------------------------------------------------
-- Server version	8.0.33

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `anagrafica`
--

DROP TABLE IF EXISTS `anagrafica`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `anagrafica` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `ragione_sociale` varchar(100) CHARACTER SET latin1 COLLATE latin1_swedish_ci NOT NULL DEFAULT '',
  `indirizzo` varchar(100) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `citta` varchar(80) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `cap` varchar(50) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `provinciaZAP` varchar(25) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `nazione` varchar(80) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT '',
  `tel` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `contatto` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `cliente` tinyint(1) NOT NULL DEFAULT '0',
  `fornitore` tinyint(1) NOT NULL DEFAULT '0',
  `trasportatore` tinyint(1) NOT NULL DEFAULT '0',
  `note` longtext CHARACTER SET latin1 COLLATE latin1_swedish_ci,
  `subcliente` tinyint unsigned NOT NULL DEFAULT '0',
  `IDCliente` int DEFAULT NULL,
  `visibile` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci NOT NULL DEFAULT '1',
  `stampatore` tinyint unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`ID`),
  UNIQUE KEY `Index_2` (`ragione_sociale`)
) ENGINE=InnoDB AUTO_INCREMENT=850 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `associazioni`
--

DROP TABLE IF EXISTS `associazioni`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `associazioni` (
  `ID_ricetta` int unsigned NOT NULL DEFAULT '0',
  `ID_cliente` int unsigned NOT NULL DEFAULT '0',
  `visualizza` tinyint(1) NOT NULL DEFAULT '1',
  PRIMARY KEY (`ID_ricetta`,`ID_cliente`),
  KEY `FK_associazioni_1` (`ID_cliente`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `azioni`
--

DROP TABLE IF EXISTS `azioni`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `azioni` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(50) CHARACTER SET latin1 COLLATE latin1_swedish_ci NOT NULL DEFAULT '',
  PRIMARY KEY (`ID`),
  UNIQUE KEY `Index_2` (`descrizione`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `bio_data`
--

DROP TABLE IF EXISTS `bio_data`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `bio_data` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `ID_lotto` int unsigned NOT NULL,
  `data` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `data_inizio` datetime DEFAULT NULL,
  `data_fine` datetime DEFAULT NULL,
  `ph` varchar(10) DEFAULT NULL,
  `aw` varchar(10) DEFAULT NULL,
  `nacl` varchar(10) DEFAULT NULL,
  `carica_batterica` varchar(10) DEFAULT NULL,
  `lieviti` varchar(10) DEFAULT NULL,
  `muffe` varchar(45) DEFAULT NULL,
  `batteri_lattici` varchar(10) DEFAULT NULL,
  `coliformi_totali` varchar(10) DEFAULT NULL,
  `bacillo_cereus` varchar(10) DEFAULT NULL,
  `note` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`ID`),
  UNIQUE KEY `ID_lotto_UNIQUE` (`ID_lotto`),
  KEY `ID_lotto_idx` (`ID_lotto`),
  CONSTRAINT `ID_lotto` FOREIGN KEY (`ID_lotto`) REFERENCES `lotdef` (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `composizione_lot`
--

DROP TABLE IF EXISTS `composizione_lot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `composizione_lot` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `ID_lotto` int unsigned DEFAULT NULL,
  `operazione` int unsigned NOT NULL DEFAULT '0',
  `lot` char(25) CHARACTER SET latin1 COLLATE latin1_swedish_ci NOT NULL DEFAULT '',
  PRIMARY KEY (`ID`),
  KEY `fk_composizione_lot_1_idx` (`ID_lotto`),
  KEY `fk_composizione_lot_2_idx` (`operazione`),
  CONSTRAINT `fk_composizione_lot_1` FOREIGN KEY (`ID_lotto`) REFERENCES `lotdef` (`ID`),
  CONSTRAINT `fk_composizione_lot_2` FOREIGN KEY (`operazione`) REFERENCES `operazioni` (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=614898 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `contatti`
--

DROP TABLE IF EXISTS `contatti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `contatti` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `nome` varchar(100) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `recapito` varchar(150) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `area` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `tipo` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `fiera` varchar(50) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `referente` varchar(100) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `etichetta` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `import` tinyint unsigned DEFAULT NULL,
  `interesse` varchar(250) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `assaggi` varchar(250) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `foto` tinyint unsigned DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=59 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `gruppi`
--

DROP TABLE IF EXISTS `gruppi`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `gruppi` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(50) CHARACTER SET latin1 COLLATE latin1_swedish_ci NOT NULL DEFAULT '',
  `canupdate` tinyint unsigned DEFAULT '0',
  `canupdateana` tinyint unsigned DEFAULT '0',
  `utenti_v` tinyint unsigned DEFAULT '1',
  `utenti_u` tinyint unsigned DEFAULT '0',
  `anagrafica_v` tinyint unsigned DEFAULT '1',
  `anagrafica_u` tinyint unsigned DEFAULT '0',
  `notifiche_v` tinyint unsigned DEFAULT '1',
  `notifiche_u` tinyint unsigned DEFAULT '0',
  `contatti_v` tinyint unsigned DEFAULT '1',
  `contatti_u` tinyint unsigned DEFAULT '0',
  `lotti_v` tinyint unsigned DEFAULT '1',
  `lotti_u` tinyint unsigned DEFAULT '0',
  `operazioni_v` tinyint unsigned DEFAULT '1',
  `operazioni_u` tinyint unsigned DEFAULT '0',
  `prodotti_v` tinyint unsigned DEFAULT '1',
  `prodotti_u` tinyint unsigned DEFAULT '0',
  `schede_v` tinyint unsigned DEFAULT '1',
  `schede_u` tinyint unsigned DEFAULT '0',
  `ricette_v` tinyint unsigned DEFAULT '1',
  `ricette_u` tinyint unsigned DEFAULT '0',
  `programmi_v` tinyint unsigned DEFAULT '1',
  `programmi_u` tinyint unsigned DEFAULT '0',
  `produzione_v` tinyint unsigned DEFAULT '1',
  `produzione_u` tinyint unsigned DEFAULT '0',
  `packages_v` tinyint unsigned DEFAULT '1',
  `packages_u` tinyint unsigned DEFAULT '0',
  `costi_v` tinyint unsigned DEFAULT '1',
  `costi_u` tinyint unsigned DEFAULT '0',
  `analisi_v` tinyint unsigned DEFAULT '1',
  `analisi_u` tinyint unsigned DEFAULT '0',
  `note` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=16 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `gruppi_OLD`
--

DROP TABLE IF EXISTS `gruppi_OLD`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `gruppi_OLD` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(50) CHARACTER SET latin1 COLLATE latin1_swedish_ci NOT NULL DEFAULT '',
  `canupdate` tinyint unsigned DEFAULT '0',
  `canupdateana` tinyint unsigned DEFAULT '0',
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `lotdef`
--

DROP TABLE IF EXISTS `lotdef`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `lotdef` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `lot` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `prodotto` int unsigned NOT NULL DEFAULT '0',
  `data` datetime DEFAULT NULL,
  `giacenza` decimal(10,4) DEFAULT NULL,
  `um` int unsigned DEFAULT NULL,
  `scadenza` datetime DEFAULT NULL,
  `anagrafica` int unsigned DEFAULT NULL,
  `lot_fornitore` char(80) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `EAN` char(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `tipo` int unsigned NOT NULL DEFAULT '0',
  `attivo` tinyint unsigned DEFAULT '1',
  `note` text CHARACTER SET latin1 COLLATE latin1_swedish_ci,
  `operatore` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  PRIMARY KEY (`ID`),
  UNIQUE KEY `Index_3` (`lot`),
  KEY `fk_lotdef_1_idx` (`prodotto`),
  KEY `fk_lotdef_2_idx` (`um`),
  KEY `fk_lotdef_3_idx` (`anagrafica`),
  KEY `fk_lotdef_4_idx` (`tipo`),
  KEY `index4` (`data`),
  CONSTRAINT `fk_lotdef_1` FOREIGN KEY (`prodotto`) REFERENCES `prodotti` (`ID`),
  CONSTRAINT `fk_lotdef_2` FOREIGN KEY (`um`) REFERENCES `unita_di_misura` (`ID`),
  CONSTRAINT `fk_lotdef_3` FOREIGN KEY (`anagrafica`) REFERENCES `lotdef` (`ID`),
  CONSTRAINT `fk_lotdef_4` FOREIGN KEY (`tipo`) REFERENCES `tipi_lot` (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=108893 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci ROW_FORMAT=DYNAMIC;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `notifiche`
--

DROP TABLE IF EXISTS `notifiche`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `notifiche` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `data` datetime DEFAULT NULL,
  `tipo` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `IDUtente` varchar(50) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `IDGruppo` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `descrizione` varchar(250) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `usaidgruppo` tinyint unsigned DEFAULT NULL,
  `attiva` tinyint unsigned DEFAULT NULL,
  `creatore` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=36 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `operazioni`
--

DROP TABLE IF EXISTS `operazioni`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `operazioni` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `IDlotto` int unsigned DEFAULT NULL,
  `data` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `utente` int unsigned NOT NULL DEFAULT '0',
  `IDprodotto` int unsigned DEFAULT NULL,
  `azione` int unsigned NOT NULL DEFAULT '0',
  `quantita` double NOT NULL DEFAULT '0',
  `um` int unsigned NOT NULL DEFAULT '0' COMMENT '0: Kg 1: pz',
  `note` longtext CHARACTER SET latin1 COLLATE latin1_swedish_ci,
  PRIMARY KEY (`ID`),
  KEY `fk_operazioni_1_idx` (`azione`),
  KEY `fk_operazioni_2_idx` (`IDlotto`),
  KEY `fk_operazioni_3_idx` (`utente`),
  KEY `fk_operazioni_4_idx` (`IDprodotto`),
  KEY `fk_operazioni_5_idx` (`um`),
  CONSTRAINT `fk_operazioni_1` FOREIGN KEY (`azione`) REFERENCES `azioni` (`ID`),
  CONSTRAINT `fk_operazioni_2` FOREIGN KEY (`IDlotto`) REFERENCES `lotdef` (`ID`),
  CONSTRAINT `fk_operazioni_3` FOREIGN KEY (`utente`) REFERENCES `utenti` (`ID`),
  CONSTRAINT `fk_operazioni_4` FOREIGN KEY (`IDprodotto`) REFERENCES `prodotti` (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=830425 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci COMMENT='InnoDB free: 3072 kB; (`ID_ricetta`) REFER `fbgmdb/ricette`(';
/*!40101 SET character_set_client = @saved_cs_client */;
ALTER DATABASE `fbgmdb260` CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`hamlet`@`192.168.1.%`*/ /*!50003 TRIGGER `operazioni_AINS` AFTER INSERT ON `operazioni` FOR EACH ROW begin
call trigger_proc(new.IDlotto);
end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `fbgmdb260` CHARACTER SET utf8mb3 COLLATE utf8_bin ;
ALTER DATABASE `fbgmdb260` CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`hamlet`@`192.168.1.%`*/ /*!50003 TRIGGER `operazioni_AFTER_UPDATE` AFTER UPDATE ON `operazioni` FOR EACH ROW BEGIN
call trigger_proc(new.IDlotto);
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `fbgmdb260` CHARACTER SET utf8mb3 COLLATE utf8_bin ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`hamlet`@`192.168.1.%`*/ /*!50003 TRIGGER `operazioni_AFTER_DELETE` AFTER DELETE ON `operazioni` FOR EACH ROW BEGIN
 call trigger_proc(old.IDlotto);
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `prodotti`
--

DROP TABLE IF EXISTS `prodotti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `prodotti` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(100) CHARACTER SET latin1 COLLATE latin1_swedish_ci NOT NULL DEFAULT '',
  `tipo` int unsigned NOT NULL DEFAULT '0',
  `allergenico` tinyint unsigned NOT NULL DEFAULT '0',
  `attivo` tinyint unsigned NOT NULL DEFAULT '1',
  `bio` tinyint unsigned DEFAULT '0',
  `prezzo` double unsigned DEFAULT '0',
  `data_aggiornamento` date DEFAULT (curdate()),
  PRIMARY KEY (`ID`),
  UNIQUE KEY `IDX_DESC` (`descrizione`),
  KEY `fk_prodotti_1_idx` (`tipo`)
) ENGINE=InnoDB AUTO_INCREMENT=1470 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `produzione`
--

DROP TABLE IF EXISTS `produzione`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `produzione` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `dal` date DEFAULT NULL,
  `al` date DEFAULT NULL,
  `linea` varchar(10) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `note` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `approvato` tinyint unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=997 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `ricette`
--

DROP TABLE IF EXISTS `ricette`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `ricette` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `ID_prodotto` int unsigned NOT NULL DEFAULT '0',
  `note` longtext CHARACTER SET latin1 COLLATE latin1_swedish_ci NOT NULL,
  PRIMARY KEY (`ID`),
  KEY `fk_ricette_1_idx` (`ID_prodotto`),
  CONSTRAINT `fk_ricette_1` FOREIGN KEY (`ID_prodotto`) REFERENCES `prodotti` (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=962 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `righe_produzione`
--

DROP TABLE IF EXISTS `righe_produzione`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `righe_produzione` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `IDProduzione` int unsigned DEFAULT NULL,
  `num_riga` int unsigned DEFAULT NULL,
  `quantita` double DEFAULT NULL,
  `vaso_gr` double DEFAULT NULL,
  `specificaolio` varchar(6) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `idprodotto` int unsigned DEFAULT NULL,
  `olio` varchar(15) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `tappo` varchar(10) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `idcliente` int unsigned DEFAULT NULL,
  `totale` double DEFAULT '0',
  `sanificazione` varchar(10) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `numero_ordine` varchar(20) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `fresco` tinyint unsigned DEFAULT '0',
  `pastorizzato` tinyint unsigned DEFAULT '0',
  `allergeni` varchar(10) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `note` text CHARACTER SET latin1 COLLATE latin1_swedish_ci,
  `lotto_scadenza` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  PRIMARY KEY (`ID`),
  KEY `fk_righe_produzione_1_idx` (`IDProduzione`),
  KEY `fk_righe_produzione_2_idx` (`idcliente`),
  KEY `fk_righe_produzione_3_idx` (`idprodotto`),
  CONSTRAINT `fk_righe_produzione_1` FOREIGN KEY (`IDProduzione`) REFERENCES `produzione` (`ID`),
  CONSTRAINT `fk_righe_produzione_2` FOREIGN KEY (`idcliente`) REFERENCES `anagrafica` (`ID`),
  CONSTRAINT `fk_righe_produzione_3` FOREIGN KEY (`idprodotto`) REFERENCES `prodotti` (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=8849 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `righe_ricette`
--

DROP TABLE IF EXISTS `righe_ricette`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `righe_ricette` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `ID_ricetta` int unsigned NOT NULL DEFAULT '0',
  `ID_prodotto` int unsigned NOT NULL DEFAULT '0',
  `quantita` double NOT NULL DEFAULT '0',
  `show_prod` tinyint unsigned DEFAULT '1',
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=32736 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `schede`
--

DROP TABLE IF EXISTS `schede`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `schede` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `prodotto` int unsigned NOT NULL DEFAULT '0',
  `cliente` int unsigned NOT NULL DEFAULT '0',
  `olio` text CHARACTER SET latin1 COLLATE latin1_swedish_ci,
  `vaso` text CHARACTER SET latin1 COLLATE latin1_swedish_ci,
  `tappo` text CHARACTER SET latin1 COLLATE latin1_swedish_ci,
  `etichette` text CHARACTER SET latin1 COLLATE latin1_swedish_ci,
  `scatole` text CHARACTER SET latin1 COLLATE latin1_swedish_ci,
  `note` text CHARACTER SET latin1 COLLATE latin1_swedish_ci,
  `immagine` mediumblob,
  `imgx` int unsigned DEFAULT '200',
  `imgy` int unsigned DEFAULT '200',
  `fontsize` int unsigned DEFAULT '10',
  `imgcartone` mediumblob,
  `imgcw` int unsigned DEFAULT '200',
  `imgch` int unsigned DEFAULT '200',
  PRIMARY KEY (`ID`),
  KEY `fk_schede_1_idx` (`prodotto`),
  KEY `fk_schede_2_idx` (`cliente`),
  CONSTRAINT `fk_schede_1` FOREIGN KEY (`prodotto`) REFERENCES `prodotti` (`ID`),
  CONSTRAINT `fk_schede_2` FOREIGN KEY (`cliente`) REFERENCES `anagrafica` (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=2672 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci COMMENT='InnoDB free: 5120 kB; (`cliente`) REFER `fbgmdb2/anagrafica`';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `schede_n`
--

DROP TABLE IF EXISTS `schede_n`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `schede_n` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `prodotto` int unsigned DEFAULT NULL,
  `cliente` int unsigned DEFAULT NULL,
  `scheda` text CHARACTER SET latin1 COLLATE latin1_swedish_ci,
  PRIMARY KEY (`ID`),
  KEY `fk_schede_n_1_idx` (`prodotto`),
  KEY `fk_schede_n_2_idx` (`cliente`),
  CONSTRAINT `fk_schede_n_1` FOREIGN KEY (`prodotto`) REFERENCES `prodotti` (`ID`),
  CONSTRAINT `fk_schede_n_2` FOREIGN KEY (`cliente`) REFERENCES `anagrafica` (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=6559 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `tags`
--

DROP TABLE IF EXISTS `tags`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tags` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `barcode` varchar(13) NOT NULL,
  `IDCliente` int unsigned DEFAULT NULL,
  `IDProdotto` int unsigned DEFAULT NULL,
  `IDTIpo` int unsigned NOT NULL DEFAULT '1',
  `specifica` varchar(10) DEFAULT NULL,
  `immagine` varchar(1000) DEFAULT NULL,
  `giacenza` int NOT NULL DEFAULT '0',
  `note` varchar(250) NOT NULL,
  `stato` tinyint(1) DEFAULT '1',
  PRIMARY KEY (`ID`),
  KEY `fk_tags_1_idx` (`IDCliente`),
  KEY `fk_tags_2_idx` (`IDTIpo`),
  KEY `fk_tags_prodotti_ID` (`IDProdotto`),
  CONSTRAINT `fk_tags_1` FOREIGN KEY (`IDCliente`) REFERENCES `anagrafica` (`ID`),
  CONSTRAINT `fk_tags_2` FOREIGN KEY (`IDTIpo`) REFERENCES `tags_tipi` (`ID`),
  CONSTRAINT `fk_tags_prodotti_ID` FOREIGN KEY (`IDProdotto`) REFERENCES `prodotti` (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=805 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `tags_containers`
--

DROP TABLE IF EXISTS `tags_containers`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tags_containers` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `ID_Prodotto` int unsigned NOT NULL,
  `giacenza` int NOT NULL DEFAULT '0',
  `note` varchar(45) NOT NULL DEFAULT ' ',
  PRIMARY KEY (`ID`),
  UNIQUE KEY `ID_Prodotto_UNIQUE` (`ID_Prodotto`),
  KEY `fk_prodotti_idx` (`ID_Prodotto`)
) ENGINE=InnoDB AUTO_INCREMENT=301 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `tags_containers_mov`
--

DROP TABLE IF EXISTS `tags_containers_mov`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tags_containers_mov` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `ID_tags_container` int unsigned DEFAULT NULL,
  `ID_supplier` int unsigned DEFAULT NULL,
  `bolla` varchar(45) DEFAULT NULL,
  `data` datetime DEFAULT CURRENT_TIMESTAMP,
  `azione` int unsigned DEFAULT NULL,
  `amount` int unsigned DEFAULT '0',
  `note` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`ID`),
  KEY `fk_azioni_idx` (`azione`),
  KEY `fk_anagrafica_idx` (`ID_supplier`),
  KEY `fk_tags_container_idx` (`ID_tags_container`),
  CONSTRAINT `fk_anagrafica` FOREIGN KEY (`ID_supplier`) REFERENCES `anagrafica` (`ID`),
  CONSTRAINT `fk_azioni` FOREIGN KEY (`azione`) REFERENCES `azioni` (`ID`),
  CONSTRAINT `fk_tags_container` FOREIGN KEY (`ID_tags_container`) REFERENCES `tags_containers` (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=269 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`hamlet`@`192.168.1.%`*/ /*!50003 TRIGGER `tags_containers_mov_AFTER_INSERT` AFTER INSERT ON `tags_containers_mov` FOR EACH ROW BEGIN
     CALL `update_tag_containers_giacenza`(new.`ID_tags_container`);
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`hamlet`@`192.168.1.%`*/ /*!50003 TRIGGER `tags_containers_mov_AFTER_UPDATE` AFTER UPDATE ON `tags_containers_mov` FOR EACH ROW BEGIN
 CALL `update_tag_containers_giacenza`(new.`ID_tags_container`);
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`hamlet`@`192.168.1.%`*/ /*!50003 TRIGGER `tags_containers_mov_AFTER_DELETE` AFTER DELETE ON `tags_containers_mov` FOR EACH ROW BEGIN
	 CALL `update_tag_containers_giacenza`(old.`ID_tags_container`);
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `tags_mov`
--

DROP TABLE IF EXISTS `tags_mov`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tags_mov` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `ID_tags` int unsigned DEFAULT NULL,
  `data` date DEFAULT NULL,
  `barcode` varchar(13) DEFAULT NULL,
  `IDStampatore` int unsigned DEFAULT NULL,
  `azione` int unsigned DEFAULT '1',
  `amount` int unsigned NOT NULL DEFAULT '0',
  `note` mediumtext,
  PRIMARY KEY (`ID`),
  KEY `fk_tags_mov_1_idx` (`azione`),
  CONSTRAINT `fk_tags_mov_1` FOREIGN KEY (`azione`) REFERENCES `azioni` (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=2453 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`hamlet`@`192.168.1.%`*/ /*!50003 TRIGGER `tags_mov_AFTER_INSERT` AFTER INSERT ON `tags_mov` FOR EACH ROW BEGIN
	declare c integer;
	declare s integer;
	declare g integer;
	set c=0;
	set s=0;
	set g=0;
	select sum(amount) from tags_mov where ID_tags=new.ID_tags and azione=1 into c;
	select sum(amount) from tags_mov where ID_tags=new.ID_tags and azione=2 into s;

	if s IS null then
	set s=0;
	end if;
	if c IS null then
	set c=0;
	end if;
	set g=c-s;

	if g IS null then
	set g=0;
	end if;

	update tags set giacenza=g where ID=new.ID_tags;
	
	


END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`hamlet`@`192.168.1.%`*/ /*!50003 TRIGGER `tags_mov_AFTER_UPDATE` AFTER UPDATE ON `tags_mov` FOR EACH ROW BEGIN
	declare c integer;
	declare s integer;
	declare g integer;
	set c=0;
	set s=0;
	set g=0;
	select sum(amount) from tags_mov where ID_tags=new.ID_tags and azione=1 into c;
	select sum(amount) from tags_mov where ID_tags=new.ID_tags and azione=2 into s;

	if s IS null then
	set s=0;
	end if;
	if c IS null then
	set c=0;
	end if;
	set g=c-s;

	if g IS null then
	set g=0;
	end if;

	update tags set giacenza=g where ID=new.ID_tags;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`hamlet`@`192.168.1.%`*/ /*!50003 TRIGGER `tags_mov_AFTER_DELETE` AFTER DELETE ON `tags_mov` FOR EACH ROW BEGIN
	declare c integer;
	declare s integer;
	declare g integer;
	set c=0;
	set s=0;
	set g=0;
	select sum(amount) from tags_mov where ID_Tags=old.ID_tags and azione=1 into c;
	select sum(amount) from tags_mov where ID_Tags=old.ID_tags and azione=2 into s;

	if s IS null then
	set s=0;
	end if;
	if c IS null then
	set c=0;
	end if;
	set g=c-s;

	if g IS null then
	set g=0;
	end if;

	update tags set giacenza=g where ID=old.ID_tags;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `tags_tipi`
--

DROP TABLE IF EXISTS `tags_tipi`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tags_tipi` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `tipi_lot`
--

DROP TABLE IF EXISTS `tipi_lot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tipi_lot` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(50) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `tipi_prodotto`
--

DROP TABLE IF EXISTS `tipi_prodotto`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tipi_prodotto` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `unita_di_misura`
--

DROP TABLE IF EXISTS `unita_di_misura`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `unita_di_misura` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(3) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `utenti`
--

DROP TABLE IF EXISTS `utenti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `utenti` (
  `ID` int unsigned NOT NULL AUTO_INCREMENT,
  `username` varchar(12) CHARACTER SET latin1 COLLATE latin1_swedish_ci NOT NULL DEFAULT '',
  `pwd` varchar(40) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `gruppo` int unsigned NOT NULL DEFAULT '0',
  `nome` varchar(45) CHARACTER SET latin1 COLLATE latin1_swedish_ci DEFAULT NULL,
  `attivo` tinyint unsigned DEFAULT '1',
  PRIMARY KEY (`ID`),
  KEY `FK_utenti_1_idx` (`gruppo`),
  CONSTRAINT `FK_utenti_1` FOREIGN KEY (`gruppo`) REFERENCES `gruppi` (`ID`) ON DELETE RESTRICT ON UPDATE RESTRICT
) ENGINE=InnoDB AUTO_INCREMENT=36 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping events for database 'fbgmdb260'
--

--
-- Dumping routines for database 'fbgmdb260'
--
/*!50003 DROP FUNCTION IF EXISTS `createid` */;
ALTER DATABASE `fbgmdb260` CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`hamlet`@`192.168.1.%` FUNCTION `createid`(idprod text) RETURNS text CHARSET latin1
    DETERMINISTIC
BEGIN
DECLARE num TEXT;
DECLARE datepart TEXT;
DECLARE lot TEXT;
set datepart=DATE_FORMAT(curdate(),'%d%m%Y');
select 1+count(lotdef.lot) from lotdef where DATE_FORMAT(DATA,'%Y-%m-%d')=curdate() and prodotto=idprod into num;
select concat(num,"-",IDprod,"-",datepart) into lot;
RETURN lot;

END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `fbgmdb260` CHARACTER SET utf8mb3 COLLATE utf8_bin ;
/*!50003 DROP FUNCTION IF EXISTS `getgiacenza` */;
ALTER DATABASE `fbgmdb260` CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`hamlet`@`192.168.1.%` FUNCTION `getgiacenza`(id integer(10) unsigned) RETURNS decimal(10,4)
    DETERMINISTIC
BEGIN
declare r decimal(10,4);
set @c =(select sum(quantita)from operazioni where IDlotto=id and azione=1);
set @s =(select sum(quantita)from operazioni where IDlotto=id and azione=2);
if @s is null then
set @s=0;
end if;

set r=@c-@s;

RETURN r;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `fbgmdb260` CHARACTER SET utf8mb3 COLLATE utf8_bin ;
/*!50003 DROP FUNCTION IF EXISTS `get_virtual_amount` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`hamlet`@`192.168.1.%` FUNCTION `get_virtual_amount`(idtag integer(10) unsigned) RETURNS int
    DETERMINISTIC
BEGIN
   declare c  integer;
   declare s integer;
   declare vg integer;
   SELECT sum(amount) from tags_containers_mov Where `ID_tags_container`=idtag and azione=1 into c; 
   SELECT sum(amount) from tags_containers_mov Where `ID_tags_container`=idtag and azione=2 into s;
   
   
   if c is null then
		set c=0;
   end if; 
   
   if s is null then
      set s=0;
   end if;
   
   select c-s into vg;
RETURN vg;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `get_tags_giacenza` */;
ALTER DATABASE `fbgmdb260` CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`hamlet`@`192.168.1.%` PROCEDURE `get_tags_giacenza`(in idtag integer unsigned)
BEGIN
update tags_containers set giacenza=get_virtual_amount(idtag) where ID=idtag;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `fbgmdb260` CHARACTER SET utf8mb3 COLLATE utf8_bin ;
/*!50003 DROP PROCEDURE IF EXISTS `init_tags_containers` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`hamlet`@`192.168.1.%` PROCEDURE `init_tags_containers`()
BEGIN
DECLARE n INT DEFAULT 0;
DECLARE i INT DEFAULT 0;
SELECT COUNT(*) FROM prodotti where tipo in (3,4,5) INTO n ;
SET i=0;
WHILE i<n DO   INSERT INTO tags_containers(ID_prodotto) SELECT (ID) FROM prodotti where tipo in (3,4,5) LIMIT 1,n;
  SET i = i + 1;
END WHILE;
	
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `trigger_proc` */;
ALTER DATABASE `fbgmdb260` CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`hamlet`@`192.168.1.%` PROCEDURE `trigger_proc`(in idlotto integer unsigned)
BEGIN
update lotdef set giacenza=getgiacenza(idlotto) where ID=idlotto;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `fbgmdb260` CHARACTER SET utf8mb3 COLLATE utf8_bin ;
/*!50003 DROP PROCEDURE IF EXISTS `update_tag_containers_giacenza` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`hamlet`@`192.168.1.%` PROCEDURE `update_tag_containers_giacenza`(in idtag integer unsigned)
BEGIN
update tags_containers set giacenza=get_virtual_amount(idtag) where ID=idtag;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2023-06-23  9:07:36
