#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

#include "patient.cpp"

int main() {
  std::ifstream file("patients.txt");
  std::vector<Patient> database;

  std::string name, condition;
  int age;
  std::string line;

  while (std::getline(file, line)) {
    std::stringstream stream{line}; // put the string into a stringstream!
    std::string age;                // string age to make it stoi later!

    if (!std::getline(stream, name, ',')) {
        continue;
    }
    if (!std::getline(stream, condition, ',')) {
        continue;
    }

    if (!std::getline(stream, age, ',')) {
        continue;
    }
    database.emplace_back(name, condition, std::stoi(age));
  }

  Patient read{" ", " ", 0};
  std::cout << "The current database is: \n";
  for (Patient& read : database) {
    std::cout << read << '\n';
  }

  std::cout << '\n';

  std::string patient_name;
  std::cout << "Enter a patient name: ";
  std::cin >> string;

  bool did_find{false};

  Patient bogus{" ", " ", 0};
  for (Patient& read : database) {
    if (read.GetName() == patient_name) {
      did_find = true;
      bogus = read;
      break;
    }
  } 

  if (did_find) {
    std::cout << "Found " << bogus.GetName()
              << " who has " << bogus.GetCondition() << '\n';
  } else {
    std::cout << "Did not find " << name << '\n';
  }

  return 0;
}