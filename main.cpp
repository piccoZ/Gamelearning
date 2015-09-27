#include <QApplication>
#include "Myrect.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <memory>
#include <QTimer>
#include "Game.h"

class asd{
    static const int rsd = 5;
};


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Game* game = new Game();

    game->show();

    return a.exec();

}
