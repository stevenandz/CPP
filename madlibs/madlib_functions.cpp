#include <fstream>
#include <vector>
#include "madlib.h"

template<typename grammer>
Madlib<grammer>::Madlib(grammer singular_noun,
        grammer plural_noun, grammer present_tense_verb) :
        singular{singular_noun},
        plural{plural_noun},
        present{present_tense_verb} {/*No Body*/}

       
template <typename grammer>
const grammer Madlib<grammer>::GetSingular() {return singular;}

template <typename grammer>
const grammer Madlib<grammer>::GetPlural() {return plural;}

template <typename grammer>
const grammer Madlib<grammer>::GetPresent() {return present;}

template <typename word>
word prompt_for_word(std::string_view prompt) {
  std::cout << prompt;
  word input{};
  std::getline(std::cin, input);
  return input;
}

std::vector<std::string> ReadWords(const std::string& filename) {
  std::ifstream file(filename);  // input file-stream
  std::vector<std::string> legal_words;
  std::string words;
  if (file.good()) {
    while(std::getline(file, words, '\n')) {
      legal_words.push_back(words);
    }
  } else {
    std::cerr << "error: file is malformed!\n";
  }

  return legal_words;
}

bool MatchWords(const std::vector<std::string>& document,
               std::string_view word) {
            
  for (std::string_view read : document) {
    if (read == word) {
      return true;
    }
  }

  return false;
}