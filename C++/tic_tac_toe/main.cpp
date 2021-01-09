#include <iostream>
using std::cout, std::endl, std::cin;
#include <vector>
using std::vector;

#include "tic_tac_toe.h"

int main() {
  cout << "Would you like to play tic-tac-toe? (y/n): " << endl;
  char repeat;
  cin >> repeat;
  while (cin.fail()) { // Input validity checking
    cin.clear();
    cin.ignore();
    cout << "Invalid input! Please enter y (yes) or n (no)" << endl;
    cin >> repeat;
  }
  repeat = tolower(repeat);
  while (repeat == 'y') {
    cout << "Easy or Hard mode (e/h): " << endl;
    char difficulty;
    cin >> difficulty;
    difficulty = tolower(difficulty);
    while(cin.fail() || difficulty != 'h' || difficulty != 'e') {
      cin.clear();
      cin.ignore();
      cout << "Invalid input! Please enter e (easy) or h (hard)" << endl;
      cin >> difficulty;
      difficulty = tolower(difficulty);
    }
    vector<int> row(3,0);
    vector<vector<int>> board(3, row);
    if (difficulty == 'e') {
      easy_mode(board);
    }
    else {
      hard_mode(board);
    }
  }
}