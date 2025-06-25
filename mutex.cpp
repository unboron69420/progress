#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

std::mutex mtx;
int counter = 0;

void increment() {
  for (int i = 0; i < 1000; ++i) {
    std::scoped_lock lock(mtx);
    ++counter;
  }
}

int main() {
  std::vector<std::thread> threads;
  for (int i = 0; i < 10; ++i) {
    threads.emplace_back(increment);
  }
  for (auto &t : threads) {
    t.join();
  }
  std::cout << "final counter " << counter << '\n';
}
