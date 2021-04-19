#include <stdio.h>

int main(void) {
	int anzahl = 15;
	FILE *fp, *cal;
	char s [100];
	for (int i = 0; i < anzahl; i++) {
		fp = fopen("3ib.txt", "r");
		fgets(s, 99, fp);
		fclose(fp);
		cal = fopen("kalender.txt", "w");
		fprintf(cal, s);
		fclose(cal);
		printf("%s", s);
	}
	return(0);
}
