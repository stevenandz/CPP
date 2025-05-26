#include <iostream>
#include <fstream> // for std::ofstream
#include <string>
#include <memory> // for std::unique_ptr

#include "patient.cpp"

template <class type>

type prompt_for_data(std::string_view prompt) {
  patient input;
  while (true) {
    std::cout << prompt;
    if (std::cin >> input) {
      std::cin.ignore(100, '\n');
      return input;
    } else {
      std::cin.clear();
      std::cin.ignore(100, '\n');
      std::cerr << "error: invalid input\n";
    }
  }
}

int main() {

  std::ofstream file("patients.txt");

  int range{prompt_for_data<int>("Enter number of patients: ")};

  for (int count{0}; count < range; ++count) {
    auto pointer{std::make_unique<Patient>(
      prompt_for_data<Patient>("Enter name, condition, and age: "))};
    file << *pointer << '\n';  
  }

  return 0;
}