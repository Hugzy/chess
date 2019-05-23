#include "message_factory.h"

std::string factory::message::get_color_name(core::game::color color, bool uppercase) {
  switch(color) {
    case core::game::WHITE:
      if (uppercase) {
        return "WHITE";
      }       
      return "white";
    case core::game::BLACK:
      if (uppercase) {
        return "BLACK";
      }
      return "black";
  }
  core::util::debug(core::util::LogLevel::ERROR, "unknown color");
  return "unknown color";
}

std::string factory::message::get_piece_name(core::game::piecetype type, bool uppercase) {

  switch(type) {

    case core::game::ROOK:
      if(uppercase) {
        return "ROOK";
      }
      return "rook";

    case core::game::BISHOP:
      if(uppercase) {
        return "BISHOP";
      }
      return "bishop";

    case core::game::KNIGHT:
      if(uppercase) {
        return "KNIGHT";
      }
      return "knight";

    case core::game::PAWN:
      if(uppercase) {
        return "PAWN";
      }
      return "pawn";

    case core::game::KING:
      if(uppercase) {
        return "KING";
      }
      return "king";

    case core::game::QUEEN:
      if(uppercase) {
        return "QUEEN";
      }
      return "queen";

    case core::game::NONE:
      break;
  }

  core::util::debug(core::util::LogLevel::ERROR, "unknown piece");
  return "unknown piece";

}
