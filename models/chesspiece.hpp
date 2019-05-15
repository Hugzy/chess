#pragma once
#include <string>
#include "piecetype.hpp"
#include "../core/color.hpp"

struct chesspiece {
  chesspiece(int _x, int _y, std::string _name, core::game::color _color, core::game::piecetype _type): x(_x), y(_y), name(_name), color(_color), type(_type) {}
  int x;
  int y;
  std::string name;
  core::game::color color;
  core::game::piecetype type;
};
