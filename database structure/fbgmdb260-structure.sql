-- MySQL dump 10.13  Distrib 8.0.19, for Linux (x86_64)
--
-- Host: 192.168.1.220    Database: fbgmdb260
-- ------------------------------------------------------
-- Server version	5.7.29

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
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ragione_sociale` varchar(50) NOT NULL DEFAULT '',
  `indirizzo` varchar(50) DEFAULT NULL,
  `citta` varchar(80) DEFAULT NULL,
  `cap` varchar(50) DEFAULT NULL,
  `provinciaZAP` varchar(25) DEFAULT NULL,
  `nazione` varchar(80) DEFAULT '',
  `tel` varchar(45) DEFAULT NULL,
  `contatto` varchar(45) DEFAULT NULL,
  `cliente` tinyint(1) NOT NULL DEFAULT '0',
  `fornitore` tinyint(1) NOT NULL DEFAULT '0',
  `trasportatore` tinyint(1) NOT NULL DEFAULT '0',
  `note` longtext,
  `subcliente` tinyint(1) unsigned NOT NULL DEFAULT '0',
  `IDCliente` int(10) DEFAULT NULL,
  `visibile` varchar(45) NOT NULL DEFAULT '1',
  PRIMARY KEY (`ID`),
  UNIQUE KEY `Index_2` (`ragione_sociale`)
) ENGINE=InnoDB AUTO_INCREMENT=706 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `associazioni`
--

DROP TABLE IF EXISTS `associazioni`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `associazioni` (
  `ID_ricetta` int(10) unsigned NOT NULL DEFAULT '0',
  `ID_cliente` int(10) unsigned NOT NULL DEFAULT '0',
  `visualizza` tinyint(1) NOT NULL DEFAULT '1',
  PRIMARY KEY (`ID_ricetta`,`ID_cliente`),
  KEY `FK_associazioni_1` (`ID_cliente`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `azioni`
--

DROP TABLE IF EXISTS `azioni`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `azioni` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(50) NOT NULL DEFAULT '',
  PRIMARY KEY (`ID`),
  UNIQUE KEY `Index_2` (`descrizione`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `composizione_lot`
--

DROP TABLE IF EXISTS `composizione_lot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `composizione_lot` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ID_lotto` int(10) unsigned DEFAULT NULL,
  `operazione` int(10) unsigned NOT NULL DEFAULT '0',
  `lot` char(25) NOT NULL DEFAULT '',
  PRIMARY KEY (`ID`),
  KEY `fk_composizione_lot_1_idx` (`ID_lotto`),
  KEY `fk_composizione_lot_2_idx` (`operazione`),
  CONSTRAINT `fk_composizione_lot_1` FOREIGN KEY (`ID_lotto`) REFERENCES `lotdef` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_composizione_lot_2` FOREIGN KEY (`operazione`) REFERENCES `operazioni` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=485939 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `contatti`
--

