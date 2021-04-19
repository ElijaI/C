#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	//Variablen werden deklariert
	int a, n1, n2, n3, n4, n5, n6, n7, n8 , n9, n10;
	
	//Variablen initialisieren
	a = 0;
	n1 = 0;
	n2 = 0;
	n3 = 0;
	n4 = 0;
	n5 = 0;
	n6 = 0;
	n7 = 0;
	n8 = 0;
	n9 = 0;
	n10 = 0;

	//Ein offset wird eingegeben
	printf("Offset: ");
	scanf("%i", &a);
	srand(time(NULL) + a);
	
	for(int i = 0; i < 10000000; i++) {
		for(int j = 0; j < rand() % 21; j++) {
			a = 1 + (rand() % 10);
		}

		//Erhöhung der Variable falls die Zahl gewürfelt wurde
		switch(a) {
			case 1: n1++; break;
			case 2: n2++; break;
			case 3: n3++; break;
			case 4: n4++; break;
			case 5: n5++; break;
			case 6: n6++; break;
			case 7: n7++; break;
			case 8: n8++; break;
			case 9: n9++; break;
			case 10: n10++; break;
		}
	}
	
	//Ausgabe der Zahlen
	printf("Zahl 1:  %i\n", n1);
	printf("Zahl 2:  %i\n", n2);
	printf("Zahl 3:  %i\n", n3);
	printf("Zahl 4:  %i\n", n4);
	printf("Zahl 5:  %i\n", n5);
	printf("Zahl 6:  %i\n", n6);
	printf("Zahl 7:  %i\n", n7);
	printf("Zahl 8:  %i\n", n8);
	printf("Zahl 9:  %i\n", n9);
	printf("Zahl 10: %i\n", n10);

	return 0;
}
