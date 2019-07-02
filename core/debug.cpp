#include "debug.h"

void core::util::debug(const LogLevel &l, const std::string &msg) {
  switch(l) {
    case LogLevel::INFO:
      std::cout << "[INFO] " << msg << std::endl;
      break;
    case LogLevel::WARNING:
      std::cout << "[WARNING] " << msg << std::endl;
      break;
    case LogLevel::ERROR:
      std::cout << "[ERROR] " << msg << std::endl;
      break;
    case LogLevel::DEBUG:
      std::cout << "[ERROR] " << msg << std::endl;
      break;
  }
}

void core::util::print(const std::string &msg) {
  std::cout << msg;
}

void core::util::print_inline(const std::string msg) {
  std::cout << msg;
}
