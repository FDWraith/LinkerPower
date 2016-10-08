listTest:
	gcc -c main.c list.c

run:
	gcc main.o list.o
	./a.out

clear:
	rm *~
