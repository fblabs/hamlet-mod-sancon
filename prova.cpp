
void HNuovaRicetta::creaRicetta()
{
    //creo nuovo prodotto (tipo=1)
    QSqlQuery q(db);
    QString sql="INSERT INTO prodotti(descrizione,tipo,allergenico) VALUES (:nome,:tipo,:allergenico)";
    QVariant nome;
    QVariant tipo;
    QVariant allergenico;
    QVariant idNuovo;
    QVariant idNuovaRicetta;
    nome=QVariant(ui->lineEdit->text());
    tipo=QVariant("1");

    if (ui->cbAllergenico->isChecked())
    {
        allergenico=QVariant("1");
    }
    else
    {
        allergenico=QVariant("0");
    }

    db.transaction();

    q.prepare(sql);
    q.bindValue(":nome",nome);
    q.bindValue(":tipo",tipo);
    q.bindValue(":allergenico",allergenico);

   if (q.exec())
   {
   //creo nuova ricetta di prodotto

       q.exec("SELECT max(ID)+1 from prodotti ");
       q.next();
       idNuovo=QVariant(q.value(0));
       q.clear();
       sql="INSERT INTO ricette VALUES(:idprodotto)";
       q.prepare(sql);
       q.bindValue(":idprodotto",idNuovo);
       q.exec();
       db.commit();
       sql="SELECT max(ID) from ricette";
       q.exec(sql);
       q.next();
       idNuovaRicetta=q.value(0).toString();
       qDebug()<<"idNuovaRicetta: "+ idNuovaRicetta.toString();

       q.clear();


       db.transaction();
       for (int i=0;i<tmRecipe->rowCount();i++)
       {
           sql ="INSERT INTO righe_ricette (ID_ricetta,ID_prodotto,quantita,show_prod) VALUES(:idnuovaricetta,:idprodotto,:quantita,:showprod)";
           q.prepare(sql);
           q.bindValue(":idnuovaricetta",idNuovaRicetta.toString());
           q.bindValue(":idprodotto", tmRecipe->index(i,0).data(0).toString());
           q.bindValue(":quantita",tmRecipe->index(i,2).data(0).toString());
           q.bindValue(":showprod",tmRecipe->index(i,3).data(0).toString());

           if (!q.exec())
           {
               qDebug()<<q.boundValue(0).toString()+" " +q.boundValue(1).toString()+ " " +q.boundValue(2).toString()+ " " +q.boundValue(3).toString();
               QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando la riga " + QString::number(i)+"\n"+q.lastError().text()+"\n"+q.boundValue(0).toString(),QMessageBox::Ok );
               db.rollback();
               break;
               return;

           }

       }

       db.commit();





   }
   else
   {
       QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando il prodotto",QMessageBox::Ok);
   }


}

void HNuovaRicetta::creaRicettaProdottoEsistente()
{
    QSqlQuery q(db);
    QString sql;
    QVariant nome;
    QVariant tipo;
    QVariant allergenico;
    QVariant idNuovo;
    QVariant idNuovaRicetta;
    QVariant idProdotto=ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toString();
    nome=QVariant(ui->lineEdit->text());
    tipo=QVariant("1");



    db.transaction();




       sql="INSERT INTO ricette(ID_prodotto) VALUES(:idprodotto)";
       q.prepare(sql);
       q.bindValue(":idprodotto",idProdotto);
     if(q.exec())
     {
         db.commit();
     }
     else
     {
         QMessageBox::warning(this,QApplication::applicationName(),"ERRORE creando la ricetta\n"+q.lastError().text(),QMessageBox::Ok);
     }



      sql="SELECT max(ID)+1 from ricette";
      q.clear();
      q.exec(sql);
      q.next();
      idNuovaRicetta=q.value(0);
      qDebug()<<"id nuova ricetta"<<q.value(0).toString();
      q.clear();



       for (int i=0;i<tmRecipe->rowCount();i++)
       {
           sql ="INSERT INTO righe_ricette (ID_ricetta,ID_prodotto,quantita,show_prod) VALUES(:idnuovaricetta,:idprodotto,:quantita,:showprod)";
           q.prepare(sql);
           q.bindValue(":idnuovaricetta",idNuovaRicetta);
           q.bindValue(":idprodotto", tmRecipe->index(i,0).data(0).toString());
           q.bindValue(":quantita",tmRecipe->index(i,2).data(0).toString());
           q.bindValue(":showprod",tmRecipe->index(i,3).data(0).toString());

           if (!q.exec())
           {
               qDebug()<<q.boundValue(0).toString()+" " +q.boundValue(1).toString()+ " " +q.boundValue(2).toString()+ " " +q.boundValue(3).toString();
               QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando la riga " + QString::number(i)+"\n"+q.lastError().text()+"\n"+q.boundValue(0).toString(),QMessageBox::Ok );
               db.rollback();
               break;
               return;

           }

       }

       db.commit();



}
