#ifndef HTEXTEDIT_H
#define HTEXTEDIT_H

#include <QWidget>
#include <QTextEdit>

class HTextEdit : public QTextEdit
{
public:
    HTextEdit(QWidget*);
    bool canInsertFromMimeData( const QMimeData *source ) const;
    void insertFromMimeData( const QMimeData *source );
    QByteArray save();
private:
    void dropImage(const QUrl& url, const QImage& image);

};

#endif // HTEXTEDIT_H
