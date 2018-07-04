#ifndef GAMESTATE_H
#define GAMESTATE_H


class GameState
{
public:
    GameState();
    virtual ~GameState();

    virtual void eventHandler()=0;
    virtual void update()=0;
    virtual void draw()=0;

protected:

private:

};

#endif // GAMESTATE_H
