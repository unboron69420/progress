#include "bits/stdc++.h"
#include <climits>
#include <unordered_map>

using namespace std;

char findMinOcurChar(const string &s) {
  unordered_map<char, int> freq;

  for (char c : s) {
    freq[c]++;
  }

  int minFreq = INT_MAX;
  char result = '{';

  for (const auto &pair : freq) {
    if (pair.second < minFreq) {
      minFreq = pair.second;
      result = pair.first;

    } else if (pair.second == minFreq && pair.first < result) {
      result = pair.first;
    }
  }
  return result;
}

int main() {
  string input;
  cin >> input;

  char ans = findMinOcurChar(input);
  cout << "charwith min ovur:" << ans << '\n';

  return 0;
}
