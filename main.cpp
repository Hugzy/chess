#include <iostream>
#include <string>
#include "core/debug.h"
#include "game.h"

int main(){
  debug(core::util::LogLevel::INFO, "Starting game");

  debug(core::util::LogLevel::INFO, "\n");

  game g = game{};

  play(g);

  //debug(util::LogLevel::INFO, "Game is running");

  return 0;
}
