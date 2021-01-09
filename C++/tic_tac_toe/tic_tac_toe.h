#pragma once

#include <vector>
using std::vector;

void generate_board(const vector<vector<int>> &);
bool incomplete(const vector<vector<int>> &);
void easy_mode(vector<vector<int>> &);
void hard_mode(vector<vector<int>> &);