DROP TABLE IF EXISTS `contatti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `contatti` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `nome` varchar(100) DEFAULT NULL,
  `recapito` varchar(150) DEFAULT NULL,
  `area` varchar(45) DEFAULT NULL,
  `tipo` varchar(45) DEFAULT NULL,
  `fiera` varchar(50) DEFAULT NULL,
  `referente` varchar(100) DEFAULT NULL,
  `etichetta` varchar(45) DEFAULT NULL,
  `import` tinyint(3) unsigned DEFAULT NULL,
  `interesse` varchar(250) DEFAULT NULL,
  `assaggi` varchar(250) DEFAULT NULL,
  `foto` tinyint(3) unsigned DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=59 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `gruppi`
--

DROP TABLE IF EXISTS `gruppi`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `gruppi` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(50) NOT NULL DEFAULT '',
  `canupdate` tinyint(3) unsigned DEFAULT '0',
  `canupdateana` tinyint(3) unsigned DEFAULT '0',
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `lotdef`
--

DROP TABLE IF EXISTS `lotdef`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `lotdef` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `lot` varchar(45) DEFAULT NULL,
  `prodotto` int(10) unsigned NOT NULL DEFAULT '0',
  `data` datetime NOT NULL DEFAULT '0000-00-00 00:00:00',
  `giacenza` decimal(10,4) DEFAULT NULL,
  `um` int(10) unsigned DEFAULT NULL,
  `scadenza` datetime DEFAULT NULL,
  `anagrafica` int(10) unsigned DEFAULT NULL,
  `lot_fornitore` char(80) DEFAULT NULL,
  `EAN` char(45) DEFAULT NULL,
  `tipo` int(10) unsigned NOT NULL DEFAULT '0',
  `attivo` tinyint(3) unsigned DEFAULT '1',
  `note` text,
  PRIMARY KEY (`ID`),
  UNIQUE KEY `Index_3` (`lot`),
  KEY `fk_lotdef_1_idx` (`prodotto`),
  KEY `fk_lotdef_2_idx` (`um`),
  KEY `fk_lotdef_3_idx` (`anagrafica`),
  KEY `fk_lotdef_4_idx` (`tipo`),
  KEY `index4` (`data`),
  CONSTRAINT `fk_lotdef_1` FOREIGN KEY (`prodotto`) REFERENCES `prodotti` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_lotdef_2` FOREIGN KEY (`um`) REFERENCES `unita_di_misura` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_lotdef_3` FOREIGN KEY (`anagrafica`) REFERENCES `lotdef` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_lotdef_4` FOREIGN KEY (`tipo`) REFERENCES `tipi_lot` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=86279 DEFAULT CHARSET=latin1 ROW_FORMAT=DYNAMIC;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `notifiche`
--

DROP TABLE IF EXISTS `notifiche`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `notifiche` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `data` datetime DEFAULT NULL,
  `tipo` varchar(45) DEFAULT NULL,
  `IDUtente` varchar(50) DEFAULT NULL,
  `IDGruppo` varchar(45) DEFAULT NULL,
  `descrizione` varchar(250) DEFAULT NULL,
  `usaidgruppo` tinyint(3) unsigned DEFAULT NULL,
  `attiva` tinyint(3) unsigned DEFAULT NULL,
  `creatore` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=35 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `operazioni`
--

