#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int zufall() {
	return ((rand() % 6) + 1);
}

int main () {
	srand(time(NULL));
	int a;
	a = 0;
	int feld[60];

	for(int i = 1; i <= 2; i++) {
		for(int j = 0; j < 100000; j++) {
			for(int k = 0; k < i; k++) {
				a = zufall();			
				feld[a] = feld[a] + 1;			
			}			
		}
	for(int i = 1; i <= 60; i++) {
		printf("%i: %i\n",i, feld[i]);
	}
	for(int i = 1; i <= 60; i++) {
		feld[i] = 0;
	}
	a = 0;
	}
	return (0);
}
