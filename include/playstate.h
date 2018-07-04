#ifndef PLAYSTATE_H
#define PLAYSTATE_H

#include <GameState.h>


class PlayState : public GameState
{
public:

    PlayState();
    virtual ~PlayState();

    void eventHandler();
    void update();
    void draw();

protected:

private:
};

#endif // PLAYSTATE_H
