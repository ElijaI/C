#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	FILE *fp;
	int min = 48;
	int max = 49;
	double r = max - min + 1;
	srand(time(NULL));
	fp = fopen("generiert.txt", "w");

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 8; j++) {
			fprintf(fp, "%c", rand() % 2);
		}
		fprintf(fp, "\n");
	}	
}
