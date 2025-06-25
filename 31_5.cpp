#include <bits/stdc++.h>
#include <fstream>

using namespace std;
int main() {
  int rows = 5;

  for (int i = 1; i <= rows; ++i) {

    for (int star = 1; star <= 2 * i - 1; ++star) {
      std::cout << "*";
    }
    cout << '\n';
  }

  return 0;
}
