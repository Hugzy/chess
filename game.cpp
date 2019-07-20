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

  const std::string delimiter = ",";
  bool gameplay = true;
  int turn = 1;
  chessboard board = factory::model::initialize_chessboard();
  core::util::debug(core::util::LogLevel::INFO, "made it this far");
  board = core::game::correct_board(board);
  print_board_state(board);
  while(gameplay) {
    std::string input;
    announce("Please enter the location of the piece that should move");
    announce("Type 'q' to exit");
    announce("the format of the string should be <piece to move>,x position,y position without spaces between commas");

    //while(true) {
      // #region ensure valid userinput, both it being resonable and within what the game allows through its rules.
      std::cin >> input;
    core::util::debug(core::util::LogLevel::INFO, "Game is running");
    if (input == "q") {
      // for good measure
      gameplay = false;
      break;
    }
    announce("turn:" + std::to_string(board.turn));
    std::string piece = input.substr(input.find(delimiter));
    announce("piece is: " + piece);
    input.erase(0,input.find(delimiter) + delimiter.length());
    std::string input_x = input.substr(input.find(delimiter));
    announce("x is: " + input_x);
    input.erase(0,input.find(delimiter) + delimiter.length());
    std::string input_y = input.substr(input.find(delimiter));
    announce("y is: " + input_y);
    input.erase(0, input.find(delimiter) + delimiter.length());
      

    char x = input_x[0];
    char y = input_y[0];
    if(auto result = core::game::get_piece(x, y, board); result.has_result) {
    // Handle the atual gameplay in loop
    //
    }
  }
}
//}