DROP TABLE IF EXISTS `operazioni`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `operazioni` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `IDlotto` int(10) unsigned DEFAULT NULL,
  `data` datetime NOT NULL DEFAULT '0000-00-00 00:00:00',
  `utente` int(10) unsigned NOT NULL DEFAULT '0',
  `IDprodotto` int(10) unsigned DEFAULT NULL,
  `azione` int(10) unsigned NOT NULL DEFAULT '0',
  `quantita` double NOT NULL DEFAULT '0',
  `um` int(10) unsigned NOT NULL DEFAULT '0' COMMENT '0: Kg 1: pz',
  `note` longtext,
  PRIMARY KEY (`ID`),
  KEY `fk_operazioni_1_idx` (`azione`),
  KEY `fk_operazioni_2_idx` (`IDlotto`),
  KEY `fk_operazioni_3_idx` (`utente`),
  KEY `fk_operazioni_4_idx` (`IDprodotto`),
  KEY `fk_operazioni_5_idx` (`um`),
  CONSTRAINT `fk_operazioni_1` FOREIGN KEY (`azione`) REFERENCES `azioni` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_operazioni_2` FOREIGN KEY (`IDlotto`) REFERENCES `lotdef` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_operazioni_3` FOREIGN KEY (`utente`) REFERENCES `utenti` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_operazioni_4` FOREIGN KEY (`IDprodotto`) REFERENCES `prodotti` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=670240 DEFAULT CHARSET=latin1 COMMENT='InnoDB free: 3072 kB; (`ID_ricetta`) REFER `fbgmdb/ricette`(';
/*!40101 SET character_set_client = @saved_cs_client */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `operazioni_AINS` AFTER INSERT ON `operazioni` FOR EACH ROW
begin
call trigger_proc(new.IDlotto);
end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`127.0.0.1`*/ /*!50003 TRIGGER `fbgmdb260`.`operazioni_AFTER_UPDATE` AFTER UPDATE ON `operazioni` FOR EACH ROW
BEGIN
call trigger_proc(new.IDlotto);
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
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(50) NOT NULL DEFAULT '',
  `tipo` int(10) unsigned NOT NULL DEFAULT '0',
  `allergenico` tinyint(1) unsigned NOT NULL DEFAULT '0',
  `attivo` tinyint(3) unsigned NOT NULL DEFAULT '1',
  `bio` tinyint(3) unsigned DEFAULT '0',
  `prezzo` double DEFAULT NULL,
  PRIMARY KEY (`ID`),
  UNIQUE KEY `IDX_DESC` (`descrizione`),
  KEY `fk_prodotti_1_idx` (`tipo`)
) ENGINE=InnoDB AUTO_INCREMENT=1215 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `produzione`
--

DROP TABLE IF EXISTS `produzione`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `produzione` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `dal` date DEFAULT NULL,
  `al` date DEFAULT NULL,
  `linea` varchar(10) DEFAULT NULL,
  `note` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `ricette`
--

DROP TABLE IF EXISTS `ricette`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `ricette` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ID_prodotto` int(10) unsigned NOT NULL DEFAULT '0',
  `note` longtext NOT NULL,
  PRIMARY KEY (`ID`),
  KEY `fk_ricette_1_idx` (`ID_prodotto`),
  CONSTRAINT `fk_ricette_1` FOREIGN KEY (`ID_prodotto`) REFERENCES `prodotti` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=788 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `righe_produzione`
--

DROP TABLE IF EXISTS `righe_produzione`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `righe_produzione` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `IDProduzione` int(10) unsigned DEFAULT NULL,
  `num_riga` int(10) unsigned DEFAULT NULL,
  `vaso_gr` double DEFAULT NULL,
  `quantita` double DEFAULT NULL,
  `specificaolio` varchar(10) DEFAULT NULL,
  `idprodotto` int(10) unsigned DEFAULT NULL,
  `olio` varchar(15) DEFAULT NULL,
  `tappo` int(10) unsigned DEFAULT NULL,
  `idcliente` int(10) unsigned DEFAULT NULL,
  `totale` double DEFAULT '0',
  `sanificazione` varchar(10) DEFAULT NULL,
  `numero_ordine` varchar(20) DEFAULT NULL,
  `fresco` tinyint(2) unsigned DEFAULT '0',
  `pastorizzato` tinyint(2) unsigned DEFAULT '0',
  `allergeni` varchar(10) DEFAULT NULL,
  `note` text,
  PRIMARY KEY (`ID`),
  KEY `fk_righe_produzione_1_idx` (`IDProduzione`),
  KEY `fk_righe_produzione_2_idx` (`idcliente`),
  KEY `fk_righe_produzione_3_idx` (`idprodotto`),
  KEY `fk_righe_produzione_4_idx` (`tappo`),
  CONSTRAINT `fk_righe_produzione_1` FOREIGN KEY (`IDProduzione`) REFERENCES `produzione` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_righe_produzione_2` FOREIGN KEY (`idcliente`) REFERENCES `anagrafica` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_righe_produzione_3` FOREIGN KEY (`idprodotto`) REFERENCES `prodotti` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_righe_produzione_4` FOREIGN KEY (`tappo`) REFERENCES `prodotti` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `righe_ricette`
--

DROP TABLE IF EXISTS `righe_ricette`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `righe_ricette` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ID_ricetta` int(10) unsigned NOT NULL DEFAULT '0',
  `ID_prodotto` int(10) unsigned NOT NULL DEFAULT '0',
  `quantita` double NOT NULL DEFAULT '0',
  `show_prod` tinyint(3) unsigned DEFAULT '1',
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=18350 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `schede`
--

