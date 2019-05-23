#pragma once

#include <string>

#include "../core/color.hpp"
#include "../models/piecetype.hpp"
#include "../core/debug.h"

namespace factory {
  namespace message {

    std::string get_color_name(core::game::color color, bool uppercase = true);

    std::string get_piece_name(core::game::piecetype type, bool uppercase = true);

  }
}
