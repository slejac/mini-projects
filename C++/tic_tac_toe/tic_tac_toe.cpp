#include <vector>
using std::vector;
#include <iostream>
using std::cout, std::endl;
#include <string>
using std::string;

#include "tic_tac_toe.h"

void generate_board(const vector<vector<int>> &board) {
  cout << endl;
  for(int row = 0; row < static_cast<int>(board.size()); ++row) {
    for(int column = 0; column < static_cast<int>(board[row].size()); ++column) {
      if(column > 0) {
        cout << " | ";
      }
      if(board[row][column] == 0) {
        cout << " ";
      }
      else if(board[row][column] == 1) {
        cout << "X";
      }
      else {
        cout << "O";
      }
    }
    if(row != (static_cast<int>(board.size()) - 1)) {
      string newline(9, '-');
      cout << endl << newline << endl;
    }
  }
  cout << endl << endl;
}

bool incomplete(const vector<vector<int>> &board) {
  for (const vector<int> &row: board) {
    for (const int &column: row) {
      if(board[row][column] == 0) {
        return 1;
      }
    }
  }
}

void easy_mode(vector<vector<int>> &board) {
  while(incomplete(board)) {
    
  }
}

void hard_mode(vector<vector<int>> &board) {
  while(incomplete(board)) {

  }
}