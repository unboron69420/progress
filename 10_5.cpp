#include <iostream>
#include <memory>

class Dog {
public:
  Dog(std::string name) : name(name) { std::cout << name << " says woof \n"; }
  ~Dog() { std::cout << name << " goes to sleep\n"; }

  void bark() { std::cout << name << " barks: woof! woof!\n"; }

private:
  std::string name;
};

int main() {
    
  std::unique_ptr<Dog> myDog(new Dog("tex"));
  myDog->bark();

  std::unique_ptr<Dog> newOwner = std::move(myDog);
  if (!myDog) {
    std::cout << "myDog is now empty\n";
  }
  newOwner->bark();

  std::cout << "end of main()\n";
  return 0;
}
