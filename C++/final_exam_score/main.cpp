#include <iostream>
using std::cout, std::cin;

#include "final_exam_score.h"

int main() {
  system("color 70"); // Setting white background and black foreground
  char repeat = 'y'; // Setting repeat variable
  do {
    system("cls");
    cout << "What is your current grade percentage?: ";
    double current_grade;
    cin >> current_grade;
    while (cin.fail()) { // Input validity checking
      current_grade = ErrorProtocol(1);
    }
    cout << "\nWhat would you like your final grade percentage to be?: ";
    double target_grade;
    cin >> target_grade;
    while (cin.fail()) {
      target_grade = ErrorProtocol(2);
    }
    cout << "\nWhat percentage of your grade is your final worth?: ";
    double final_weight;
    cin >> final_weight;
    while (cin.fail()) {
      final_weight = ErrorProtocol(3);
    }
    double needed_grade = calculations(current_grade, target_grade, 
      final_weight);
    MessagePrinter(needed_grade, target_grade);
    cout << "Would you like to repeat the calculations? Enter (y or n): ";
    cin >> repeat;
    while (cin.fail()) {
      repeat = ErrorProtocol(4);
    }
    repeat = tolower(repeat);
    while (repeat != 'y' && repeat != 'n') {
      cout << "\nInvalid Input! Please enter y (yes) or n (no): ";
      cin >> repeat;
      while (cin.fail()) {
          repeat = ErrorProtocol(4);
      }
      repeat = tolower(repeat);
    }
  } while (repeat == 'y');
}