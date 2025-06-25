#include <iostream>
#include <string>

class Book {

private:
  std::string title;
  int pages;

public:
  Book() {
    title = "Untitled";
    pages = 69;
    std::cout << "defaul book created\n";
  }
  // creating a parameterised constructor
  Book(std::string t, int p) : title(t), pages(p) {
    std::cout << title << " created (" << pages << "pages) \n";
  }

  // destructor
  ~Book() { std::cout << title << "destroyed\n"; }

  void describe() { std::cout << title << "-" << pages << "pages\n"; }
};

int main() {
  Book book1;
  Book book2("cpp book", 1000);

  Book *book3 = new Book("clean code", 200);

  book1.describe();
  book2.describe();
  book3->describe();

  delete book3;

  return 0;
}
