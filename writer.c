#include <fcntl.h>
#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
int main() {
  int fd = shm_open("/cachemem", O_CREAT | O_RDWR, 0666);
  ftruncate(fd, 256);
  int *data = mmap(NULL, 256, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

  for (int i = 0; i < 1000000; i++) {
    data[i % 256] = i;
  }
}
