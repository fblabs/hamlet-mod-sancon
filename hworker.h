#ifndef HWORKER_H
#define HWORKER_H

#include <QObject>
#include <QTimer>


class HWorker : public QObject
{
    Q_OBJECT
public:
    explicit HWorker(QObject *parent = nullptr);
private:

    QTimer *timer;

signals:
    void s_do();
public slots:
    void update();

};

#endif // HWORKER_H
