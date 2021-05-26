/**
 * decodierung.c
 * Decodiert einen Hamming-Code. Dabei wird ein, 1-Bit-Fehler, wenn vorhanden, erkannt und verbessert.
 * @author Michael Morandell
 * Datum: 07.05.2021
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Main-Methode
 */
int main (int argc, char *argv []) {
	//min anzahl an Argumenten
	if (argc != 3) {
		printf("use: ./decode.out <input file><output file>\n");
		exit(-1);
	}
	//Deklarationen
	int p0, p1, p2, p3, newp0, newp1, newp2, newp3, s0, s1, s2, s3, num;
	char s[12];
	char c;
	int weiter = 1;
	FILE *in, *out;
	//files werden geöffnet
	in = fopen(argv[1], "r");
	out = fopen(argv[2], "w");
	while(1) {
		//12 Chars werden gelesen
		weiter = 1;
		for (int  i = 0; i < 12; i++) {
			c = fgetc(in);
			if (c != EOF) {
				s[i] = c;
			}
			else {
				printf("hier\n");
				weiter = 0;
				break;
			}
			printf("hier2\n");
		}
		printf("hier3\n");
		if (weiter == 0) {
			break;
		}
		else {
			printf("hier4\n");
			printf("%s", s);
			//Die codierten Paritaten werden werden ausgelesen und gesepeichert
			p0 = s[0]-48;
			p1 = s[1]-48;
			p2 = s[3]-48;
			p3 = s[7]-48;
			//Neue Paritaeten werden berechnet
			newp0 = ((s[2]+s[4]+s[6]+s[8]+s[10])-(48*5))%2;
			newp1 = ((s[2]+s[5]+s[6]+s[9]+s[10])-(48*5))%2;
			newp2 = ((s[4]+s[5]+s[6]+s[11])-(48*4))%2;
			newp3 = ((s[8]+s[9]+s[10]+s[11])-(48*4))%2;
			//Unterschied wird ermittelt
			s0 = (p0 + newp0)%2;
			s1 = (p1 + newp1)%2;
			s2 = (p2 + newp2)%2;
			s3 = (p3 + newp3)%2;
			//Wenn es einen Unterschied in den Paritaetsbits gibt --> Fehler in der Uebertragung
			if (s0 || s1 || s2 || s3) {
				//Stelle des falschen Bits wird ermittelt
				num = ((s0*2*2*2) + (s1*2*2) + (s2*2) + s3)-1;
				//Verbesserung des Fehlers
				if (s[num] == '1') {
					s[num] = '0';
				}
				else {
					s[num] = '1';
				}
			}
			//decodierte Daten werden in die Datei geschrieben
			fprintf(out, "%c", s[2]);
			fprintf(out, "%c", s[4]);
			fprintf(out, "%c", s[5]);
			fprintf(out, "%c", s[6]);
			fprintf(out, "%c", s[8]);
			fprintf(out, "%c", s[9]);
			fprintf(out, "%c", s[10]);
			fprintf(out, "%c", s[11]);
		}
	}
	//files schließen
	fclose(in);
	fclose(out);
	return(0);
}
