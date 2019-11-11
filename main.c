#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int newrand() {
  int op = open("/dev/random", O_RDONLY);
  int buf;
  int nby = read(op, &buf, sizeof(int));
  close(op);
  return buf;
}

int main() {
  int ao = newrand();
  printf("%d",ao);
}
