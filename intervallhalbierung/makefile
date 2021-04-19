intervall: intervall.o f.o
	gcc -o intervall intervall.o f.o -lm

intervall.o: intervall.c f.h
	gcc -c -o intervall.o intervall.c

f.o: f.c
	gcc -c -o f.o f.c

clean:
	rm -f *.o

cleanall: 
	rm *.o main
