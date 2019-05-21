#include "game.h"

const int MAXIMUM_NUMBER_OF_PAWNS = 8;
const int NUMBER_OF_DOUBLE_PIECES = 2;

void play(game &g) {

  bool gameplay = true;
  int turn = 1;
  chessboard board = factory::initialize_chessboard();
    //(turn, initialize_pieces(core::game::WHITE), initialize_pieces(core::game::BLACK));

  while(gameplay) {
    chesspiece piece = factory::initialize_chesspiece();
    core::util::debug(core::util::LogLevel::INFO, "chesspiecename is: " + piece.name);
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

std::vector<chesspiece> initialize_pieces(core::game::color color) {
  
  core::util::debug(core::util::LogLevel::INFO, "initializing set of pieces");

  std::vector<chesspiece> pcs {};

  pcs.push_back(chesspiece(0, 0, "KING", color, core::game::KING));
  pcs.push_back(chesspiece(0, 0, "QUEEN", color, core::game::QUEEN));
  
  // Initialize everything except KING, QUEEN and pawns
  for (int piece = core::game::ROOK; piece < core::game::PAWN; piece++) {
    for (auto i = 0; i < NUMBER_OF_DOUBLE_PIECES; i++) {
      pcs.push_back(chesspiece(0, 0, "NAME", color, static_cast<core::game::piecetype>(piece)));
    }
  }
  
  for (auto pawn = 0; pawn < MAXIMUM_NUMBER_OF_PAWNS; pawn++) {
    pcs.push_back(chesspiece(0, 0, "PAWN", color, core::game::PAWN));
  }

  return pcs;

}


