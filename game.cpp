#include "game.h"

void announce (std::string msg) {

  std::cout << "[GAME] " << msg << std::endl;

}

void move(chesspiece &piece, char x, char y) {
    piece.x = x;
    piece.y = y;
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
    announce("Please enter the location of the piece that should move");
    while(true){
      std::cin >> input;
      // Officially board.get_piece should return a nullptr if the piece doesn't exist
      if(auto piece = board.get_piece(char x, char y); piece != nullptr) {
        
      }
    }
    

    core::util::debug(core::util::LogLevel::INFO, "Game is running");
    announce("turn:" + std::to_string(board.turn));
    if (input == "q") {
      gameplay = false;
    }

    

    // Handle the atual gameplay in loop
    //

  }
}
