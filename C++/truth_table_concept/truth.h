#pragma once

#include <vector>
using std::vector;
#include <string>
using std::string;
#include <sstream>
using std::ostream;

void Interface();

class Truth {
  public:
    Truth(const int &);
    friend ostream &operator<<(ostream &, const Truth &);
  private:
    vector<vector<int>> table;
    int variables;
    string first_line;
};

ostream &operator<<(ostream &, const Truth &);