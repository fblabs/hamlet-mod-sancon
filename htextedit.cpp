#include "htextedit.h"
#include <QMimeData>
#include <QTextEdit>
#include <QDebug>
#include <QImageReader>
#include <QFileInfo>
#include <QByteArray>
#include <QSqlQuery>

HTextEdit::HTextEdit(QWidget *)
{

}

bool HTextEdit::canInsertFromMimeData( const QMimeData *source ) const
{
    if (source->hasImage())
        return true;
    else
        return QTextEdit::canInsertFromMimeData(source);
    //qDebug()<<"cifm"<<source->hasImage();
}

void HTextEdit::insertFromMimeData( const QMimeData *source )
{
  /*  //qDebug()<<source->hasImage()<<source->hasUrls();
    if(source->hasImage() || source->hasUrls() )
    {  QImage image = qvariant_cast<QImage>(source->imageData());
        QTextCursor cursor = this->textCursor();
        QTextDocument *document = this->document();
        document->addResource(QTextDocument::ImageResource, QUrl("image"), image);
        cursor.insertImage("image");
    }*/

    if (source->hasImage())
           {
               static int i = 1;
               QUrl url(QString("dropped_image_%1").arg(i++));
               dropImage(url, qvariant_cast<QImage>(source->imageData()));
           }
           else if (source->hasUrls())
           {
               foreach (QUrl url, source->urls())
               {
                   QFileInfo info(url.toLocalFile());
                   if (QImageReader::supportedImageFormats().contains(info.suffix().toLower().toLatin1()))
                       dropImage(url, QImage(info.filePath()));
                   else
                     int i=1;  //dropTextFile(url);
               }
           }
           else
           {
               QTextEdit::insertFromMimeData(source);
           }
}

void HTextEdit::dropImage(const QUrl& url, const QImage& image)
    {
        if (!image.isNull())
        {
            QImage imscal=image.scaled(200,400,Qt::KeepAspectRatio);
            this->document()->addResource(QTextDocument::ImageResource, url, imscal);

            this->textCursor().insertImage(url.toString());

        }
    }

QByteArray HTextEdit::save()
{
    QByteArray bytes=QVariant(document()->toHtml()).toByteArray();

    return bytes;


}


