#include <bits/stdc++.h>

class MyClass {
  int x;

public:
  MyClass(int x) : x(x) {}

  MyClass &add5(int x = 5) {
    this->x = this->x + x;
    return *this;
  }
  void print() const { std::cout << x << '\n'; }

  void destroy() { delete this; }
};
int main() {
  MyClass *p = new MyClass(5);
  p->print();
  p->add5().print();
  p->destroy();
}
