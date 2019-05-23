#pragma once

#include <string>
#include <vector>

#include "../models/chessboard.hpp"
#include "../models/chesspiece.hpp"
#include "../models/piecetype.hpp"
#include "../core/color.hpp"
#include "../core/debug.h"
#include "message_factory.h"
namespace factory {
  namespace model {
  std::vector<chesspiece> obtain_default_pieces(core::game::color color);
  
  chessboard initialize_chessboard();

  chesspiece initialize_chesspiece();
  }
}
