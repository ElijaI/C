#include <stdio.h>

int main(void)
{
	//Deklarieren der Variablen
	int eingabe, rest, i;
	int binwert[100];

	//Einleden des Wertes
	printf("Geben Sie einen Int Wert ein: ");
	scanf(" %i", &eingabe);

	//Initialisieren der Zählervariable
	i = 0;

	//Teilen der Zahl bis sie Null ist
	while (eingabe > 0) {
		rest = eingabe % 2;
		eingabe = eingabe / (float)2;
		binwert[i] = rest;
		i = i + 1;
	}

	//Ausgabe des Ergebnisses
	for(eingabe = 0; eingabe < i; eingabe++) {
		printf("%i", binwert[i-eingabe-1]);
	}
	printf("\n");


}
