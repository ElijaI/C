testprog: testprog.o stack.o
	gcc -o testprog testprog.o stack.o

testprog.o: testprog.c stack.h
	gcc -o testprog.o -c testprog.c

stack.o: stack.c
	gcc -o stack.o -c stack.c


