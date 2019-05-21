#pragma once

#include "models/chessboard.hpp"
#include "models/chesspiece.hpp"
#include "models/piecetype.hpp"
#include "core/color.hpp"
#include "core/debug.h"
#include "factories/factory.h"

struct game {
};

std::vector<chesspiece> initialize_pieces(core::game::color color);

void play(game &g);




