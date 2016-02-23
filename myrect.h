#ifndef MYRECT_H
#define MYRECT_H
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QObject>
#include <QElapsedTimer>


class MyRect: public QObject, public QGraphicsRectItem{
    QElapsedTimer watchdog;
public:
    MyRect();
    void keyPressEvent(QKeyEvent* event);
};


#endif // MYRECT_H

