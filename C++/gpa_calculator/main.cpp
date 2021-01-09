#include <iostream>
using std::cout, std::endl, std::cin;

#include "gpa_calc.h"

int main() {
  char repeat = 'y';
  do {
    system("cls");
    cout << "How many classes are you taking? " << endl;
    int classes;
    cin >> classes;
    while (cin.fail()) { // Input Checking
      cin.clear();
      cin.ignore();
      cout << "Invalid Input!\nPlease Enter an integer!" << endl;
      cin >> classes;
    }
    system("cls");
    double total_points = 0;
    double points;
    int credits;
    int total_credits = 0;
    for (int i = 1; i <= classes; ++i) {
      points = ClassGrade(i, credits);
      total_credits += credits;
      total_points += points;
    }
    double total_gpa = total_points/total_credits;
    system("cls");
    cout << "Your GPA is " << total_gpa << "!\n" << endl;
    if (total_gpa > 3) {
      cout << "\nKeep up the great work!\n" << endl;
    }
    cout << "Would you like to calculate again? (y/n): ";
    cin >> repeat;
    repeat = tolower(repeat);
    while (cin.fail()) {
      cin.clear();
      cin.ignore();
      cout << "Invalid Input!\nPlease a single character!" << endl;
      cin >> repeat;
    }
  } while (repeat == 'y');
}