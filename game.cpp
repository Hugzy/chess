#include "game.h"

void announce (std::string msg) {

  std::cout << "[GAME] " << msg << std::endl;

}

void print_pieces(std::vector<chesspiece> &vec){

  for (auto piece : vec) {
    announce("piece " + piece.name + " x:" + std::to_string(piece.x) + " y: " + std::to_string(piece.y));
  }
}

void print_board_state(chessboard &board) {
  announce("---White pieces---");
  print_pieces(board.white_pieces);
  announce("---Black pieces---");
  print_pieces(board.black_pieces);

}

void play(game &g) {

  bool gameplay = true;
  int turn = 1;
  chessboard board = factory::model::initialize_chessboard();

  while(gameplay) {
    print_board_state(board);
    std::string input;
    announce("Please enter where a piece should be moved to on the form piecelocation:new location");
    std::cin >> input;

    core::util::debug(core::util::LogLevel::INFO, "Game is running");
    announce("turn:" + std::to_string(board.turn));
    if (input == "q") {
      gameplay = false;
    }

    

    // Handle the atual gameplay in loop
    //

  }
}
