#include <bits/stdc++.h>
#include <string>

class MyClass {
public:
  int x;
  bool b1 {true};

  MyClass(): x(100) {
    std::cout << "default" << x << '\n';
  }

  explicit MyClass(const int value) {
    x = value;
    std::cout << "parameterised" << x << '\n';
  }

  MyClass(const MyClass &other) {
    x = other.x;
    std::cout << "copy" << x << '\n';
  }
};

int main() {
  MyClass obj1;
  const MyClass obj2(100);
  MyClass obj3 = obj2 ;
}