DROP TABLE IF EXISTS `schede`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `schede` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `prodotto` int(10) unsigned NOT NULL DEFAULT '0',
  `cliente` int(10) unsigned NOT NULL DEFAULT '0',
  `olio` text,
  `vaso` text,
  `tappo` text,
  `etichette` text,
  `scatole` text,
  `note` text,
  `immagine` mediumblob,
  `imgx` int(10) unsigned DEFAULT '200',
  `imgy` int(10) unsigned DEFAULT '200',
  `fontsize` int(10) unsigned DEFAULT '10',
  `imgcartone` mediumblob,
  `imgcw` int(10) unsigned DEFAULT '200',
  `imgch` int(10) unsigned DEFAULT '200',
  PRIMARY KEY (`ID`),
  KEY `fk_schede_1_idx` (`prodotto`),
  KEY `fk_schede_2_idx` (`cliente`),
  CONSTRAINT `fk_schede_1` FOREIGN KEY (`prodotto`) REFERENCES `prodotti` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_schede_2` FOREIGN KEY (`cliente`) REFERENCES `anagrafica` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=2672 DEFAULT CHARSET=latin1 COMMENT='InnoDB free: 5120 kB; (`cliente`) REFER `fbgmdb2/anagrafica`';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `schede_n`
--

DROP TABLE IF EXISTS `schede_n`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `schede_n` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `prodotto` int(10) unsigned DEFAULT NULL,
  `cliente` int(10) unsigned DEFAULT NULL,
  `scheda` text,
  PRIMARY KEY (`ID`),
  KEY `fk_schede_n_1_idx` (`prodotto`),
  KEY `fk_schede_n_2_idx` (`cliente`),
  CONSTRAINT `fk_schede_n_1` FOREIGN KEY (`prodotto`) REFERENCES `prodotti` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_schede_n_2` FOREIGN KEY (`cliente`) REFERENCES `anagrafica` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=5564 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `tipi_lot`
--

DROP TABLE IF EXISTS `tipi_lot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tipi_lot` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `tipi_prodotto`
--

DROP TABLE IF EXISTS `tipi_prodotto`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tipi_prodotto` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `unita_di_misura`
--

DROP TABLE IF EXISTS `unita_di_misura`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `unita_di_misura` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(3) DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `utenti`
--

DROP TABLE IF EXISTS `utenti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `utenti` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `username` varchar(12) NOT NULL DEFAULT '',
  `pwd` varchar(40) DEFAULT NULL,
  `gruppo` int(10) unsigned NOT NULL DEFAULT '0',
  `nome` varchar(45) DEFAULT NULL,
  `attivo` tinyint(3) unsigned DEFAULT '1',
  PRIMARY KEY (`ID`),
  KEY `FK_utenti_1` (`gruppo`),
  CONSTRAINT `FK_utenti_1` FOREIGN KEY (`gruppo`) REFERENCES `gruppi` (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=29 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping routines for database 'fbgmdb260'
--
/*!50003 DROP FUNCTION IF EXISTS `createid` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`127.0.0.1` FUNCTION `createid`(idprod text) RETURNS text CHARSET latin1
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
/*!50003 DROP FUNCTION IF EXISTS `getgiacenza` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = '' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` FUNCTION `getgiacenza`(id integer(10) unsigned) RETURNS decimal(10,4)
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
/*!50003 DROP PROCEDURE IF EXISTS `swaprows` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `swaprows`(in pid int,in pnewpos int unsigned)
BEGIN
update righe_produzione set num_riga=num_riga-1 where idproduzione=pid and num_riga=newpos;
update righe_produzione set num_riga=pnewpos where id=pid and numriga=num_riga-1;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `trigger_proc` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `trigger_proc`(in idlotto integer unsigned)
BEGIN
update lotdef set giacenza=getgiacenza(idlotto) where ID=idlotto;
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

-- Dump completed on 2020-03-09 14:18:07
