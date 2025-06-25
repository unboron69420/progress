#include <bits/stdc++.h>
#include <string>

class MyClass {
public:
  int x;

  MyClass() { std::cout << "default" << x << '\n'; }

  MyClass(int value) {
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
  MyClass obj2(100);
  MyClass obj3 = obj2;
}
