#include "game.h"


void play(game &g) {

  bool gameplay = true;
  int turn = 1;
  chessboard board = factory::model::initialize_chessboard();
    //(turn, initialize_pieces(core::game::WHITE), initialize_pieces(core::game::BLACK));

  while(gameplay) {
//    chesspiece piece = factory::initialize_chesspiece();
//    core::util::debug(core::util::LogLevel::INFO, "chesspiecename is: " + piece.name);
//    std::string input;

//    std::cin >> input;

    core::util::print_inline("turn:" );
    core::util::debug(core::util::LogLevel::INFO, std::to_string(board.turn));
    core::util::debug(core::util::LogLevel::INFO, "Game is running");
    gameplay = false;
    // Handle the atual gameplay in loop
    //

  }
}
