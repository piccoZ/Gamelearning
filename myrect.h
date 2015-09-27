#ifndef MYRECT_H
#define MYRECT_H
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QObject>


class MyRect: public QObject, public QGraphicsRectItem{
public:
    void keyPressEvent(QKeyEvent* event);
};


#endif // MYRECT_H

