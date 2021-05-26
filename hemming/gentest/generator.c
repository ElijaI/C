/**
 * generator.c
 * Aufruf: gen.out <anzahl Bytes> <filename>
 * Generiert eine Datei random aus 1 und 0. Es werden anzahlBytes 1er und 0er generiert und in der,
 * beim Aufruf angegeben, Datei gespeichert.
 * @author: Michael Morandell
 * 15.03.2021 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (int argc, char *argv []) {
	//min anzahl an argumenten
	if (argc != 2) {
		printf("use: ./gen.out <filename>\n");
		exit(-1);
	}
	//Deklarationen
	FILE *fp;
	//datei wird zum schreiben geöffnet
	fp = fopen(argv[1], "w");
	for (int i = 0; i < 1; i++) {
		fprintf(fp, "%c", 48);
		fprintf(fp, "%c", 49);
		fprintf(fp, "%c", 49);
		fprintf(fp, "%c", 48);
		fprintf(fp, "%c", 48);
		fprintf(fp, "%c", 49);
		fprintf(fp, "%c", 48);
		fprintf(fp, "%c", 48);
		fprintf(fp, "%c", 48);
                fprintf(fp, "%c", 49);
                fprintf(fp, "%c", 49);
                fprintf(fp, "%c", 48);

	}
	//file wird geschlossen
	fclose(fp);
	return(0);
}
