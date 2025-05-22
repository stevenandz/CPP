#include <iostream>
#include <iomanip>
#include <string>
#include <string_view>

#include "bmr_functions.cpp"

int main(void) {

  // aww yeah, polymorphism time!
  BMR* parent_pointer{nullptr};
  char gender{};
  do {
    gender = prompt_for_data<char>("Enter gender[m/w]: ");
  } while (!std::cin);

  std::string_view calories{" calories per day.\n"};

  if (is_either(gender)) {
    double weight{prompt_for_data<double>("Enter weight in pounds: ")};
    double height{prompt_for_data<double>("Enter height in inches: ")};
    int age{prompt_for_data<int>("Enter age in years: ")};
    if (gender == 'm') {

       // parents points to child class w/ child class constructor

        parent_pointer = new Man{weight, height, age};

        std::cout << "Man: " << parent_pointer->calculate_bmr()
                << calories;

        delete parent_pointer;

    } else if(gender == 'w') {

        parent_pointer = new Woman{weight, height, age};

        std::cout << "Woman: " << parent_pointer->calculate_bmr()
                << calories;
                
        delete parent_pointer;
    } 
  } else {
    std::cerr << "gender could not be found for calculation!\n";
  }
}