#include "board_functions.h"

void set_piece_location(char x, char y, chesspiece& pc) {
  pc.x = x;
  pc.y = y;
}

result<chesspiece> get_piece(char x, char y, chessboard& cb) {
    std::vector<chesspiece> tmp(cb.white_pieces);
    tmp.insert(cb.white_pieces.end(), cb.black_pieces.begin(), cb.black_pieces.end());

    for(auto pc : tmp){
      if(pc.x == x && pc.y == y){
        return result<chesspiece>{
          true,
          pc
        };
      }
    }
    // return default chesspiece should not be used because we say in the result class that no piece exists
    return result<chesspiece> {
      false,
      factory::model::initialize_chesspiece()
    };
}

// Amount corresponds to the amount of a certain chesspiece that exists on the board
void do_correction(int amount, chesspiece& pc) {
    switch(pc.type) {
      case core::game::piecetype::KING:
        if (pc.is_white()) {
          set_piece_location('e', '1', pc);
        } else {
          set_piece_location('e', '8', pc);
        }
        break;
      case core::game::piecetype::QUEEN:
        if(pc.is_white()) {
          set_piece_location('d', '1', pc);
        } else {
          // Piece must be black then
          set_piece_location('d', '8', pc);
        }
        break;
      case core::game::piecetype::KNIGHT:
        if(pc.is_white()){
          if(amount == 0) {
            set_piece_location('b', '1', pc);
          } else {
            set_piece_location('g', '1', pc);
          }
        } else {
          if(amount == 0) {
            set_piece_location('b', '8', pc);
          } else {
            set_piece_location('g', '8', pc);
          }
        }
        break;
      case core::game::piecetype::BISHOP:
        if(pc.is_white()){
          if(amount == 0) {
            set_piece_location('a', '1', pc);
          } else {
            set_piece_location('h', '1', pc);
          }
        } else {
          if(amount == 0) {
            set_piece_location('a', '8', pc);
          } else {
            set_piece_location('h', '8', pc);
          }
        }
        break;
      case core::game::piecetype::ROOK:
        if(pc.is_white()){
          if(amount == 0) {
            set_piece_location('c', '1', pc);
          } else {
            set_piece_location('f', '1', pc);
          }
        } else {
          if(amount == 0) {
            set_piece_location('c', '8', pc);
          } else {
            set_piece_location('f', '8', pc);
          }
        }
        break;
      case core::game::piecetype::PAWN:
        if(pc.is_white()){
          char pos = 'a' + amount;
            set_piece_location(pos, '2', pc);
        } else {
          char pos = 'a' + amount;
          set_piece_location(pos, '7', pc);
        }
        break;
      case core::game::piecetype::NONE:
        std::string msg = "something went wrong piece was null?!?";
        core::util::debug(core::util::ERROR, msg);
        return;
    }
}

chessboard core::game::correct_board(chessboard& board) {
    //std::vector<chesspiece> tmp(board.white_pieces);
    //tmp.insert(board.white_pieces.end(), board.black_pieces.begin(), board.black_pieces.end());
  int knights = 0;
  int bishops = 0;
  int rooks = 0;
  int pawns = 0;
  for(auto& pc : board.white_pieces) {
    switch(pc.type) {
      case core::game::piecetype::KNIGHT:
        do_correction(knights, pc);
        knights += 1;
        break;
      case core::game::piecetype::BISHOP:
        do_correction(bishops, pc);
        bishops += 1;
        break;
      case core::game::piecetype::ROOK:
        do_correction(rooks, pc);
        rooks += 1;
        break;
      case core::game::piecetype::PAWN:
        do_correction(pawns, pc);
        pawns += 1;
        break;
      default:
        std::string msg = "no amount was necessary to be specified piece was either king or queen if not something went very wrong";
        core::util::debug(core::util::INFO, msg);
        do_correction(0, pc);
    }
  }
  knights = 0;
  bishops = 0;
  rooks = 0;
  pawns = 0;
  for(auto& pc : board.black_pieces) {
    switch(pc.type) {
      case core::game::piecetype::KNIGHT:
        do_correction(knights, pc);
        knights += 1;
        break;
      case core::game::piecetype::BISHOP:
        do_correction(bishops, pc);
        bishops += 1;
        break;
      case core::game::piecetype::ROOK:
        do_correction(rooks, pc);
        rooks += 1;
        break;
      case core::game::piecetype::PAWN:
        do_correction(pawns, pc);
        pawns += 1;
        break;
      default:
        std::string msg = "no amount was necessary to be specified piece was either king or queen if not something went very wrong";
        core::util::debug(core::util::INFO, msg);
        do_correction(0, pc);
    }
  }
  

  /*
  for(auto& pc : board.black_pieces) {
    auto s = "correcting piece locations";
    core::util::debug(util::INFO, s);
    pc.x = '1';
    pc.y = '2';
    std::string out = "x: "; 
    out += pc.x;
    out += " y:";
    out += pc.y;
    core::util::debug(util::INFO, out);
  }
  */
  return board;
}


