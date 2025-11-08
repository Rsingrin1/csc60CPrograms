
main: main.c area.a
	gcc -o main main.c -lm -L. -l:larea.a

area.a: area.o
	ar rcs larea.a area.o
area.o: area.c
	gcc -c area.c


clean:
	rm -f *.o *.a main