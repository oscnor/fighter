#ifndef MENUSTATE_H
#define MENUSTATE_H

#include "gamestate.h"


class MenuState : public GameState
{
public:

    MenuState();
    virtual ~MenuState();

    void eventHandler();
    void update();
    void draw();

protected:

private:
};

#endif // MENUSTATE_H
