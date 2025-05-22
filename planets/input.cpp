#include <iostream>
#include <fstream>
#include <string>

template <typename data>

data prompt_for_data(std::string_view query) {
  std::cout << query;
  data input;
  std::cin >> input;
  return input;
}

int main(void) {
  std::ofstream planets("planets.txt");
  int count{8};
  if (planets.good()) {
    std::string planet;
    std::string_view grammer{" planets"};
    while (true) {
        if (count == 1) {
            grammer = " planet";
        }
        std::cout << "You have: " << count << grammer << " left!\n";
        planet = prompt_for_data<std::string>("Enter a planet: ");
        planet[0] = toupper(planet[0]);
        planets << planet << '\n';
        count--;
        if (count == 0) {
            break;
        }
    }
    planets.close();   
  }
}