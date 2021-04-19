#include <stdio.h>

long a [500];
// Rekursive Fibonacci-Methode
long fib(long n) {
	long ret;
	if(a[n] != -2) {
		ret = a[n];
	}
	else{
		if(n > 2) {
			a[n] = fib(n-1)+fib(n-2);
        	        ret = (fib(n-1)+fib(n-2));
        	}
		else{
                	a[n] = 1;
			ret = 1;
        	}
	}
	return(ret);	
}

int main (void) {
        long input;
	for(long i = 0; i < 500; i++){
		a[i] = -2;
	}
	printf("Fibonacci-Lösungsweg 2 mit INT-Array\n");
	printf("====================================\n");
        printf("Fibonacci-Zahl von: ");
        scanf(" %ld", &input);
        printf("\n");
        long out = fib(input);
        printf("%ld\n", out);
        return(0);
}
