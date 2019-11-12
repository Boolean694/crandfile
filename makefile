all: fn.o main.o
	gcc -o bruh fn.o main.o

main.o: main.c
	gcc -c main.c

fn.o: fn.c fn.h
	gcc -c fn.c fn.h

run:
	./bruh
