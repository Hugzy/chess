#include "factory.h"


 std::vector<chesspiece> factory::model::obtain_default_pieces(core::game::color color) {

  const int MAXIMUM_NUMBER_OF_PAWNS = 8;
  const int NUMBER_OF_DOUBLE_PIECES = 2;

  core::util::debug(core::util::LogLevel::INFO, "initializing set of "+ factory::message::get_color_name(color) +" pieces");

  std::vector<chesspiece> pcs {};
  std::vector<std::string> piece_names {"ROOK", "BISHOP", "KNIGHT"};
 
  core::util::debug(core::util::LogLevel::INFO, "Instantiating "+ factory::message::get_color_name(color) + " KING");
  pcs.push_back(chesspiece('0', '0', "KING", color, core::game::KING));
  core::util::debug(core::util::LogLevel::INFO, "Instantiating " + factory::message::get_color_name(color) + " QUEEN");
  pcs.push_back(chesspiece('0', '0', "QUEEN", color, core::game::QUEEN));
  
  // Initialize everything except KING, QUEEN and pawns
  for (int piece = core::game::ROOK; piece < core::game::PAWN; piece++) {
    for (auto i = 0; i < NUMBER_OF_DOUBLE_PIECES; i++) {
      // Initialization now has a direct dependency on piecetype enum ordering!
      core::util::debug(core::util::LogLevel::INFO, "Instantiating " + factory::message::get_color_name(color) + " " + piece_names[piece]);
      pcs.push_back(chesspiece('0', '0', piece_names[piece] , color, static_cast<core::game::piecetype>(piece)));
    }
  }
  
  for (auto pawn = 0; pawn < MAXIMUM_NUMBER_OF_PAWNS; pawn++) {
    core::util::debug(core::util::LogLevel::INFO, "Instantiating " + factory::message::get_color_name(color) + " PAWN");
    pcs.push_back(chesspiece('0', '0', "PAWN", color, core::game::PAWN));
  }

  return pcs;
}

chesspiece factory::model::initialize_chesspiece(){
  return chesspiece('0','0',"piece initialized from factory", core::game::WHITE, core::game::PAWN);
}

chessboard factory::model::initialize_chessboard() {
  debug(core::util::LogLevel::INFO, "instantiating chessboard");
  int turn = 0;
  auto white_pieces = factory::model::obtain_default_pieces(core::game::WHITE);
  auto black_pieces = factory::model::obtain_default_pieces(core::game::BLACK);
  return chessboard(turn, white_pieces, black_pieces);
}

