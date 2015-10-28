CREATE DATABASE  IF NOT EXISTS `fbgmdb260workcopy` /*!40100 DEFAULT CHARACTER SET latin1 */;
USE `fbgmdb260workcopy`;
-- MySQL dump 10.13  Distrib 5.5.46, for debian-linux-gnu (x86_64)
--
-- Host: 127.0.0.1    Database: fbgmdb260workcopy
-- ------------------------------------------------------
-- Server version	5.5.46-0ubuntu0.14.04.2

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
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
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `anagrafica` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ragione_sociale` varchar(45) NOT NULL DEFAULT '',
  `indirizzo` varchar(50) DEFAULT NULL,
  `citta` varchar(50) DEFAULT NULL,
  `cap` varchar(12) DEFAULT NULL,
  `provinciaZAP` varchar(5) DEFAULT NULL,
  `nazione` varchar(30) DEFAULT '',
  `tel` varchar(45) DEFAULT NULL,
  `contatto` varchar(45) DEFAULT NULL,
  `cliente` tinyint(1) NOT NULL DEFAULT '0',
  `fornitore` tinyint(1) NOT NULL DEFAULT '0',
  `trasportatore` tinyint(1) NOT NULL DEFAULT '0',
  `note` longtext,
  `subcliente` tinyint(1) unsigned NOT NULL DEFAULT '0',
  `IDCliente` int(10) unsigned DEFAULT NULL,
  PRIMARY KEY (`ID`),
  UNIQUE KEY `Index_2` (`ragione_sociale`)
) ENGINE=InnoDB AUTO_INCREMENT=541 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `associazioni`
--

DROP TABLE IF EXISTS `associazioni`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
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
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `azioni` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(50) NOT NULL DEFAULT '',
  PRIMARY KEY (`ID`),
  UNIQUE KEY `Index_2` (`descrizione`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `composizione_lot`
--

DROP TABLE IF EXISTS `composizione_lot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `composizione_lot` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ID_lotto` int(10) unsigned DEFAULT NULL,
  `operazione` int(10) unsigned NOT NULL DEFAULT '0',
  `lot` char(25) NOT NULL DEFAULT '',
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=304773 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `gruppi`
--

DROP TABLE IF EXISTS `gruppi`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
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
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `lotdef` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `lot` char(45) DEFAULT NULL,
  `prodotto` int(10) unsigned NOT NULL DEFAULT '0',
  `data` datetime NOT NULL DEFAULT '0000-00-00 00:00:00',
  `giacenza` double DEFAULT '0',
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
  KEY `index4` (`data`),
  KEY `fk_lotdef_1_idx` (`prodotto`),
  KEY `fk_lotdef_2_idx` (`tipo`),
  KEY `fk_lotdef_3_idx` (`anagrafica`),
  KEY `fk_lotdef_4_idx` (`um`),
  CONSTRAINT `fk_lotdef_1` FOREIGN KEY (`prodotto`) REFERENCES `prodotti` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_lotdef_2` FOREIGN KEY (`tipo`) REFERENCES `tipi_lot` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_lotdef_3` FOREIGN KEY (`anagrafica`) REFERENCES `anagrafica` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_lotdef_4` FOREIGN KEY (`um`) REFERENCES `unita_di_misura` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=56444 DEFAULT CHARSET=latin1 ROW_FORMAT=DYNAMIC;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `operazioni`
--

DROP TABLE IF EXISTS `operazioni`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
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
  KEY `fk_operazioni_1_idx` (`IDlotto`),
  KEY `fk_operazioni_2_idx` (`IDprodotto`),
  KEY `fk_operazioni_3_idx` (`um`),
  KEY `fk_operazioni_3_idx1` (`utente`),
  KEY `fk_operazioni_4_idx` (`azione`),
  CONSTRAINT `fk_operazioni_1` FOREIGN KEY (`IDlotto`) REFERENCES `lotdef` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_operazioni_2` FOREIGN KEY (`IDprodotto`) REFERENCES `prodotti` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_operazioni_3` FOREIGN KEY (`utente`) REFERENCES `utenti` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_operazioni_4` FOREIGN KEY (`azione`) REFERENCES `azioni` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_operazioni_5` FOREIGN KEY (`um`) REFERENCES `unita_di_misura` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=445753 DEFAULT CHARSET=latin1 COMMENT='InnoDB free: 3072 kB; (`ID_ricetta`) REFER `fbgmdb/ricette`(';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `prodotti`
--

