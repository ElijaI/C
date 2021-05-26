#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv []){
	
	if (argc != 2) {
		printf("use: ./generator <Anzahl der Bytes>\n");
		exit(-1);
	}

	FILE *fp;
	int min = 48;
	int max = 49;
	double r = max - min + 1;
	srand(time(NULL));
	int k = atoi(argv[1]);
	fp = fopen("generiert.txt", "w");

	for(int i = 0; i < 8 * k; i++) {
			fprintf(fp, "%i", rand() % 2);
	}

	fclose(fp);	
}
