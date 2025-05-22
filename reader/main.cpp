#include <iostream>
#include <vector>

#include "read_functions.cpp"

int main(int argc, char* argv[]) {
  std::vector<std::string> command{argv, argv + argc};
  if (command.size() != 2) {
    std::cout << "error: there must be a file name.\n";
    return 1;
  }

  std::string file{command[1]};
  Book text;
  text.read_book(file);

  return 0;
}