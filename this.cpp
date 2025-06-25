#include <bits/stdc++.h>
#include <string>
using namespace std;

class Person {
public:
  int age;
  string name;

  Person(string name, int age) {
    this->name = name;
    this->age = age;
  }

  Person &setName(string name) {
    this->name = name;
    return *this;
  }

  Person &setAge(int age) {
    this->age = age;
    return *this;
  }

  void Intro(Person *other) {
    cout << this->name << "meets" << other->name << '\n';
  }

  void Print() { cout << "name: " << name << "age: " << age << '\n'; }
};
int main() {
  Person p1("nav", 20);
  Person p2("thor", 1000);
  p1.Print();
  p2.Print();

  p1.setName("loki").setAge(100).Print();
  p1.Intro(&p2);

  return 0;
}
