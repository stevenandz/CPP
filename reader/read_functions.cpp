#include <string>
#include <sstream>
#include <fstream>
#include <iostream>


#include "read.h"

void Book::read_book(const std::string& filename) {
  std::ifstream file(filename);
  std::string word;
  std::stringstream passage;
  int word_counter{0};
  if (file.good()) {
    while (!file.eof()) {
      std::getline(file, word, ' ');
      switch(file.peek()) {
        case '.':
        case '?':
        case '"':
        case ',':
        case  '-':
          continue;
      }
      word_counter++;
      passage << word << ' ';
    }
  }
  std::cout << passage.str() << '\n';
  std::cout << "The word count is: " << word_counter << " words\n";
}
