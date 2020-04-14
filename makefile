# Author: Indeep Farma
# Linked List Library

CFLAGS = -Wall -g -std=c11 -lm

all: main

linkedList.o: linkedList.c
	gcc $(CFLAGS) linkedList.c -c

main: linkedList.o main.c
	gcc $(CFLAGS) linkedList.o main.c -o main

clean:
	rm *.o main