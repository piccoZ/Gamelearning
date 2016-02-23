#include "MyRect.h"
#include <memory>
#include <QKeyEvent>
#include <Bullet.h>
#include <QGraphicsScene>
#include <QDebug>
#include <Enemy.h>

MyRect::MyRect()
{
    watchdog.start();
}

void MyRect::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
        case Qt::Key_Left:
            if(pos().x() > 0 )
                setPos(x()-10,y());
            break;
        case Qt::Key_Right:
            if(pos().x() + 100 < 800)
                setPos(x()+10, y());
            break;
//        case Qt::Key_Up:
//            setPos(x(),y()-10);
//            break;
//        case Qt::Key_Down:
//            setPos(x(),y()+10);
//            break;
        case Qt::Key_Space:
            {
                //std::shared_ptr<Bullet> bullet(new Bullet);
                if(!watchdog.hasExpired(500))
                    break;

                Bullet* bullet = new Bullet;
                scene()->addItem(bullet);
                bullet->setPos(x()+45,y());
                watchdog.restart();
                break;
            }
        default:
            break;
    }
}

