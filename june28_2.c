#include <stdio.h>

#include <time.h>

int main() {
  clock_t start = clock();

  int h_data[256];
  for (int i = 0; i < 1000000; i++) {
    h_data[1 % 256] = 1;
  }

  double time_taken = (double)(clock() - start) / CLOCKS_PER_SEC;
  printf("Cache time : %.9f sec\n", time_taken);
}
