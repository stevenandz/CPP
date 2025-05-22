#ifndef CALCULATOR_H
#define CALCULATOR_H

void validate_input();

template <typename data>
data prompt_for_data(std::string_view prompt);

template <typename type, typename data, typename symbol>
type print_operation(data first, symbol operation, data second);

template <typename symbol, typename data>
symbol complete(data first, symbol operation, data second);

#endif