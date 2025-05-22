#ifndef MADLIB_H
#define MADLIB_H

template <typename grammer>

// templated types makes this a template class!
class Madlib {
 public:
  Madlib(grammer singular_noun, grammer plural_noun, grammer present_tense_verb);

  const grammer GetSingular();  // accessor functions muhahaha
  const grammer GetPlural();
  const grammer GetPresent();

  friend std::ostream& operator<<(std::ostream& out,
                                  Madlib phrase) {

    // I can use the member variables themselves
    // since this is a friend function!

    out << "Computers are small enough to fit into a "
        << phrase.singular << ".\n";
                          
    out << "Computers can add, multiply, divide, and "
        << phrase.present << ".\n";
                          
    out << "People can " << phrase.present
        << " too but computers do it better.\n";
                          
    out << "Computers have many " << phrase.plural
        << " which gives them the advantage\n";
                          
    out << "over many computational tasks.";
                          
    return out;
  }
 private:
  grammer singular{};
  grammer plural{};
  grammer present{};
};

template <typename word>

word prompt_for_word(std::string_view prompt);

std::vector<std::string> ReadWords(const std::string& filename);

bool MatchWords(const std::vector<std::string>& document,
               std::string_view word);

#endif