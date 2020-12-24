#include <iostream>
using std::cout, std::cin, std::endl;
#include <fstream>
using std::ifstream;
#include <string>
using std::string;
#include <map>
using std::map;
#include <cctype>

void map_printer(const map<string, int> &text_map) {
  for(auto element: text_map) {
    cout << element.second << " " << element.first << "'s, ";
  }
}

//void replacer()

int main() {
  cout << "Using essay.txt!\n" << endl;
  ifstream essay("essay.txt");
  string word, formatted_word;
  int word_ct = 0;
  map<string, int> text;
  while(essay >> word) {
    for(char letter: word) {
      if(isupper(letter)) {
        formatted_word.push_back(tolower(letter));
      }
      else if(isalnum(letter)) {
        formatted_word.push_back(letter);
      }
    }
    auto confirm = text.insert({formatted_word, 1});
    if(confirm.second == 0) {
      text[formatted_word]++;
    }
    formatted_word.clear();
    ++word_ct;
  }
  cout << "There are " << word_ct << " words in your essay: ";
  map_printer(text);
  cout << "Would you like to replace any words? (y/n)" << endl;
  char response;
  cin >> response;
  if(response == 'Y' || response == 'y') {
    //replacer(text);
  }
  else {
    cout << "Thank you!";
  }
  return 0;
}