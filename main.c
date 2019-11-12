#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "fn.h"
#include "string.h"

int main() {
  int ao[10];
  printf("Generating rand nums:\n");
  for(int q = 0; q < 10; q++) {
    ao[q] = newrand();
    printf("%d\n", ao[q]);
  }

  printf("\nWriting to file\n\n");
  int wr = open("rand.txt", O_RDWR | O_CREAT, 0666);
  write(wr, ao, sizeof(ao));
  close(wr);
  if(errno){printf("errno: %d\n",errno);printf("%s\n", strerror(errno));}

  printf("Reading data from file\n\n");
  int poi[10];
  int rd = open("rand.txt", O_RDONLY);
  read(rd, poi, sizeof(poi));
  printf("Let's verify that the numbers are the same:\n");
  for(int q = 0; q < 10; q++) {
    printf("%d\n", poi[q]);
  }
  if(errno){printf("errno: %d\n",errno);printf("%s\n", strerror(errno));}
  return 0;
}
