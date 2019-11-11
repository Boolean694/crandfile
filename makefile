all: main.o fn.o
	gcc -o main.o fn.o

main.o: main.c
	gcc -c main.c

fn.o: fn.c fn.h
	gcc -c fn.c fn.h

run:
	./a.exe
