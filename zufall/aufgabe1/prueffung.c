#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	//Variablen werden deklariert
	int a, b, c;
	
	//Ein offset wird eingegebe
	printf("Offset: ");
	scanf("%i", &a);
	srand(time(NULL) + a);
	
	//Die Größer der Klasser wird eingegeben
	printf("Größe der Klasse: ");
	scanf("%i", &b);
	
	//Es wird öfters gewürfelt
	for(int i = 0; i < rand() % 21; i++) {
		c = 1 + (rand() % b);
	}
	
	//Ausgabe der Zahl
	printf("Schüler Nr: %i\n", c);

	return 0;
}
