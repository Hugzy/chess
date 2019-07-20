#pragma once

#include "../models/chesspiece.hpp"
#include "../models/chessboard.hpp"
#include "../models/piecetype.hpp"

#include "../core/debug.h"

bool can_move_piece_to_location(char x, char y, chesspiece& cp);

