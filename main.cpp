#include <iostream>
#include <string>
#include "core/debug.h"
#include "game.h"
//#include "factories/factory.h"

//#include "models/chessboard.hpp"
//#include "models/chesspiece.hpp"

int main(){
  debug(core::util::LogLevel::INFO, "Starting game");

  debug(core::util::LogLevel::INFO, "\n");

  game g = game{};

  play(g);

  debug(core::util::LogLevel::INFO, "Game is running");
//  auto board = factory::initialize_chessboard();
//  debug(core::util::LogLevel::INFO, std::to_string(board.turn));

  return 0;
}
