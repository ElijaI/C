#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv []) {
	//min anzahl an argumenten
	if (argc != 4) {
		printf("use: ./fehler.out <file input><file output><anzahl fehler>\n");
		exit(-1);
	}
	//Deklarationen
	FILE *in, *out;
	char c;
	int random;
	int count = 0;
	//Zeichen der inputdatei werden gezaelt
	in = fopen(argv[1], "r");
	while (fgetc(in) != EOF) {
		count++;
	}
	fclose(in);
	//Deklarationen für random
	int min = 1;
	int max = count/atoi(argv[3]);
	double r = max -min +1;
	srand(time(NULL));
	count = 0;
	//dateien werden geoeffnet
	in = fopen(argv[1], "r");
	out = fopen(argv[2], "w");
	//Solange die anzahl der fehler kleiner ist als übergeben...
	while (count < atoi(argv[3])) {
		//random zeichen wird gelesen und geschrieben
		random = min + (int)(r * rand()/(RAND_MAX+1.0));
		for (int i = 0; i < random; i++) {
			c = (char)fgetc(in);
			//Beim letzten zeichen (im jeweiligen Randomintervall) wird 1 mit 0 getausch und 0 mit 1 > also fehler 
			if (i == random-1) {
				if (c == '0') {
					c = '1';
				}
				else { 
					c = '0';
				}
			}
			fprintf(out, "%c", c);
		}
		count++;		
	}
	//Wenn von der input datei noch was übrig, dann wird dies noch in die output datei geschrieben, sodass diesselbe anzahl an zeichen
	while (1) {
		count = fgetc(in);
		if (count != EOF) {
			c = (char)count;
			fprintf(out, "%c", c);
		}
		else {
			break;
		}
	}
	//schließen der files
	fclose(in);
	fclose(out);
	return(0);
}
