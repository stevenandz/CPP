#include "bmr.h"

BMR::BMR(double weight, double height, int age) noexcept :
         weight_{weight}, height_{height}, age_{age} {/**/}

void BMR::SetWeight(double weight) {
    if (weight < 0) {
         std::string_view request{"Enter weight greater than 0: "};
         do {
           std::cout << request;
           std::cin >> weight;
         } while (weight < 0);
    }
  this->weight_ = weight;
}

double Man::calculate_bmr() {
  double bmr{(4.536 * weight_) + (15.88 * height_) - (5 * age_) + 5};
  return bmr;
}

double Woman::calculate_bmr() {
  double bmr{(4.536 * weight_) + (15.88 * height_) - (5 * age_) - 161};
  return bmr;
}

void BMR::SetHeight(double height) {
    if (height < 0) {
        std::string_view request{"Enter height greater than 0: "};
         do {
           std::cout << request;
           std::cin >> height;
         } while (height < 0);
    }
       
  this->height_ = height;
}

void BMR::SetAge(int age) {
    if (age < 0) {
      std::string_view request{"Enter age greater than 0: "};
         do {
           std::cout << request;
           std::cin >> age;
         } while (age < 0);
       }
       
    this->age_ = age;
}

template <typename data>
data prompt_for_data(std::string_view prompt) {
  std::cout << prompt;
  data input;
  std::cin >> input;
  return input;
}