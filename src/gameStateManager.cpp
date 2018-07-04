#include "gameStateManager.h"

GameStateManager::GameStateManager(sf::Window *window)
{
    window = m_window;
    initialize();
}

GameStateManager::~GameStateManager()
{

}

void GameStateManager::initialize()
{
    states.push_back(new MenuState());
    states.push_back(new PlayState());
}
