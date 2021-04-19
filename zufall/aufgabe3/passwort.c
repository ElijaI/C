#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void) {
	int min = 33;
	int max = 126;
	int laenge, zufall;
	printf("Länge des Passwort: ");
	scanf(" %i", &laenge);
	char pw[laenge];
	srand(time(NULL));

	for (int i = 0; i < laenge; i++) {
		zufall = (rand()%((max+1)-min))+min;
		pw [i] = zufall;
	}
	for (int j = 0; j < laenge; j++) {
		printf("%c", pw [j]);
	}
	printf("\n");
	return (0);
}
