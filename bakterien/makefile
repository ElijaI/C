matrix: module.o bakterien.o
	gcc -o bakterien.out module.o bakterien.o

module.o: module.c
	gcc -c -o module.o module.c

bakterien.o: bakterien.c
	gcc -c -o bakterien.o bakterien.c
run:
	./bakterien.out > bakterien1.csv
	cat bakterien1.csv | tr \. \, > bakterien2.csv

