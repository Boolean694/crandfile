#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "fn.h"

int newrand() {
  int op = open("/dev/random", O_RDONLY);
  int buf;
  read(op, &buf, sizeof(int));
  if(errno){printf("errno: %d\n",errno);}
  close(op);
  return buf;
}
