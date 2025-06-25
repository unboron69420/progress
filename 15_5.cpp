#include <iostream>

int main() {
  int x = 1000;

  int *p = &x;

  std::cout << p << '\n';
  std::cout << &x << '\n';
  std::cout << *p << '\n';

  *p = 100;
  std::cout << x << '\n';

  int *dynP = new int(200);
  std::cout << *dynP << '\n';
  delete dynP;

  return 0;
}
