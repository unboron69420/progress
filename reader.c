#include <fcntl.h>
#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

int main() {
  int fd = shm_open("/cachemem", O_RDONLY, 0666);
  int *data = mmap(NULL, 256, PROT_READ, MAP_SHARED, fd, 0);

  clock_t start = clock();

  for (int i = 0; i < 1000000; i++) {

    int value = data[i % 256]; // Just read without printing
  }

  double time_taken = (double)(clock() - start) / CLOCKS_PER_SEC;
  printf("Speed: %.2f ns per read\n", time_taken * 1e9 / 1000000);
}
