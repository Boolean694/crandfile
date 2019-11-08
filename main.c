#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int newrand() {
  char buf[100];
  int op = open("/dev/random", O_RDONLY);
  int nby = read(op, *buf, 2);
}

int main() {

}
