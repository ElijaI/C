#include <stdio.h>
#include <math.h>

void potenz(int zahl, int *n2, int *n3, int *n4)
{
	*n2 = (int)pow(zahl, 2);
	*n3 = (int)pow(zahl, 3);
	*n4 = (int)pow(zahl, 4);
}

int main(void)
{
	int n, n2, n3, n4;
	printf("n; n²; n³; n⁴ \n");
	for(n = 1; n <= 10; n = n + 1){
		potenz(n, &n2, &n3, &n4);
		printf("%i; %i; %i; %i\n", n, n2, n3, n4);
	}
	return 0;
}
