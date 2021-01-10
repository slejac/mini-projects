#include <iostream>
using std::cout, std::cin, std::endl;
#include <conio.h>

#include "final_exam_score.h"

// Input Error Clear and Re-Entering
double ErrorProtocol(const int &msg) {
  double value;
  while (cin.fail()) {
    cin.clear();
    cin.ignore();
    switch (msg) {
      case 1:
        cout << "\nInvalid Input! Please enter your current grade: ";
        break;
      case 2:
        cout << "\nInvalid Input! Please enter your target grade: ";
        break;
      case 3:
        cout << "\nInvalid Input! Please enter the percentage weight of your final: " ;
        break;
      default:
        cout << "\nWould you like to repeat the calculations? ";
        cout << "Enter (y or n): ";
        break;
    }
    cin >> value;
  }
  return value;
}

double calculations(const double &current, const double &target, const double &weight) {
  double current_points = ((100 - weight) * current)/100;
  double needed = ((target - current_points)/weight) * 100;
  return needed;
}

// MessagePrinter function, printing your goal score
void MessagePrinter(const double &needed, const double &target) {
  system("cls");
  if (needed > 100) {
    cout << "Uh oh, that's impossible!" << endl;
  } else if (needed > 75) {
    cout << "Make sure to study on this one!" << endl;
  } else if (needed > 0) {
    cout << "You got this!" << endl;
  } else {
    cout << "You don't even have to take the final! Great Work!";
  }
  cout << "You need to earn at least " << needed << "% on your final";
  cout << " if you would like to score at least " << target << "%" << endl;
  cout << "\nEnter any key to continue: ";
  getch();
  system("cls");
}