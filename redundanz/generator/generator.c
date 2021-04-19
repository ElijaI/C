#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (int argc, char *argv []) {
	//min anzahl an argumenten
	if (argc != 3) {
		printf("use: ./gen.out <anzahl bytes> <filename>\n");
		exit(-1);
	}
	//Deklarationen
	FILE *fp;
	int x = atoi(argv[1]);
	int min = 48;
	int max = 49;
	double r = max - min +1;
	//init von rand
	srand(time(NULL));
	//datei wird zum schreiben geöffnet
	fp = fopen(argv[2], "w");
	//Solange bis die max Anzahl erreicht ist, die im Argument angegeben wurde...
	for (int i = 0; i < 8 * x; i++) {
		//zufällige ermittlung von 0 oder 1 als char
		char c = (char)min+(int)(r* rand()/(RAND_MAX+1.0));
		//schreiben
		fprintf(fp, "%c", c);
	}
	//file wird geschlossen
	fclose(fp);
	return(0);
}
