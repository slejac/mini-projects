#include <iostream>
using std::cout, std::endl, std::cin;
#include <map>
using std::map;
#include <string>
using std::string;

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
  while(cin.fail()) {
    cin.clear();
    cin.ignore();
    cout << "Invalid Input!\nPlease Enter an integer!" << endl;
    cin >> credits;
  }
  cout << "What is your percentage grade in class " << index << "?" << endl;
  double percent_grade;
  cin >> percent_grade;
  while(cin.fail()) {
    cin.clear();
    cin.ignore();
    cout << "Invalid Input!\nPlease Enter a percentage (ex: 88.7%)" << endl;
    cin >> percent_grade;
  }
  double gpa = GPAFinder(percent_grade);
  double point_val = gpa * credits;
  return point_val;
}

int main() {
  cout << "How many classes are you taking? " << endl;
  int classes;
  cin >> classes;
  while(cin.fail()) {
    cin.clear();
    cin.ignore();
    cout << "Invalid Input!\nPlease Enter an integer!" << endl;
    cin >> classes;
  }
  double total_points = 0;
  double points;
  int credits;
  int total_credits = 0;
  for(int i = 1; i <= classes; ++i) {
    points = ClassGrade(i, credits);
    total_credits += credits;
    total_points += points;
  }
  double total_gpa = total_points/total_credits;
  cout << "\nYour GPA is " << total_gpa << "!\n" << endl;
  if(total_gpa > 3) {
    cout << "\nKeep up the great work!\n" << endl;
  }
}