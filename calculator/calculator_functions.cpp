#include <limits>
#include <string_view>

#include "calculator.h"

void validate_input() {
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


// Awww snap, template madness!

template <typename data>
data prompt_for_data(std::string_view prompt) {
  data input;
  while(true) {
    std::cout << prompt;
    std::cin >> input;
    if (!std::cin) {
      std::cin.clear(); // clear the input :)
      validate_input(); // ignore the streamize until the new line :o
      continue;
    }
    validate_input();
    return input;
  }
}

template <typename type, typename data, typename symbol>
type print_operation(data first, symbol operation, data second) {

  /*change the operator into its math equivalent*/
  std::cout << first << " " << operation << " " << second << " is: ";
  switch(operation) {
    case '*':
      std::cout << first * second << '\n';
      break;
    case '/':
      std::cout << first / second << '\n';
      break;
    case '+':
      std::cout << first + second << '\n';
      break;
    case '-':
      std::cout << first - second << '\n';
      break;
  }
}

template <typename symbol, typename data>

symbol complete(data first, symbol operation, data second) {
  while (true) {
    operation = prompt_for_data<char>("Enter a math operator[*, /, +, -]: ");
    switch(operation) {
      case '*':
      case '/':
      case '+':
      case '-':
        print_operation<void, double, char>(first, operation, second);
        return operation;
      default:

        /*
         * Since this is inside a while True loop,
         * the switch-case will keep repeating until 
         * a valid operator is recieved
         */

        std::cout << "error: invalid operator'\n";
    }
  }
}