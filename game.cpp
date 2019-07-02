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
    announce("piece " + piece.name + " x: " + piece.x + " y: " + piece.y);
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
  core::util::debug(core::util::LogLevel::INFO, "made it this far");
  board = core::game::correct_board(board);
  print_board_state(board);
  while(gameplay) {
    std::string input;
    announce("Please enter the location of the piece that should move");
    char x = 'a';
    char y = '1';
    while(true) {
      // #region ensure valid userinput, both it being resonable and within what the game allows through its rules.
      std::cin >> input;
      //todo assign x and y here
    }
    
    if(auto result = core::game::get_piece(x, y, board); result.has_result) {
      
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
