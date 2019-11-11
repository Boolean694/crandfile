#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char *newrand() {
  char buf[8];
  int op = open("/dev/random", O_RDONLY);
  int nby = read(op, buf, sizeof(int));
  char *bruh = buf;
  return bruh;
}

int main() {
  char *ao = newrand();
  for(int q = 0; q < sizeof(ao)/sizeof(int); q++) {
    printf("%d ", ao[q]);
  }
}
