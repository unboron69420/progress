#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>
int main() {
  std::vector<int> nums = {4, 2, 7, 1, 5, 6, 8, 10};

  // Create a new vector with filtered elements
  auto filtered = nums | std::views::filter([](int x) { return x % 2 == 0; });
  std::vector<int> even_nums(filtered.begin(), filtered.end());

  // Sort the new vector
  std::ranges::sort(even_nums);

  for (int n : even_nums) {
    std::cout << n << " "; // Output: 2 4
  }
}
