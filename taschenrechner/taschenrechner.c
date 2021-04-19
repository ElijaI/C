#include "stack.h"

int main(void) {
	
	//Ausgabe der Überschrift
	printf("Taschenrechner\n");
	printf("==============\n");

	//Deklarieren und initialisieren der Variablen
	char s[1000];
	int i = 0;
	int j = 0;
	int a = 0;

	//Einlesen der Rechung
	fgets(s, 999, stdin);
	int lae = strlen(s) - 1;

	//Auswerten der Eingabe
	while (i < lae) {
		if(s[i] != ' ') {
			if(s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/') {
				sscanf(&s[i], "%i", &a);
				push(a);
				for (j = i + 1; (s[j] != ' ') && (j < lae); j++) {
					
				}
				i = j + 1;
			} else {
				int r = pop();
				int l = pop();

				switch(s[i]) {
					case '+': {
						push(l + r);
						break;
					}
					case '-': {
						push(l - r);
						break;
					}
					case '*': {
						push(l * r);
						break;
					}
					case '/': {
						push(l / r);
						break;
					}
				}
				i++;
			}
		} else {
			i++;
		}
	}
	printf("Ergebnis = %i\n", pop());
}
