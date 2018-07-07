#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include "gamestate.h"


class Splashscreen: public GameState
{
public:
  Splashscreen();
  ~Splashscreen();

  void eventHandler();
  void update();
  void draw();
};

#endif
