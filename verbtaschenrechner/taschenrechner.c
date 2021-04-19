#include "stack.h"

int main(int argc, char *argv[]) {

	int zahl = 0;
	for (int i = 1; argv[i]; i++) {
		
		if(argv[i][0] != '+' && argv[i][0] != '-' && argv[i][0] != 'x' && argv[i][0] != '/') {
			
			zahl = atoi(argv[i]);
			push(zahl);
		
		} else {

			int r = pop();
			int l = pop();

			switch(argv[i][0]) {
				case '+': {
					push(l + r);
					break;
				}
				case '-': {
					push(l - r);
					break;
				}
				case 'x': {
					push(l * r);
					break;
				}
				case '/': {
					push(l / r);
					break;
				}
			}
		}
	}
	printf(" %i\n", pop());
	return(0);
}
