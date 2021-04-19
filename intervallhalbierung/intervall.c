#include <stdio.h>
#include "f.h"

int main(void)
{
	float a, b, x, y;
	a = 0;
	b = 0;
	y = 2;
	printf("Geben Sie den a Wert ein: \n");
	scanf(" %f", &a);
	printf("Geben Sie den b Wert ein: \n");
	scanf(" %f", &a);
	while (y != 0) {
		x = (a + b) / 2;
		y = f(x);
		if (y < 0) {
			b = x;
		}
		if (y > 0) {
			a = x;
		}
	}
	printf(" %f", x);

			
}
