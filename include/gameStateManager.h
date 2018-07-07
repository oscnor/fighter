#ifndef GAMESTATEMANAGER_H
#define GAMESTATEMANAGER_H

#include <SFML/Window.hpp>
#include <vector>
#include "gamestate.h"
#include "splashscreen.h"
#include "menustate.h"
#include "playstate.h"

class GameStateManager
{
public:
    GameStateManager(sf::Window *window);
    ~GameStateManager();

    void setCurrentState(char S);

    void eventHandler();
    void update();
    void draw();

private:
    void initialize();

    sf::Window *m_window;
    std::vector<GameState*> states;
    GameState *currentState;

};


#endif // GAMESTATEMANAGER_H
