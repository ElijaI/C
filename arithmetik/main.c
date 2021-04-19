#include <stdio.h>
#include "sum.h"
#include "diff.h"
#include "prod.h"
#include "divis.h"

int main(void) {
	float a, b;
	char d, c;
	do {
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		printf("Geben Sie die erste Zahl ein: ");
		scanf(" %f", &a);
		printf("Geben Sie die zweite Zahl ein: ");
		scanf(" %f", &b);
		printf("a: Addition | s: Subtraktion | m: Multiplikation | d: Division ");
		scanf(" %c", &c);
		switch (c)
		{
			case 'a': printf("%f + %f = %f\n", a, b, sum(a, b)); break;
			case 's': printf("%f - %f = %f\n", a, b, diff(a, b)); break;
			case 'm': printf("%f * %f = %f\n", a, b, prod(a, b)); break;
			case 'd': printf("%f / %f = %f\n", a, b, divis(a, b)); break;
			default: printf("Kein gültiger Buchstabe :(\n");
		}
		printf("w: Wiederholen || a: Abbrechen\n");
		scanf(" %c", &d);
	}while (d == 'w');
	return (0);
}
