#pragma once
#include "models/chessboard.hpp"
#include "models/chesspiece.hpp"
#include "models/piecetype.hpp"
#include "core/color.hpp"
#include "core/debug.h"

struct game {
};

std::vector<chesspiece> initialize_pieces(core::game::color color);

void play(game &g);




