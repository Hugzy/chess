#pragma once
#include <string>
#include "piecetype.hpp"
#include "../core/color.hpp"

struct chesspiece {
  chesspiece(char _x, char _y, std::string _name, core::game::color _color, core::game::piecetype _type): x(_x), y(_y), name(_name), color(_color), type(_type) {}
  char x;
  char y;
  std::string name;
  core::game::color color;
  core::game::piecetype type;
  bool is_white() {
    return color == core::game::color::WHITE;
  };
};
