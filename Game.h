#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QTimer>
#include "Myrect.h"
#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsItem>


class Game: public QGraphicsView
{
    Q_OBJECT
public:
    Game();

    QGraphicsScene* scene;
    MyRect*         player;
    QTimer*         timer;
public slots:
    void spawn();


};


#endif // GAME_H
