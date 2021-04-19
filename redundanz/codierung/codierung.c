#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv []) {
	//min. Anzahl an argumenten
	if (argc != 3) {
		printf("use: ./code.out <filename input> <filename output>\n");
		exit(-1);
	}
	//Deklarationen
	FILE *in, *out;
	char c;
	int count = 0;
	int one = 0;
	//files werden geöffnet
	in = fopen(argv[1], "r");
	out = fopen(argv[2], "w");
	while(1) {
		c = fgetc(in);
		//wenn nicht am ende der datei
		if (c != EOF) {
			//wenn 1, dann wird ein zaehler erhöht
			if (c == '1') {
				one++;
			}
			//schreiben in die neue datei
			fprintf(out, "%c", c);
			count++;
			//nach 8 bits
			if (count == 8) {
				//Wenn anzahl 1sen gerade, 0 wird geschrieben
				if ((one % 2) == 0) {
					c = '0';
				}
				//ansonsten wird 1 geschrieben
				else {
					c = '1';
				}
				fprintf(out, "%c", c);
				//reset
				count = 0;
				one = 0;
			}
		}
		//abbruch, wenn am Ende der Datei
		else {
			break;
		}
	}
	//Files werden geschlossen
	fclose(out);
	fclose(in);
	return(0);
}
