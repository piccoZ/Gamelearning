#include "Game.h"
#include "Enemy.h"

// adding st heresd
//addint another comment

Game::Game()
{
    scene = new QGraphicsScene;
    player = new MyRect;
    timer = new QTimer();


    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    player->setRect(0, 0, 100, 100);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    player->setPos((width())/2, height() - player->rect().height());

    scene->setSceneRect(0,0,800,600);
    scene->addItem(player);
    setScene(scene);

    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(spawn()));
    timer->start(2000);




}

void Game::spawn()
{
    Enemy * enemy = new Enemy();

    scene->addItem(enemy);
}
