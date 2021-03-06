#pragma once

#include "models/chessboard.hpp"
#include "models/chesspiece.hpp"
#include "models/piecetype.hpp"
#include "core/color.hpp"
#include "core/debug.h"
#include "core/board_functions.h"
#include "factories/factory.h"
struct game {
};

void announce(std::string msg);


void move(chessboard &board, chesspiece &piece, char x, char y);

void play(game &g);

void print_board_state(chessboard &board);


