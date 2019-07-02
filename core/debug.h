#pragma once
#include <iostream>
#include <string>
#include "CONSTANTS.h"

namespace core {
  namespace util {
    enum LogLevel {
      INFO,
      WARNING,
      ERROR,
      DEBUG
    };

    void debug(const util::LogLevel &l, const std::string &msg);

    void print(const std::string &msg);

    void print_inline(const std::string msg);
  }
}
/*namespace blocks {
  void print_chess_square() {
    print(CORNER);
    print(V_SEPERATOR);
    print(NEW_LINE);
    print(H_SEPERATOR);
    print(TAB);
    print(H_SEPERATOR);
    print(NEW_LINE);
    print(CORNER);
    print(V_SEPERATOR);
  }
}*/
