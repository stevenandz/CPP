#include <iostream>
#include <string>
#include <string_view>
#include <vector>

#include "madlib_functions.cpp"


int main() {

  std::string_view* prompt_pointer{nullptr};

  std::vector<std::string> legal_singular{ReadWords("singular_noun.txt")};
  std::string_view prompt{"Enter a singular noun: "};
  prompt_pointer = &prompt;
  std::string singular_noun;

  do {
    singular_noun = prompt_for_word<std::string>(prompt);
  } while (!MatchWords(legal_singular, singular_noun));

  std::vector<std::string> legal_plural{ReadWords("plural_noun.txt")};
  *prompt_pointer = "Enter a plural noun: "; // change the value of the pointer!
  std::string plural_noun;

  do {
    plural_noun = prompt_for_word<std::string>(prompt);
  } while (!MatchWords(legal_plural, plural_noun));

  std::vector<std::string> legal_present{ReadWords("present.txt")};
  *prompt_pointer = "Enter a present tense verb: ";
  std::string present_tense_verb;

  do {
    present_tense_verb = prompt_for_word<std::string>(prompt);
  } while (!MatchWords(legal_present, present_tense_verb));

  Madlib<std::string> phrase{singular_noun, plural_noun, present_tense_verb};

  std::cout << '\n';

  std::cout << phrase << '\n';

  return 0;

}