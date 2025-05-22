#ifndef BOOK_H
#define BOOK_H

class Book {
public:
Book() = default;

  void read_book(const std::string& filename);

private:
int word_count{0};
std::stringstream passage_;
};

#endif