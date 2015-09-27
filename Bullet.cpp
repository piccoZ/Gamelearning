#include "Bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>
#include <typeinfo>
#include <Enemy.h>
Bullet::Bullet()
{
    setRect(0,0,10,50);

    QTimer* timer = new QTimer();


   connect(timer,SIGNAL(timeout()),this, SLOT(move()));

   timer->start(50);
}

void Bullet::move()
{
    QList<QGraphicsItem*> col_items = collidingItems();
    for(auto iter = col_items.begin(); iter !=  col_items.end(); iter++ )
    {
        if(typeid(**iter) == typeid(Enemy))
        {
            scene()->removeItem(*iter);
            scene()->removeItem(this);

            delete *iter;
            delete this;
            return;
        }
    }
    setPos(x(), y()-10);
    if(pos().y() +  rect().height() < 0)
    {
        scene()->removeItem(this);
        delete this;
    }

}

