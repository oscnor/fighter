#ifndef GAME_H
#define GAME_H

#include <SFML/Window.hpp>
#include "gameStateManager.h"

class Game
{
public:
    Game();
    ~Game();

    void run();
private:

    sf::Window *window;
    GameStateManager *gameStateManager(sf::Window *window);
};

#endif // GAME_H
