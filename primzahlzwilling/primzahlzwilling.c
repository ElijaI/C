#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <sys/wait.h>

int primerk(int zahl) {
	int ret = 1;
	for(int i = 2; i <= sqrt(zahl) && ret == 1; i++) {
		if (zahl % i == 0) {
			ret = 0;
		}
	}
	return(ret);
}

int main(void) {
	FILE *fp1, *fp2, *fp3, *fp4;
	int rueck1, rueck2, rueck3, rueck4, j;
	int max = 400;
	int ber = max / 4;
	int ber1 = ber * 0;
	int ber2 = ber * 1;
	int ber3 = ber * 2;
	int ber4 = ber * 3;

	while(j <= 4) {
		rueck = fork();
		switch (rueck) {
			case -1: {
				printf("Error: Fehler beim erstellen des Kindprozesses");
				break;
			}

			case 0: {
				char name[10];
				sprintf(name, "kind%i.txt", j);
				fp = fopen(name, "w");
				for(int i = ber1 + 3; i < ber + ber1; i++) {
					int zwilling = primerk(i - 2) + primerk(i);
					if(zwilling == 2) {
						fprintf(fp1, "%i, %i\n", i - 2, i);
					}
				}
				fclose(fp);
				exit(0);
			}

			default: {
				wait(NULL);
				break;
			}
		}
	}
}
