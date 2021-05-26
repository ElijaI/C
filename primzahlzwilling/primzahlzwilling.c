#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <sys/wait.h>

int primerk(int zahl) {
	for(int i = 2; i <= sqrt(zahl); i++) {
		if (zahl % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(void) {
	int rueck, letzte, aktuelle, buf;
	int j = 0;
	int max = 400;
	int ber = max / 4;
	int pipefd[4][2];
	while(j < 4) {
		
		if(pipe(pipefd[j]) < 0) {
			printf("Pipe Error\n");
			exit(1);
		}

		rueck = fork();
		switch (rueck) {
			case -1: {
				printf("Error: Fehler beim erstellen des Kindprozesses");
				break;
			}

			case 0: {
				close(pipefd[j][0]);
				char name[30];
				int kindber = ber * j;
				sprintf(name, "kind%i.txt", j);

				for(int i = kindber; i < ber + kindber; i++) {
					if (primerk(i)) {	
						if(i - letzte == 2) {
							if(write(pipefd[j][1], &i, sizeof(i)) < 0)
								printf("Error write\n");
						}
						letzte = i;
					}
				}
				exit(0);
			}

			default: {
				fcntl(pipefd[j][0], F_SETFD, fcntl(piprfd[j][0], F_GETFD) | O_NONBLOCK);
				close(pipefd[j][1]);
				int abbruch = 4;
				while (abbruch > 0)

				j++;
				break;
			}
		}

	}
	
}
