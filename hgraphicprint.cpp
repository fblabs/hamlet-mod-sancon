#include "hgraphicprint.h"
#include "ui_hgraphicprint.h"


#include <QCursor>
#include <QGraphicsItem>

#include <QDebug>
#include <QObject>
#include <QEvent>


HGraphicPrint::HGraphicPrint(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HGraphicPrint)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

   //items=new QList<QGraphicsTextItem*>();

    QGraphicsTextItem *i = addText("PIRIPICCHIO");
    i->setFlag(QGraphicsItem::ItemIsSelectable);
    i->setPos(100,100);



    QGraphicsTextItem *i1 =addText("PARAPACCHIOUS");
    i1->setPos(100,115);
    i1->setFlag(QGraphicsItem::ItemIsSelectable);

   // addText("PIRIPICCHIO2");

   // connect(scene,SIGNAL(focusItemChanged(QGraphicsItem*,QGraphicsItem*,Qt::FocusReason)),this,SLOT(focusItem(QGraphicsTextItem*)));
   ui->graphicsView->installEventFilter(this);

}

bool HGraphicPrint::eventFilter(QObject *o, QEvent *e)
{

    if (e->type()==QEvent::MouseButtonDblClick )
    {
        QGraphicsTextItem* item=dynamic_cast<QGraphicsTextItem*>(o);

        QString temp=item->toPlainText();
        qDebug()<<temp;
          if (item)
          {
              qDebug()<<dynamic_cast<QGraphicsTextItem*>(o)->toPlainText();
          }
          else
          {
             qDebug()<<"hai 60 anni e non sai fare ancora un cazzo, imbecille!!!";

          }

    }
   // e->accept();

    return false;
}

HGraphicPrint::~HGraphicPrint()
{
    delete ui;
}

QGraphicsTextItem* HGraphicPrint::addText(const QString text)
{
   QGraphicsTextItem *addedText=scene->addText(text);
    if(addedText)
    {   //addedText->setPos(x,y);
       // setTextBold(addedText,true);
       // itemCount++;
       // items.append(addedText);
        this->setWindowTitle(addedText->toPlainText());



        return addedText;
    }
    else
    {
        return 0;
    }
}

void HGraphicPrint::setTextBold(QGraphicsTextItem *item, bool bold)
{
    QFont font=item->font();
    font.setBold(bold);
    item->setFont(font);
}

