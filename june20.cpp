#include <iostream>

using namespace std;

int getInput() {
  int input;
  cin >> input;

  return input;
}

int main() {
  int num = getInput();

  cout << (num >> 1) << '\n';
}
