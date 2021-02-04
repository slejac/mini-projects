#include <iostream>
using std::cout, std::endl, std::cin;
#include <string>
using std::string;
#include <sstream>
using std::ostream;
#include <conio.h>

#include "truth.h"

Truth::Truth(const int &vars) {
  variables = vars;
  if (variables == 1) {
    vector<int> p = {1,0};
    first_line = "p";
    table.push_back(p);
  } else if (variables == 2) {
    vector<int> p = {1,1,0,0};
    vector<int> q = {1,0,1,0};
    first_line = "p|q";
    table.push_back(p);
    table.push_back(q);
  } else {
    vector<int> p = {1,1,1,1,0,0,0,0};
    vector<int> q = {1,1,0,0,1,1,0,0};
    vector<int> r = {1,0,1,0,1,0,1,0};
    first_line = "p|q|r";
    table.push_back(p);
    table.push_back(q);
    table.push_back(r);
  }
}

ostream &operator<<(ostream &oss, const Truth &t) {
  system("cls");
  string gap(static_cast<int>(t.first_line.size()),'-');
  oss << t.first_line << endl << gap << endl;
  for(int col = 0; col < static_cast<int>(t.table[0].size()); ++col) {
    for(int row = 0; row < static_cast<int>(t.table.size()); ++row) {
      if (t.table[row][col] == 1) {
        oss << "T ";
      } else {
        oss << "F ";
      }
    }
    oss << endl;
  }
  oss << endl;
  return oss;
}

int ErrorHandling() {
  cin.clear();
  cin.ignore();
  cout << "\n\nInvalid Input! Please enter a valid character: ";
  int var;
  cin >> var;
  return var;
}

void Repeat() {
  system("pause");
  Interface();
}

void One(const int &var) {
  SecondaryInterface();
  Truth one_var(var);
  cout << one_var;
}

void Two(const int &var) {
  SecondaryInterface();
  Truth two_var(var);
  cout << two_var; 
}

void Three(const int &var) {
  SecondaryInterface();
  Truth three_var(var);
  cout << three_var; 
}

void Interface() {
  system("cls");
  cout << "Welcome to the Truth Table Generator" << endl;
  cout << "Enter the letter corresponding to your variable count:" << endl;
  cout << "\n\t1 - 1 Variable\n\t2 - 2 Variables\n\t3 - 3 Variables" << endl;
  cout << "\t0 - Exit" << endl;
  cout << "\nEnter Here: ";
  int var;
  cin >> var;
  while (cin.fail()) {
    var = ErrorHandling();
  }
  switch(var) {
    case 1:
      One(var);
      Repeat();
      break;
    case 2:
      Two(var);
      Repeat();
      break;
    case 3:
      Three(var);
      Repeat();
      break;
    case 0:
      system("cls");
      cout << "Thank you for using the Truth Table Generator\n" << endl;
      system("pause");
      break;
    default:
      cout << "Invalid Input!\n" << endl;
      Repeat();
      break;
  }
}