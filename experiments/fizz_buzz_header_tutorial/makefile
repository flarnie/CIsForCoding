fizz.o: fizz.c fizz.h
	gcc -c fizz.c

buzz.o: buzz.c buzz.h
	gcc -c buzz.c

fizz_buzz: fizz_buzz_original.c fizz.o buzz.o
	gcc fizz_buzz_original.c fizz.o buzz.o -o fizz_buzz
