#include <stdio.h>

double fakt (double a) {
        double ret = 1;
        if (a > 0) {
                ret = a*fakt(a-1);
        }
        return(ret);
}

int main (void) {
	double a;
	printf("Fakultät von: ");
	scanf(" %lf", &a);
	printf("\n");
	double  b = fakt(a);
	printf("%f\n", b);
	return(0);
}
