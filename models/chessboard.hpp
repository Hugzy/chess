#pragma once
#include <vector>
#include <string>
#include "chesspiece.hpp"

struct chessboard {
  chessboard(int &_turn, std::vector<chesspiece> _white_pieces, std::vector<chesspiece> _black_pieces ) : turn(_turn), white_pieces(_white_pieces), black_pieces(_black_pieces) {}
  int turn;
  std::vector<chesspiece> white_pieces;
  std::vector<chesspiece> black_pieces;
};
