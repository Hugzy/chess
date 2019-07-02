#pragma once

#include <string>
#include <vector>
#include "../models/chessboard.hpp"
#include "../models/chesspiece.hpp"
#include "../models/piecetype.hpp"
#include "../models/result.hpp"
#include "../core/color.hpp"
#include "../factories/factory.h"
#include "debug.h"

namespace core{
  namespace game {
    chessboard correct_board(chessboard& board);
    result<chesspiece> get_piece(char x, char y, chessboard& cb);
  }
}
