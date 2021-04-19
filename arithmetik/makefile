main: main.o diff.o divis.o prod.o sum.o
	gcc -o main main.o diff.o divis.o prod.o sum.o

main.o: main.c diff.h divis.h prod.h sum.h
	gcc -c -o main.o main.c

diff.o: diff.c
	gcc -c -o diff.o diff.c

divis.o: divis.c
	gcc -c -o divis.o divis.c

prod.o: prod.c
	gcc -c -o prod.o prod.c

sum.o: sum.c
	gcc -c -o sum.o sum.c

clean:
	rm -f *.o

cleanall:
	rm *.o main
