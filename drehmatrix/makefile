drehmatrix: module.o drehmatrix.o
	gcc -o drehmatrix  module.o drehmatrix.o -lm

module.o: module.c
	gcc -c -o module.o module.c

drehmatrix.o: drehmatrix.c
	gcc -c -o drehmatrix.o drehmatrix.c

run:
	./drehmatrix > temp.csv
	cat temp.csv | tr \. \, > drehmatrix.csv
