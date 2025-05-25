#include <iostream>
#include <fstream>
#include <unordered_set>

#include "planets.h"

void read_planets(const std::string& filename,
                 std::unordered_set<std::string>& words_set) {
  std::ifstream file(filename);
  std::string planet;
  while(std::getline(file, planet, '\n')) {
    words_set.insert(planet);
  }
}

bool is_valid_planet(const std::string& word,
                    std::unordered_set<std::string>& words_set) {

  return words_set.find(word) != words_set.end();                           
}

template <typename data>

data prompt_for_data(std::string_view prompt) {
  std::cout << prompt;
  data input;
  std::cin >> input;
  return input;
}