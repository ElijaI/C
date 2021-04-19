#include <stdio.h>

char automat (char e);

int main (void) {
	char e = 0;
	while (scanf(" %c", &e) > 0) {
		printf("%c", automat(e)); fflush (stdout);	
	}
	printf("\n");
}

char automat(char e) {
	static int q = 0;
	switch (q) {
		case 0:
			switch (e) {
				case '0': {
					q = 0;
					return('0');
				}
				case '1': {
					q = 1;
					return('0');
				}
				deafault: {
			       		q = 0;
					return('e');
				}
			}
		case 1:
			switch (e) {
				case '0': {
					q = 0;
	      				return('0');
				}
				case '1': {
					q = 1;
					return('1');
				}
				default: {
					q = 0;
					return('e');
				}
			}
		}

	return('e');
}
