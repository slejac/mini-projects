#include <iostream>
using std::cout, std::endl, std::cin;

double GPAFinder(const double &percentage) {
  if (percentage >= 90) {
    return 4;
  } else if (percentage >= 85) {
    return 3.5;
  } else if (percentage >= 80) {
    return 3;
  } else if (percentage >= 75) {
    return 2.5;
  } else if (percentage >= 70) {
    return 2;
  } else if (percentage >= 65) {
    return 1.5;
  } else if (percentage >= 60) {
    return 1;
  } else {
    return 0;
  }
}

double ClassGrade(const int &index, int &credits) {
  cout << "How many credits is class #" << index << "?" << endl;
  cin >> credits;
  while (cin.fail()) { // Input Validity Checking
    cin.clear();
    cin.ignore();
    cout << "Invalid Input!\nPlease Enter an integer!" << endl;
    cin >> credits;
  }
  cout << "What is your percentage grade in class " << index << "?" << endl;
  double percent_grade;
  cin >> percent_grade;
  while (cin.fail()) {
    cin.clear();
    cin.ignore();
    cout << "Invalid Input!\nPlease Enter a percentage (ex: 88.7%)" << endl;
    cin >> percent_grade;
  }
  double gpa = GPAFinder(percent_grade);
  double point_val = gpa * credits;
  return point_val;
}