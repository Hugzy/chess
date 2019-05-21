#include "factory.h"

chessboard factory::initialize_chessboard() {
  debug(core::util::LogLevel::INFO, "instantiating chessboard");
  int turn = 0;
  return chessboard(turn, std::vector<chesspiece>{}, std::vector<chesspiece>{});
}

chesspiece factory::initialize_chesspiece(){
  return chesspiece(0,0,"piece initialized from factory", core::game::WHITE, core::game::PAWN);
}
