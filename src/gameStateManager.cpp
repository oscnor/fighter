#include "../include/gameStateManager.h"

GameStateManager::GameStateManager(sf::Window *window)
{
    window = m_window;
    initialize();
    setCurrentState('S'); // Set starting state to splashscreen
}

GameStateManager::~GameStateManager()
{
  for(unsigned int i = 0; i<states.size(); i++)
    {
      delete states[i];
    }
}

void GameStateManager::initialize()
{
  states.push_back(new Splashscreen());
    states.push_back(new MenuState());
    states.push_back(new PlayState());
}

void GameStateManager::setCurrentState(char S)
{

  switch (S)
  {
  case 'S':
    currentState = states[0];
    break;
  case 'M':
    currentState = states[1];
    break;
  case 'P':
    currentState = states[2];
    break;
  default:
    break;
  }
  
}

void GameStateManager::eventHandler()
{
  currentState->eventHandler();
}

void GameStateManager::update()
{
  currentState->update();
}

void GameStateManager::draw()
{
  currentState->draw();
}
