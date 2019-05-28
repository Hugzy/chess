#pragma once
#include <vector>
#include <string>
#include "chesspiece.hpp"

struct chessboard {
  chessboard(int &_turn, std::vector<chesspiece> _white_pieces, std::vector<chesspiece> _black_pieces ) : turn(_turn), white_pieces(_white_pieces), black_pieces(_black_pieces) {}
  chesspiece get_piece(char x, char y) {
    std::vector<chesspiece> tmp(white_pieces);
    tmp.insert(white_pieces.end(), black_pieces.begin(), black_pieces.end());

    for(auto pc : tmp){
      if(pc.x == x && pc.y == y){
        return pc;
      }
    }
    return nullptr;
  }
  int turn;
  std::vector<chesspiece> white_pieces;
  std::vector<chesspiece> black_pieces;
};


