#include "../include/game.h"

Game::Game()
{
    window = new sf::Window(sf::VideoMode(800, 600), "My window");
    run();
}

Game::~Game()
{
    delete window;
    delete gameStateManager;
}


void Game::run()
{

  gameStateManager->currentState->update();
    // run the program as long as the window is open
    while (window->isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window->pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window->close();
        }
    }
}
