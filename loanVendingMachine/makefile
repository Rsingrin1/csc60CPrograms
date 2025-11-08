
main: display.o selection.o main.o
	gcc main.o display.o selection.o -lm -o main

display.o: display.c
	gcc -c display.c
selection.o: selection.c
	gcc -c selection.c
main.o: main.c main.h
	gcc -c main.c