DROP TABLE IF EXISTS `prodotti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `prodotti` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `descrizione` varchar(50) NOT NULL DEFAULT '',
  `tipo` int(10) unsigned NOT NULL DEFAULT '0',
  `allergenico` tinyint(1) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`ID`),
  UNIQUE KEY `IDX_DESC` (`descrizione`)
) ENGINE=InnoDB AUTO_INCREMENT=1008 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `ricette`
--

DROP TABLE IF EXISTS `ricette`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `ricette` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ID_prodotto` int(10) unsigned NOT NULL DEFAULT '0',
  `note` longtext NOT NULL,
  PRIMARY KEY (`ID`,`ID_prodotto`),
  KEY `FK_ricette_1` (`ID_prodotto`),
  CONSTRAINT `FK_ricette_1` FOREIGN KEY (`ID_prodotto`) REFERENCES `prodotti` (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=633 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `righe_ricette`
--

DROP TABLE IF EXISTS `righe_ricette`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `righe_ricette` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `ID_ricetta` int(10) unsigned NOT NULL DEFAULT '0',
  `ID_prodotto` int(10) unsigned NOT NULL DEFAULT '0',
  `quantita` double NOT NULL DEFAULT '0',
  `show_prod` tinyint(3) unsigned DEFAULT '1',
  PRIMARY KEY (`ID`),
  KEY `FK_righe_ricette_2` (`ID_prodotto`)
) ENGINE=InnoDB AUTO_INCREMENT=5927 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `schede`
--

DROP TABLE IF EXISTS `schede`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `schede` (
  `prodotto` int(10) unsigned NOT NULL DEFAULT '0',
  `cliente` int(10) unsigned NOT NULL DEFAULT '0',
  `olio` text,
  `vaso` text,
  `tappo` text,
  `etichette` text,
  `scatole` text,
  `note` text,
  `immagine` mediumblob,
  PRIMARY KEY (`prodotto`,`cliente`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COMMENT='InnoDB free: 5120 kB; (`cliente`) REFER `fbgmdb2/anagrafica`';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `schedeorg`
--

DROP TABLE IF EXISTS `schedeorg`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `schedeorg` (
  `prodotto` int(10) unsigned NOT NULL DEFAULT '0',
  `cliente` int(10) unsigned NOT NULL DEFAULT '0',
  `olio` text,
  `vaso` text,
  `tappo` text,
  `etichette` text,
  `scatole` text,
  `note` text,
  PRIMARY KEY (`prodotto`,`cliente`),
  KEY `FK_schede_2` (`cliente`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COMMENT='InnoDB free: 5120 kB; (`cliente`) REFER `fbgmdb2/anagrafica`';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `tipi_lot`
--

DROP TABLE IF EXISTS `tipi_lot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
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
/*!40101 SET character_set_client = utf8 */;
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
/*!40101 SET character_set_client = utf8 */;
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
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `utenti` (
  `ID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `username` varchar(12) NOT NULL DEFAULT '',
  `pwd` varchar(40) DEFAULT NULL,
  `gruppo` int(10) unsigned NOT NULL DEFAULT '0',
  `nome` varchar(45) DEFAULT NULL,
  `attivo` tinyint(3) unsigned DEFAULT '1',
  PRIMARY KEY (`ID`),
  KEY `fk_utenti_1_idx` (`gruppo`),
  CONSTRAINT `fk_utenti_1` FOREIGN KEY (`gruppo`) REFERENCES `gruppi` (`ID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=20 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping events for database 'fbgmdb260workcopy'
--

--
-- Dumping routines for database 'fbgmdb260workcopy'
--
/*!50003 DROP FUNCTION IF EXISTS `createID` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`%` FUNCTION `createID`(idprod TEXT) RETURNS varchar(25) CHARSET latin1
BEGIN
DECLARE num TEXT;
DECLARE datepart TEXT;
DECLARE lot TEXT;
declare mysqldate TEXT;
select DATE_FORMAT(NOW(),'%Y-%m-%d')into mysqldate;
select DATE_FORMAT(NOW(),'%d%m%Y') into datepart;
select 1+count(lotdef.lot) from lotdef where year(data)=DATE_FORMAT(NOW(),'%Y') and month(data)=DATE_FORMAT(NOW(),'%m') and day(data)=DATE_FORMAT(NOW(),'%d') and prodotto=idprod into num;
select concat(num,"-",IDprod,"-",datepart) into lot;
RETURN lot;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP FUNCTION IF EXISTS `giac` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`%` FUNCTION `giac`(idl integer) RETURNS double
BEGIN
declare a double;
declare b double;
declare g double;
select sum(quantita) from operazioni where azione=1 and IDlotto=idl into a;
select sum(quantita) from operazioni where azione=2 and IDlotto=idl into b;

set g=a-b;

RETURN g;
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

-- Dump completed on 2015-10-28 17:40:20
