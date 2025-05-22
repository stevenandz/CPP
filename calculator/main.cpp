#include <iostream>

#include "calculator_functions.cpp"

int main(void) {
  double first{prompt_for_data<double>("Enter a number: ")};
  double second{prompt_for_data<double>("Enter another number: ")};
  char arithmetic;
  complete<char, double>(first, arithmetic, second);
}