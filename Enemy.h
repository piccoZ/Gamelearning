#ifndef ENEMY_H
#define ENEMY_H


#include <QGraphicsRectItem>
#include <QObject>


class Enemy: public QObject,  public QGraphicsRectItem{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
public:
    Enemy();
public slots:
    void move();
};


#endif // ENEMY_H

