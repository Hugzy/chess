#pragma once

#include <string>
#include <vector>

#include "../models/chessboard.hpp"
#include "../models/chesspiece.hpp"
#include "../models/piecetype.hpp"
#include "../core/debug.h"

namespace factory {
  chessboard initialize_chessboard();

  chesspiece initialize_chesspiece();
}
