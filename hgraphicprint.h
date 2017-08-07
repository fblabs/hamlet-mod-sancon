#ifndef HGRAPHICPRINT_H
#define HGRAPHICPRINT_H

#include <QWidget>
#include <QGraphicsObject>
#include <QGraphicsItem>
#include <QGraphicsTextItem>
#include <QGraphicsScene>


class QCursor;

namespace Ui {
class HGraphicPrint;
}

class HGraphicPrint : public QWidget
{
    Q_OBJECT

public:
    explicit HGraphicPrint(QWidget *parent = 0);
    ~HGraphicPrint();
private:
    int itemCount;
    Ui::HGraphicPrint *ui;
    QGraphicsScene *scene;
    QCursor cursor;
    QList<QGraphicsTextItem*> items;
public slots:
    QGraphicsTextItem *addText(const QString text="");
    void setTextBold(QGraphicsTextItem *item=0, bool bold=false);
protected:
    bool eventFilter(QObject *o, QEvent *e);

};

#endif // HGRAPHICPRINT_H
