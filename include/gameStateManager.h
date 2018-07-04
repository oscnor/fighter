#ifndef GAMESTATEMANAGER_H
#define GAMESTATEMANAGER_H

#include <SFML/Window.hpp>
#include <vector>
#include "gamestate.h"
#include "menustate.h"
#include "playstate.h"

class GameStateManager
{
public:
    GameStateManager(sf::Window *window);
    ~GameStateManager();

private:
    void initialize();

    sf::Window *m_window;
    std::vector<GameState*> states;

};


#endif // GAMESTATEMANAGER_H
